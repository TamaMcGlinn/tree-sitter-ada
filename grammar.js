module.exports = grammar({
  name: 'Ada',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.with_statement,
      $.use_clause,
      $.procedure_definition
    ),

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
      field('end_name', $.identifier),
      ';'
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
      $.number
    ),

    parameter_declaration: $ => seq(
      field('parameter_name', $.identifier),
      ':',
      field('type', $.identifier)
    ),

    argument_list: $ => seq('(', commaSep($._expression), ')'),

    expressions: $ => seq($._expression_statement, repeat($._expression_statement)),

    _expression_statement: $ => seq(
      $.expression,
      ';'
    ),

    expression: $ => choice(
      $.null_statement,
      $.declare_block
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

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
    ),

    package_name: $ => /[a-zA-Z_.]+/,

    identifier: $ => /[a-zA-Z_]+/,

    number: $ => /\d+/
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
