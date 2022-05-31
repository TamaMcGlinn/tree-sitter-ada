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
      $.identifier,
      'is',
      'begin',
      'end',
      ';'
    ),

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
      // TODO: other kinds of expressions
    ),

    package_name: $ => /[a-zA-Z_.]+/,

    identifier: $ => /[a-zA-Z_]+/,

    number: $ => /\d+/
  }
});
