module.exports = grammar({
  name: 'Ada',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.with_statement,
      $.use_clause,
      $.procedure_definition,
      $.function_definition,
      $.comment
    ),

    comment: $ => seq('--', optional($.comment_body)),

    comment_body: $ => /.+/,

    with_statement: $ => seq(
      'with',
      $.package_name,
      ';'
    ),

    use_clause: $ => seq(
      'use',
      $.package_name,
      ';'
    ),

    procedure_definition: $ => seq(
      'procedure',
      field('name', $.identifier),
      field('parameter_list', optional($.parameter_list)),
      'is',
      field('declarations', optional($._declarations)),
      'begin',
      field('procedure_body', $.expressions),
      'end',
      field('end_name', optional($.identifier)),
      ';'
    ),

    function_definition: $ => seq(
      'function',
      field('name', $.identifier),
      field('parameter_list', optional($.parameter_list)),
      optional($._return_clause),
      'is',
      field('declarations', optional($._declarations)),
      'begin',
      field('function_body', $.expressions),
      'end',
      field('end_name', optional($.identifier)),
      ';'
    ),

    _return_clause: $ => seq(
      'return',
      field('return_type', $.identifier)
    ),

    _declarations: $ => seq($.declaration, repeat(
      $.declaration
    )),

    parameter_list: $ => seq(
      '(',
      semicolonSep($.parameter_declaration),
      ')'
    ),

    variable_declaration: $ => seq(
      field('variable_name', $.identifier),
      ':',
      field('type', $.identifier),
      field('initial_value', optional($.variable_initialization))
    ),

    variable_initialization: $ => seq(
      ':=',
      $.numeric_literal
    ),

    parameter_declaration: $ => seq(
      field('parameter_name', $.identifier),
      ':',
      field('type', $.identifier)
    ),

    argument_list: $ => seq('(', commaSep($.value), ')'),

    expressions: $ => seq($._expression_statement, repeat($._expression_statement)),

    _expression_statement: $ => seq(
      $.expression,
      ';'
    ),

    expression: $ => choice(
      $.null_statement,
      $.declare_block,
      $.return_statement
    ),

    return_statement: $ => seq(
      'return',
      $.value
    ),

    declare_block: $ => seq(
      'declare',
      field('declarations', optional($.declaration)),
      'begin',
      field('expressions', $.expressions),
      'end'
    ),

    declaration: $ => choice(
      $.variable_declaration,
      $.procedure_definition
    ),

    null_statement: $ => 'null',

    parameter_list: $ => seq(
      '(',
       // TODO: parameters
      ')'
    ),

    _type: $ => choice(
      'bool'
      // TODO: other kinds of types
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.return_statement
      // TODO: other kinds of statements
    ),

    value: $ => choice(
      $.identifier,
      $.numeric_literal
    ),

    // TODO allow unicode names
    package_name: $ => /[a-zA-Z_.]+/,

    identifier: $ => /[a-zA-Z_]+/,

    numeric_literal: $ => choice(
      $.real_literal,
      $.integer_literal
    ),

    integer_literal: $ => /\d+/,

    real_literal: $ => /[\d.]+/
  }
});

function commaSep (rule) {
  return optional(commaSep1(rule))
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function semicolonSep (rule) {
  return optional(semicolonSep1(rule))
}

function semicolonSep1 (rule) {
  return seq(rule, repeat(seq(';', rule)))
}
