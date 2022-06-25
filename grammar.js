module.exports = grammar({
  name: 'Ada',

  conflicts: $ => [
    [$.generic_renaming_declaration, $.generic_formal_part],
    [$.context_clause],
    [$.prefix, $.implicit_dereference, $.function_call],
    [$.subtype_mark, $.prefix, $.implicit_dereference, $.function_call],
    [$.function_call, $.nonlimited_with_clause],
    [$.explicit_dereference, $.function_call],
    [$.defining_identifier, $.direct_name],
    [$.prefix, $.implicit_dereference, $.function_call, $.parent_unit_name],
    [$.procedure_specification, $.generic_instantiation],
    [$.direct_name, $.defining_operator_symbol],
    [$.function_call, $.use_package_clause],
    [$.function_call, $.limited_with_clause],
    [$.subtype_mark, $.function_call],
    [$.function_call, $.parent_unit_name],
    [$.defining_identifier_list, $.object_renaming_declaration, $.exception_renaming_declaration],
    [$.subprogram_specification, $.null_procedure_declaration],
    [$.function_call, $.subprogram_renaming_declaration],
    [$.primary, $.operator_symbol],
    [$.primary, $.type_conversion, $.function_call],
    [$.primary, $.function_call],
    [$.attribute_designator],
    [$.primary, $.function_call, $.explicit_actual_parameter],
    [$.subtype_mark, $.primary, $.function_call, $.explicit_actual_parameter],
    [$.indexed_component, $.explicit_actual_parameter],
    [$.function_call, $.package_renaming_declaration],
    [$.prefix, $.implicit_dereference, $.function_call, $.local_name],
    [$.function_call, $.local_name],
    [$.name, $.local_name],
    [$.name, $.local_name, $.at_clause],
    [$.defining_identifier, $.statement_identifier],
    [$.subtype_mark, $.prefix, $.implicit_dereference, $.function_call, $.entry_call_statement],
    [$.procedure_call_statement, $.function_call, $.entry_call_statement],
    [$.assignment_statement, $.function_call],
    [$.direct_name, $.selector_name],
    [$.discrete_choice, $.component_choice_list],
    [$.name, $.selector_name],
    [$.subtype_mark, $.primary, $.function_call],
    [$.record_component_association, $.positional_array_aggregate],
    [$.record_component_association, $.primary],
    [$.subtype_mark, $.prefix, $.implicit_dereference, $.function_call, $.generic_instantiation],
    [$.function_call, $.generic_instantiation],
    [$.function_call, $.default_name],
    [$.function_call, $.generic_renaming_declaration],
    [$.full_type_declaration, $.discriminant_part],
    [$.exit_statement, $.function_call],
    [$.goto_statement, $.function_call],
    [$.function_call, $.requeue_statement],
    [$.function_call, $.abort_statement],
    [$.delay_alternative, $.triggering_statement],
    [$.entry_call_alternative, $.triggering_statement],
    [$.function_call, $.raise_statement],
    [$.procedure_call_statement, $.entry_call_statement],
    [$.procedure_call_statement, $.function_call],
    [$.defining_program_unit_name, $.package_body_stub],
    [$.subtype_mark, $.primary, $.type_conversion, $.function_call],
    [$.discriminant_association, $.type_conversion],
    [$.subtype_mark, $.prefix, $.implicit_dereference, $.primary, $.function_call],
    [$.positional_array_aggregate],
    [$.expression],
    [$.relation],
    [$.simple_expression],
    [$.term],
    [$.factor],
    [$.record_component_association, $.qualified_expression],
    [$.subtype_indication],
    [$.subtype_mark, $.primary, $.function_call, $.explicit_generic_actual_parameter],
    [$.subtype_mark, $.prefix, $.implicit_dereference, $.function_call, $.formal_package_declaration],
    [$.function_call, $.formal_package_declaration],
    [$.component_list],
    [$.function_call, $.exception_choice],
    [$.function_call, $.exception_renaming_declaration],
    [$.function_call, $.object_renaming_declaration],
    [$.subtype_indication, $.type_conversion],
    [$.primary, $.function_call, $.attribute_definition_clause],
    [$.relation, $.type_conversion],
    [$.digits_constraint],
    [$.delta_constraint],
    [$.generic_actual_part, $.formal_package_association],
    [$.range_attribute_designator],
    // insertion marker
  ],

  rules: {
    // The Ada syntax as defined in the Ada 2012 Reference Manual
    // See http://ada-auth.org/standards/12rm/html/RM-TOC.html

    // Occasionally, it is much easier to deviate from the literal text of the standard,
    // and sometimes this parser is more liberal than the standard. In these cases, we put:
    // Note: deviation from RM text

    // Some prefixes mean nothing syntactically, and hence we remove it. You can tell by looking
    // on the webpage, which part of the name is not included in the link.
    // E.g. static_ discrete_
    // Careful! not all occurences of the prefix are excluded from the link. 
    // For example, discrete_subtype_definition is a separate definition from subtype_definition

    // to start things off, we need a single item that can match the empty string
    source_file: $ => optional($.compilation),

    // deprecated improv (until end improv)
    // _definitions: $ => at_least_one($._definition),
    //
    // _definition: $ => choice(
    //   $.with_statement,
    //   $.use_clause,
    //   $.procedure_definition,
    //   $.function_definition,
    //   $.procedure_declaration,
    //   $.function_declaration,
    //   $.comment,
    //   $.package_specification,
    //   $.pragma,
    // ),
    //
    // package_specification: $ => seq(
    //   'package',
    //   field('name', $.package_name),
    //   'is',
    //   field('definitions', optional($._definitions)),
    //   'end',
    //   field('end_name', optional($.identifier)),
    //   ';'
    // ),
    //
    // package_body: $ => seq(
    //   'package',
    //   'body',
    //   field('name', $.package_name),
    //   'is',
    //   field('definitions', optional($._definitions)),
    //   'end',
    //   field('end_name', optional($.identifier)),
    //   ';'
    // ),
    //
    // with_statement: $ => seq(
    //   'with',
    //   $.package_name,
    //   ';'
    // ),
    //
    // use_clause: $ => seq(
    //   'use',
    //   $.package_name,
    //   ';'
    // ),
    //
    // procedure_definition: $ => seq(
    //   'procedure',
    //   field('name', $.identifier),
    //   field('parameter_list', optional($.parameter_list)),
    //   'is',
    //   field('declarative_part', optional($.declarative_part)),
    //   'begin',
    //   field('procedure_body', $.expressions),
    //   'end',
    //   field('end_name', optional($.identifier)),
    //   ';'
    // ),
    //
    // procedure_declaration: $ => seq(
    //   'procedure',
    //   field('name', $.identifier),
    //   field('parameter_list', optional($.parameter_list)),
    //   ';'
    // ),
    //
    // function_definition: $ => seq(
    //   'function',
    //   field('name', $.identifier),
    //   field('parameter_list', optional($.parameter_list)),
    //   optional($._return_clause),
    //   'is',
    //   field('declarative_part', optional($.declarative_part)),
    //   'begin',
    //   field('function_body', $.expressions),
    //   'end',
    //   field('end_name', optional($.identifier)),
    //   ';'
    // ),
    //
    // function_declaration: $ => seq(
    //   'function',
    //   field('name', $.identifier),
    //   field('parameter_list', optional($.parameter_list)),
    //   optional($._return_clause),
    //   ';'
    // ),
    //
    // _return_clause: $ => seq(
    //   'return',
    //   field('return_type', $.identifier)
    // ),
    //
    // parameter_list: $ => seq(
    //   '(',
    //   semicolonSep($.parameter_declaration),
    //   ')'
    // ),
    //
    // variable_declaration: $ => seq(
    //   field('variable_name', $.identifier),
    //   ':',
    //   field('type', $.identifier),
    //   field('initial_value', optional($.variable_initialization)),
    //   ';'
    // ),
    //
    // variable_initialization: $ => seq(
    //   ':=',
    //   $.literal
    // ),
    //
    // parameter_declaration: $ => seq(
    //   field('parameter_name', $.identifier),
    //   ':',
    //   field('type', $.identifier),
    //   field('default_value', optional($.variable_initialization))
    // ),
    //
    // argument_list: $ => seq('(', commaSep($.value), ')'),
    //
    // expressions: $ => at_least_one($._expression_statement),
    //
    // _expression_statement: $ => seq(
    //   $.expression,
    //   ';'
    // ),
    //
    // expression: $ => choice(
    //   $.null_statement,
    //   $.block_statement,
    //   $.return_statement
    // ),
    //
    // return_statement: $ => seq(
    //   'return',
    //   $.value
    // ),
    //
    // null_statement: $ => 'null',
    //
    // _statement: $ => choice(
    //   $.return_statement
    //   // TODO: other kinds of statements
    // ),
    //
    // value: $ => choice(
    //   $.identifier,
    //   $.literal
    // ),
    //
    // // TODO allow unicode names
    // package_name: $ => /[a-zA-Z_\.]+/,
    // end improv

    // See http://ada-auth.org/standards/12rm/html/RM-2-3.html
    // TODO allow unicode identifiers
    // See https://stackoverflow.com/questions/72532258/where-is-the-actual-character-set-for-ada-program-text-defined
    // oddly enough, allowing everything but a few special characters with [^ ;+-=]+ or similar gives parsing errors elsewhere
    // Note: deviation from RM text
    identifier: $ => /[a-zA-Z_]+/,

    // See http://ada-auth.org/standards/12rm/html/RM-2-4.html
    numeric_literal: $ => choice(
      $.decimal_literal,
      $.based_literal
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-2-4-1.html
    // 2
    decimal_literal: $ => seq(
      $.numeral,
      optional(seq('.', $.numeral)),
      optional($.exponent)
    ),

    // 3
    numeral: $ => seq($._digit_or_underline, repeat($._digit_or_underline)),
    // Note: deviation from RM text
    _digit_or_underline: $ => /[\d_]+/,

    // 4
    exponent: $ => seq(
      'E',
      field('sign', optional(/[+-]/)),
      $.numeral
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-2-4-2.html
    // 2
    based_literal: $ => seq(
      $.base,
      '#',
      $.based_numeral,
      optional(seq('.', $.based_numeral)),
      '#',
      optional($.exponent)
    ),

    // 3
    base: $ => $.numeral,

    // 4
    based_numeral: $ => seq(
      $.extended_digit,
      repeat($.extended_digit)
    ),

    // 5
    extended_digit: $ => /[0-9A-F_]+/,

    // See http://ada-auth.org/standards/12rm/html/RM-2-5.html
    character_literal: $ => seq(
      "'",
      /./,
      "'"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-2-6.html
    // 2
    string_literal: $ => seq(
      '"',
      repeat($.string_element),
      '"'
    ),

    // 3
    string_element: $ => choice(
      /[^"]/,
      '""',
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-2-7.html
    comment: $ => /--[^\n]*/,

    // See http://ada-auth.org/standards/12rm/html/RM-2-8.html
    // 2
    pragma: $ => seq(
      'pragma',
      field('name', $.identifier),
      optional(seq(
        '(',
        commaSep(field('argument', $.pragma_argument_association)),
        ')'
      )),
      ';'
    ),

    // 3
    pragma_argument_association: $ => seq(
      optional(seq($.identifier, "=>")), 
      choice(
        $.name,
        $.expression
      )
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-1.html
    // 3/2
    basic_declaration: $ => choice(
      $.type_declaration, 
      $.subtype_declaration,
      $.object_declaration,
      $.number_declaration,
      $.subprogram_declaration,
      $.abstract_subprogram_declaration,
      $.null_procedure_declaration,
      $.package_declaration,
      $.renaming_declaration,
      $.exception_declaration,
      $.generic_declaration,
      $.generic_instantiation
    ),

    // 4
    defining_identifier: $ => $.identifier,

    // See http://ada-auth.org/standards/12rm/html/RM-3-2-1.html
    // 2
    type_declaration: $ => choice(
      $.full_type_declaration,
      $.incomplete_type_declaration,
      $.private_type_declaration,
      $.private_extension_declaration
    ),

    // 3
    full_type_declaration: $ => choice(
      seq(
        "type", 
        $.defining_identifier, 
        optional($.known_discriminant_part), 
        "is", 
        $.type_definition,
      ),
      $.task_type_declaration,
      $.protected_type_declaration
    ),

    // 4/2
    type_definition: $ => choice(
      $.enumeration_type_definition,
      $.integer_type_definition,
      $.real_type_definition,
      $.array_type_definition,
      $.record_type_definition,
      $.access_type_definition,
      $.derived_type_definition,
      $.interface_type_definition
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-2-2.html
    // 2
    subtype_declaration: $ => seq(
       "subtype",
      $.defining_identifier,
      "is",
      $.subtype_indication,
      ";"
    ),

    // 3/2
    subtype_indication: $ => seq(
      optional($.null_exclusion),
      $.subtype_mark,
      optional($.constraint)
    ),

    // 4
    subtype_mark: $ => $.name,

    // 5
    constraint: $ => choice(
      $.scalar_constraint,
      $.composite_constraint
    ),

    // 6
    scalar_constraint: $ => choice(
      $.range_constraint,
      $.digits_constraint,
      $.delta_constraint
    ),

    // 7
    composite_constraint: $ => choice(
      $.index_constraint,
      $.discriminant_constraint
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-3-1.html
    // 2/2
    object_declaration: $ => choice(
      seq(
        $.defining_identifier_list,
        ":",
        optional("aliased"),
        optional("constant"),
        choice(
          $.subtype_indication,
          $.access_definition,
          $.array_type_definition
        ),
        optional(seq(":=", $.expression)),
        ";"
      ),
      $.single_task_declaration,
      $.single_protected_declaration
    ),

    // 3
    defining_identifier_list: $ => commaSep1($.defining_identifier),

    // See http://ada-auth.org/standards/12rm/html/RM-3-3-2.html
    number_declaration: $ => seq(
      $.defining_identifier_list,
      ":",
      "constant",
      ":=",
      $.expression,
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-4.html
    derived_type_definition: $ => seq(
      optional("abstract"),
      optional("limited"),
      "new",
      $.subtype_indication,
      optional(seq(
        optional(seq("and", $.interface_list)),
        $.record_extension_part
      ))
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-5.html
    // 2
    range_constraint: $ => seq("range", $.range),

    // 3
    range: $ => choice(
      $.range_attribute_reference,
      seq($.simple_expression, "..", $.simple_expression)
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-5-1.html
    // 2
    enumeration_type_definition: $ => seq(
      "(",
      commaSep($.enumeration_literal_specification),
      ")"
    ),

    // 3
    enumeration_literal_specification: $ => choice(
      $.defining_identifier,
      $.defining_character_literal
    ),

    // 4
    defining_character_literal: $ => $.character_literal,

    // See http://ada-auth.org/standards/12rm/html/RM-3-5-4.html
    // 2
    integer_type_definition: $ => choice(
      $.signed_integer_type_definition,
      $.modular_type_definition
    ),

    // 3
    signed_integer_type_definition: $ => seq(
      "range",
      $.simple_expression,
      "..",
      $.simple_expression
    ),

    // 4
    modular_type_definition: $ => seq(
      "mod",
      $.expression
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-5-6.html
    real_type_definition: $ => choice(
      $.floating_point_definition,
      $.fixed_point_definition
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-5-7.html
    // 2
    floating_point_definition: $ => seq(
      "digits",
      $.expression,
      optional($.real_range_specification)
    ),

    // 3
    real_range_specification: $ => seq(
      "range",
      $.simple_expression,
      "..",
      $.simple_expression
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-5-9.html
    // 2
    fixed_point_definition: $ => choice(
      $.ordinary_fixed_point_definition,
      $.decimal_fixed_point_definition
    ),

    // 3
    ordinary_fixed_point_definition: $ => seq(
       "delta",
      $.expression,
      $.real_range_specification
    ),

    // 4
    decimal_fixed_point_definition: $ => seq(
       "delta",
      $.expression,
      "digits",
      $.expression,
      optional($.real_range_specification)
    ),

    // 5
    digits_constraint: $ => seq(
       "digits",
      $.expression,
      optional($.range_constraint)
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-6.html
    // 2
    array_type_definition: $ => choice(
      $.unconstrained_array_definition,
      $.constrained_array_definition
    ),

    // 3
    unconstrained_array_definition: $ => seq(
       "array",
      "(",
      commaSep1($.index_subtype_definition),
      ")",
      "of",
      $.component_definition
    ),

    // 4
    index_subtype_definition: $ => seq(
      $.subtype_mark,
      "range",
      "<>"
    ),

    // 5
    constrained_array_definition: $ => seq(
       "array",
      "(",
      commaSep1($.discrete_subtype_definition),
      ")",
      "of",
      $.component_definition
    ),

    // 6
    discrete_subtype_definition: $ => choice(
      $.subtype_indication,
      $.range
    ),

    // 7/2
    component_definition: $ => seq(
      optional("aliased"),
      choice(
        $.subtype_indication, 
        $.access_definition
      )
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-6-1.html
    // 2
    index_constraint: $ => seq(
      "(",
      commaSep1($.discrete_range),
      ")"
    ),

    // 3
    discrete_range: $ => choice(
      $.subtype_indication,
      $.range
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-7.html
    // 2/2
    discriminant_part: $ => choice(
      $.unknown_discriminant_part,
      $.known_discriminant_part
    ),

    // 3
    unknown_discriminant_part: $ => seq("(", "<>", ")"),

    // 4
    known_discriminant_part: $ => seq(
      "(",
      semicolonSep1($.discriminant_specification),
      ")"
    ),

    // 5/2
    discriminant_specification: $ => seq(
       $.defining_identifier_list, 
      ":",
      choice(
        seq(
          optional($.null_exclusion),
          $.subtype_mark
        ),
        $.access_definition
      ),
      optional(seq(":=", $.default_expression))
    ),

    // 6
    default_expression: $ => $.expression,

    // See http://ada-auth.org/standards/12rm/html/RM-3-7-1.html
    // 2
    discriminant_constraint: $ => seq(
       "(",
      commaSep1($.discriminant_association),
       ")",
    ),

    // 3
    discriminant_association: $ => seq(
      optional(
        seq(
          barSep1($.selector_name),
          "=>"
        ),
      ),
      $.expression
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-8.html
    // 2
    record_type_definition: $ => seq(
      optional(seq(
        optional("abstract"),
        "tagged"
      )),
      optional("limited"),
      $.record_definition
    ),

    // 3
    record_definition: $ => choice(
      seq(
        "record",
        $.component_list,
        "end",
        "record"
      ),
      seq("null", "record")
    ),

    // 4
    component_list: $ => choice(
      at_least_one($.component_item),
      seq(repeat($.component_item), $.variant_part),
      seq("null", ";")
    ),

    // 5/1
    component_item: $ => choice(
      $.component_declaration,
      $.aspect_clause
    ),

    // 6
    component_declaration: $ => seq(
      $.defining_identifier_list,
      ":",
      $.component_definition,
      optional(seq(":=", $.default_expression))
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-8-1.html
    // 2
    variant_part: $ => seq(
      "case",
      $.direct_name,
      "is",
      at_least_one($.variant),
      "end",
      "case",
      ";"
    ),

    // 3
    variant: $ => seq(
      "when",
      $.discrete_choice_list,
      "=>",
      $.component_list
    ),

    // 4
    discrete_choice_list: $ => barSep1($.discrete_choice),

    // 5
    discrete_choice: $ => choice(
      $.expression,
      $.discrete_range,
      "others"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-9-1.html
    record_extension_part: $ => seq(
      "with",
      $.record_definition
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-9-3.html
    abstract_subprogram_declaration: $ => seq(
      optional($.overriding_indicator), 
      $.subprogram_specification,
      "is",
      "abstract",
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-9-4.html
    // 2/2
    interface_type_definition: $ => seq(
      optional(choice(
        "limited",
        "task",
        "protected",
        "synchronized"
      )),
      "interface",
      seq(
        "and",
        $.interface_list
      )
    ),

    // 3/2
    interface_list: $ => seq(
      $.subtype_mark,
      repeat(seq(
        "and",
        $.subtype_mark
      ))
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-10.html
    // 2/2
    access_type_definition: $ => seq(
      optional($.null_exclusion),
      choice(
        $.access_to_object_definition,
        $.access_to_subprogram_definition
      )
    ),

    // 3
    access_to_object_definition: $ => seq(
      "access",
      optional($.general_access_modifier),
      $.subtype_indication
    ),

    // 4
    general_access_modifier: $ => choice("all", "constant"),

    // 5
    access_to_subprogram_definition: $ => seq(
      "access",
      optional("protected"),
      choice(
        seq("procedure", optional($.parameter_profile)),
        seq("function", $.parameter_and_result_profile)
      )
    ),

    // 5.1/2
    null_exclusion: $ => seq("not", "null"),

    // 6/2
    access_definition: $ => seq(
      optional($.null_exclusion),
      "access",
      choice(
        seq(optional("constant"), $.subtype_mark),
        seq(
          optional("protected"),
          choice(
            seq("procedure", optional($.parameter_profile)),
            seq("function", $.parameter_and_result_profile)
          )
        )
      )
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-10-1.html
    incomplete_type_declaration: $ => seq(
      "type",
      $.defining_identifier,
      optional($.discriminant_part),
      optional(seq("is", "tagged")),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-3-11.html
    // 2
    // Note: deviation from RM text because TreeSitter does not support
    // items that can match empty string; have to make declarative_part
    // optional in usages instead. (empty item deviation)
    declarative_part: $ => at_least_one($.declarative_item),

    // 3
    declarative_item: $ => choice(
      $.basic_declarative_item,
      $.body
    ),

    // 4/1
    basic_declarative_item: $ => choice(
      $.basic_declaration,
      $.aspect_clause,
      $.use_clause
    ),

    // 5
    body: $ => choice(
      $.proper_body,
      $.body_stub
    ),

    // 6
    proper_body: $ => choice(
      $.subprogram_body,
      $.package_body,
      $.task_body,
      $.protected_body
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-1.html
    // 2
    name: $ => choice(
      $.direct_name,
      $.explicit_dereference,
      $.indexed_component,
      $.slice,
      $.selected_component,
      $.attribute_reference,
      $.type_conversion,
      $.function_call,
      $.character_literal
    ),

    // 3
    direct_name: $ => choice(
      $.identifier,
      $.operator_symbol
    ),

    // 4
    prefix: $ => choice(
      $.name,
      $.implicit_dereference
    ),

    // 5
    explicit_dereference: $ => seq(
      $.name,
      ".all"
    ),

    // 6
    implicit_dereference: $ => $.name,

    // See http://ada-auth.org/standards/12rm/html/RM-4-1-1.html
    indexed_component: $ => seq(
      $.prefix,
      "(",
      commaSep1($.expression),
      ")",
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-1-2.html
    slice: $ => seq(
      $.prefix,
      "(",
      $.discrete_range,
      ")",
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-1-3.html
    // 2
    selected_component: $ => seq(
      $.prefix,
      ".",
      $.selector_name
    ),

    // 3
    selector_name: $ => choice(
      $.identifier,
      $.character_literal,
      $.operator_symbol
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-1-4.html
    // 2
    attribute_reference: $ => seq(
      $.prefix,
      "'",
      $.attribute_designator
    ),

    // 3
    attribute_designator: $ => choice(
      seq(
        $.identifier,
        optional(seq(
          "(",
          $.expression,
          ")",
        )),
      ),
      "Access",
      "Delta",
      "Digits"
    ),

    // 4
    range_attribute_reference: $ => seq(
      $.prefix,
      "'",
      $.range_attribute_designator
    ),

    // 5
    range_attribute_designator: $ => seq(
      "Range",
      optional(seq(
        "(",
        $.expression,
        ")",
      )),
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-2.html
    // 1 should not be necessary since it is not specified in BNF
    // literal: $ => choice(
    //   $.numeric_literal,
    //   $.character_literal,
    //   "null",
    //   $.string_literal
    // ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-3.html
    aggregate: $ => choice(
      $.record_aggregate,
      $.extension_aggregate,
      $.array_aggregate
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-3-1.html
    // 2
    record_aggregate: $ => seq(
      "(",
      $.record_component_association_list,
      ")",
    ),

    // 3
    record_component_association_list: $ => choice(
      commaSep1($.record_component_association),
      seq("null", "record")
    ),

    // 4/2
    record_component_association: $ => choice(
      seq(
        optional(seq($.component_choice_list, "=>")),
        $.expression
      ),
      seq($.component_choice_list, "=>", "<>"),
    ),

    // 5
    component_choice_list: $ => choice(
      barSep1($.selector_name),
      "others"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-3-2.html
    // 2
    extension_aggregate: $ => seq(
      "(",
      $.ancestor_part,
      "with",
      $.record_component_association_list,
      "("
    ),

    // 3
    ancestor_part: $ => choice(
      $.expression,
      $.subtype_mark
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-3-3.html
    // 2
    array_aggregate: $ => choice(
      $.positional_array_aggregate,
      $.named_array_aggregate
    ),

    // 3/2
    positional_array_aggregate: $ => seq(
      "(", 
      choice(
        commaSep2($.expression),
        seq(
          commaSep1($.expression),
          ",",
          "others",
          "=>",
          choice(
            $.expression,
            "<>"
          )
        )
      ),
      ")", 
    ),

    // 4
    named_array_aggregate: $ => seq(
      "(", 
      commaSep1($.array_component_association),
      ")", 
    ),

    // 5/2
    array_component_association: $ => seq(
      $.discrete_choice_list,
      "=>",
      choice(
        $.expression,
        "<>"
      )
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-4.html
    // 2
    expression: $ => seq(
      $.relation,
      repeat(seq($.boolean_operator, $.relation))
    ),
    boolean_operator: $ => choice("and", seq("and", "then"), "or", seq("or", "else"), "xor"),

    // 3
    relation: $ => seq(
      $.simple_expression,
      choice(
        optional(seq($.relational_operator, $.simple_expression)),
        seq(
          optional("not"),
          "in",
          choice(
            seq($.range),
            seq($.subtype_mark)
          )
        )
      )
    ),

    // 4
    simple_expression: $ => seq(
      optional($.unary_adding_operator),
      $.term,
      repeat(seq(
        $.binary_adding_operator,
        $.term
      ))
    ),

    // 5
    term: $ => seq(
      $.factor,
      repeat(seq(
        $.multiplying_operator, $.factor
      ))
    ),

    // 6
    factor: $ => choice(
      seq(
        $.primary,
        optional(seq("**", $.primary))
      ),
      seq(
        choice("abs", "not"),
        $.primary
      )
    ),

    // 7
    primary: $ => choice(
      $.numeric_literal,
      "null",
      $.string_literal,
      $.aggregate,
      $.name,
      $.qualified_expression,
      $.allocator,
      seq("(", $.expression, ")")
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-5.html
    // 2
    logical_operator: $ => choice(
      "and",
      "or",
      "xor"
    ),

    // 3
    relational_operator: $ => choice(
      "=",
      "/=",
      "<",
      "<=",
      ">",
      ">="
    ),

    // 4
    binary_adding_operator: $ => choice(
      "+",
      "–",
      "&"
    ),

    // 5
    unary_adding_operator: $ => choice(
      "+",
      "–"
    ),

    // 6
    multiplying_operator: $ => choice(
      "*",
      "/",
      "mod",
      "rem"
    ),

    // 7
    highest_precedence_operator: $ => choice(
      "**" ,
      "abs",
      "not"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-6.html
    type_conversion: $ => seq(
      $.subtype_mark,
      "(",
      choice(
        $.expression,
        $.name
      ),
      ")"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-7.html
    qualified_expression: $ => seq(
      $.subtype_mark,
      "'",
      choice(
        seq("(", $.expression, ")"),
        $.aggregate
      )
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-4-8.html
    allocator: $ => seq(
      "new",
      choice(
        $.subtype_indication,
        $.qualified_expression
      )
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-5-1.html
    // 2
    sequence_of_statements: $ => at_least_one($.statement),

    // 3
    statement: $ => seq(
      repeat($.label),
      choice(
        $.simple_statement,
        $.compound_statement
      )
    ),

    // 4/2
    simple_statement: $ => choice(
      $.null_statement,
      $.assignment_statement,
      $.exit_statement,
      $.goto_statement,
      $.procedure_call_statement,
      $.simple_return_statement,
      $.entry_call_statement,
      $.requeue_statement,
      $.delay_statement,
      $.abort_statement,
      $.raise_statement,
      $.code_statement
    ),

    // 5/2
    compound_statement: $ => choice(
      $.if_statement,
      $.case_statement,
      $.loop_statement,
      $.block_statement,
      $.extended_return_statement,
      $.accept_statement,
      $.select_statement
    ),

    // 6
    null_statement: $ => seq(
      "null",
      ";"
    ),

    // 7
    label: $ => seq(
      "<<",
      $.statement_identifier,
      ">>"
    ),

    // 8 and 9
    // Note 9 changes the definition of 8 - why not just write it plainly?
    statement_identifier: $ => $.identifier,

    // See http://ada-auth.org/standards/12rm/html/RM-5-2.html
    assignment_statement: $ => seq(
      $.name,
      ":=",
      $.expression,
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-5-3.html
    // 2
    if_statement: $ => seq(
      "if",
      $.condition,
      "then",
      $.sequence_of_statements,
      repeat(seq(
        "elsif",
        $.condition,
        "then",
        $.sequence_of_statements
      )),
      optional(seq(
        "else",
        $.sequence_of_statements
      )),
      "end",
      "if",
      ";"
    ),

    // 3
    condition: $ => $.expression,

    // See http://ada-auth.org/standards/12rm/html/RM-5-4.html
    // 2
    case_statement: $ => seq(
      "case",
      $.expression,
      "is",
      at_least_one($.case_statement_alternative),
      "end",
      "case",
      ";"
    ),

    // 3
    case_statement_alternative: $ => seq(
      "when",
      $.discrete_choice_list,
      "=>",
      $.sequence_of_statements
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-5-5.html
    // 2
    loop_statement: $ => seq(
      optional(seq($.statement_identifier, ":")),
      optional($.iteration_scheme),
      "loop",
      $.sequence_of_statements,
      "end",
      "loop",
      optional($.identifier),
      ";"
    ),

    // 3
    iteration_scheme: $ => choice(
      seq("while", $.condition),
      seq("for", $.loop_parameter_specification)
    ),

    // 4
    loop_parameter_specification: $ => seq(
      $.defining_identifier,
      "in",
      optional("reverse"),
      $.discrete_subtype_definition
    ),
    
    // See http://ada-auth.org/standards/12rm/html/RM-5-6.html
    block_statement: $ => seq(
      optional(seq($.statement_identifier, ":")),
      optional($.declarative_part),
      "begin",
      $.handled_sequence_of_statements,
      "end",
      optional($.identifier),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-5-7.html
    exit_statement: $ => seq(
      "exit",
      optional($.name),
      optional(seq("when", $.condition)),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-5-8.html
    goto_statement: $ => seq("goto", $.name, ";"),

    // See http://ada-auth.org/standards/12rm/html/RM-6-1.html
    // 2/2
    subprogram_declaration: $ => seq(
        optional($.overriding_indicator),
        $.subprogram_specification,
        ";"
    ),

    // 4/2
    subprogram_specification: $ => choice(
      $.procedure_specification,
      $.function_specification
    ),

    // 4.1/2
    procedure_specification: $ => seq(
      "procedure",
      $.defining_program_unit_name,
      optional($.parameter_profile)
    ),

    // 4.2/2
    function_specification: $ => seq(
      "function",
      $.defining_designator,
      $.parameter_and_result_profile
    ),

    // 5
    designator: $ => choice(
      seq(optional(seq($.parent_unit_name, ".")), $.identifier),
      $.operator_symbol
    ),

    // 6
    defining_designator: $ => choice(
      $.defining_program_unit_name,
      $.defining_operator_symbol
    ),

    // 7
    defining_program_unit_name: $ => seq(
      optional(seq($.parent_unit_name, ".")), $.defining_identifier
    ),

    // 9
    operator_symbol: $ => $.string_literal,

    // 11
    defining_operator_symbol: $ => $.operator_symbol,

    // 12
    // Note: deviation from RM text
    // (empty item deviation)
    parameter_profile: $ => $.formal_part,

    // 13/2
    parameter_and_result_profile: $ => seq(
      optional($.formal_part),
      "return",
      choice(
        seq(
          optional($.null_exclusion),
          $.subtype_mark
        ),
        $.access_definition
      )
    ),

    // 14
    formal_part: $ => seq("(", semicolonSep1($.parameter_specification), ")"),

    // 15/2
    parameter_specification: $ => seq(
      $.defining_identifier_list,
      ":",
      choice(
        seq(
          optional($.mode),
          optional($.null_exclusion),
          $.subtype_mark,
        ),
        $.access_definition
      ),
      optional(seq(":=", $.default_expression))
    ),

    // 16
    // Note: deviation from RM text
    // (empty item deviation)
    mode: $ => choice(
      "in",
      "out",
      seq(
        "in",
        "out",
      )
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-6-3.html
    subprogram_body: $ => seq(
      optional($.overriding_indicator),
      $.subprogram_specification,
      "is",
      optional($.declarative_part),
      "begin",
      $.handled_sequence_of_statements,
      "end",
      optional($.designator),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-6-4.html
    // 2
    procedure_call_statement: $ => seq(
      choice(
        $.name,
        seq($.prefix, $.actual_parameter_part)
      ),
      ";"
    ),

    // 3
    function_call: $ => choice(
      $.name,
      seq($.prefix, $.actual_parameter_part)
    ),

    // 4
    actual_parameter_part: $ => seq(
      "(",
      commaSep1($.parameter_association),
      ")"
    ),

    // 5
    parameter_association: $ => seq(
      optional(seq($.selector_name, "=>")),
      $.explicit_actual_parameter
    ),

    // 6
    explicit_actual_parameter: $ => choice(
      $.expression,
      $.name
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-6-5.html
    // 2/2
    simple_return_statement: $ => seq(
      "return",
      optional($.expression),
      ";"
    ),

    // 2.1/2
    extended_return_statement: $ => seq(
      "return",
      $.defining_identifier,
      ":",
      optional("aliased"),
      $.return_subtype_indication,
      optional(seq(":=", $.expression)),
      optional(seq("do", $.handled_sequence_of_statements, "end", "return")),
      ";"
    ),

    // 2.2/2
    return_subtype_indication: $ => choice(
      $.subtype_indication,
      $.access_definition
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-6-7.html
    null_procedure_declaration: $ => seq(
      optional($.overriding_indicator),
      $.procedure_specification,
      "is",
      "null",
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-7-1.html
    // 2
    package_declaration: $ => seq($.package_specification, ";"),

    // 3
    package_specification: $ => seq(
      "package",
      $.defining_program_unit_name,
      "is",
      repeat($.basic_declarative_item),
      optional(seq("private", repeat($.basic_declarative_item))),
      "end",
      optional(seq(
        optional(seq($.parent_unit_name, ".")),
        $.identifier
      ))
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-7-2.html
    package_body: $ => seq(
      "package",
      "body",
      $.defining_program_unit_name,
      "is",
      optional($.declarative_part),
      optional(seq(
        "begin",
        $.handled_sequence_of_statements
      )),
      "end",
      optional(seq(
        optional(seq($.parent_unit_name, ".")),
        $.identifier
      )),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-7-3.html
    // 2
    private_type_declaration: $ => seq(
      "type",
      $.defining_identifier,
      optional($.discriminant_part),
      "is",
      optional(seq(
        optional("abstract"),
        "tagged"
      )),
      optional("limited"),
      "private",
      ";"
    ),

    // 3/2
    private_extension_declaration: $ => seq(
      "type",
      $.defining_identifier,
      optional($.discriminant_part),
      "is",
      optional("abstract"),
      optional(choice(
        "limited",
        "synchronized"
      )),
      "new",
      $.subtype_indication,
      optional(seq("and", $.interface_list)),
      "with",
      "private",
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-8-3-1.html
    overriding_indicator: $ => seq(
      optional("not"),
      "overriding"
    ),
    // See http://ada-auth.org/standards/12rm/html/RM-8-4.html
    // 2
    use_clause: $ => choice(
      $.use_package_clause,
      $.use_type_clause
    ),

    // 3
    use_package_clause: $ => seq(
      "use",
      commaSep1($.name),
      ";"
    ),

    // 4
    use_type_clause: $ => seq(
      "use",
      "type",
      commaSep1($.subtype_mark),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-8-5.html
    renaming_declaration: $ => choice(
      $.object_renaming_declaration,
      $.exception_renaming_declaration,
      $.package_renaming_declaration,
      $.subprogram_renaming_declaration,
      $.generic_renaming_declaration
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-8-5-1.html
    object_renaming_declaration: $ => seq(
      $.defining_identifier,
      ":",
      choice(
        seq(optional($.null_exclusion), $.subtype_mark),
        $.access_definition
      ),
      "renames",
      $.name,
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-8-5-2.html
    exception_renaming_declaration: $ => seq(
      $.defining_identifier,
      ":",
      "exception",
      "renames",
      $.name,
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-8-5-3.html
    package_renaming_declaration: $ => seq(
      "package",
      $.defining_program_unit_name,
      "renames",
      $.name,
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-8-5-4.html
    subprogram_renaming_declaration: $ => seq(
      optional($.overriding_indicator),
      $.subprogram_specification,
      "renames",
      $.name,
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-8-5-5.html
    generic_renaming_declaration: $ => seq(
      "generic",
      choice("package", "procedure", "function"),
      $.defining_program_unit_name,
      "renames",
      $.name,
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-9-1.html
    // 2/2
    task_type_declaration: $ => seq(
      "task",
      "type",
      $.defining_identifier,
      optional($.known_discriminant_part),
      optional(seq(
        "is",
        optional(seq("new", $.interface_list, "with")),
        $.task_definition,
      )),
      ";"
    ),

    // 3/2
    single_task_declaration: $ => seq(
      "task",
      $.defining_identifier,
      optional(seq(
        "is",
        optional(seq("new", $.interface_list, "with")),
        $.task_definition,
      )),
      ";"
    ),

    // 4
    task_definition: $ => seq(
      repeat($.task_item),
      optional(seq(
        "private",
         repeat($.task_item)
      )),
      "end",
      optional($.identifier)
    ),

    // 5/1
    task_item: $ => choice(
      $.entry_declaration,
      $.aspect_clause
    ),

    // 6
    task_body: $ => seq(
      "task",
      "body",
      $.defining_identifier,
      "is",
      optional($.declarative_part),
      "begin",
      $.handled_sequence_of_statements,
      "end",
      optional($.identifier),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-9-4.html
    // 2/2
    protected_type_declaration: $ => seq(
      "protected",
      "type",
      $.defining_identifier,
      optional($.known_discriminant_part),
      "is",
      optional(seq(
        "new",
        $.interface_list,
        "with"
      )),
      $.protected_definition,
      ";"
    ),

    // 3/2
    single_protected_declaration: $ => seq(
      "protected",
      $.defining_identifier,
      "is",
      optional(seq(
        "new",
        $.interface_list,
        "with"
      )),
      $.protected_definition,
      ";"
    ),

    // 4
    protected_definition: $ => seq(
      repeat($.protected_operation_declaration),
      optional(seq(
        "private",
        repeat($.protected_element_declaration)
      )),
      "end",
      optional($.identifier)
    ),

    // 5/1
    protected_operation_declaration: $ => choice(
      $.subprogram_declaration,
      $.entry_declaration,
      $.aspect_clause
    ),

    // 6
    protected_element_declaration: $ => choice(
      $.protected_operation_declaration,
      $.component_declaration
    ),

    // 7
    protected_body: $ => seq(
      "protected",
      "body",
      $.defining_identifier,
      "is",
      repeat($.protected_operation_item),
      "end",
      optional($.identifier),
      ";"
    ),

    // 8/1
    protected_operation_item: $ => choice(
      $.subprogram_declaration,
      $.subprogram_body,
      $.entry_body,
      $.aspect_clause
    ),
    // See http://ada-auth.org/standards/12rm/html/RM-9-5-2.html
    // 2/2
    entry_declaration: $ => seq(
      optional($.overriding_indicator),
      "entry",
      $.defining_identifier,
      optional(seq("(", $.discrete_subtype_definition, ")")),
      optional($.parameter_profile),
      ";"
    ),

    // 3
    accept_statement: $ => seq(
      "accept",
      $.direct_name,
      optional(seq("(",$.entry_index,")")),
      optional($.parameter_profile),
      optional(seq(
        "do",
        $.handled_sequence_of_statements,
        "end",
        optional($.identifier)
      )),
      ";"
    ),

    // 4
    entry_index: $ => $.expression,

    // 5
    entry_body: $ => seq(
      "entry",
      $.defining_identifier,
      optional($.entry_body_formal_part),
      $.entry_barrier,
      "is",
      optional($.declarative_part),
      "begin",
      $.handled_sequence_of_statements,
      "end",
      optional($.identifier),
      ";"
    ),

    // 6
    // Note: deviation from RM text
    // (empty item deviation)
    // because parameter_profile can match empty string,
    // this item becomes optional in usages
    entry_body_formal_part: $ => seq(
      optional(seq("(",$.entry_index_specification,")")),
      $.parameter_profile
    ),

    // 7
    entry_barrier: $ => seq("when", $.condition),

    // 8
    entry_index_specification: $ => seq(
      "for",
      $.defining_identifier,
      "in",
      $.discrete_subtype_definition
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-9-5-3.html
    entry_call_statement: $ => seq(
      $.name,
      optional($.actual_parameter_part),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-9-5-4.html
    requeue_statement: $ => seq(
      "requeue",
      $.name,
      optional(seq("with", "abort")),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-9-6.html
    // 2
    delay_statement: $ => choice(
      $.delay_until_statement,
      $.delay_relative_statement
    ),

    // 3
    delay_until_statement: $ => seq(
      "delay",
      "until",
      $.expression,
      ";"
    ),

    // 4
    delay_relative_statement: $ => seq(
      "delay",
      $.expression,
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-9-7.html
    select_statement: $ => choice(
      $.selective_accept,
      $.timed_entry_call,
      $.conditional_entry_call,
      $.asynchronous_select
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-9-7-1.html
    // 2
    selective_accept: $ => seq(
      "select",
      optional($.guard),
      $.select_alternative,
      repeat(seq(
        "or",
        optional($.guard),
        $.select_alternative
      )),
      optional(seq(
        "else",
        $.sequence_of_statements
      )),
      "end",
      "select",
      ";"
    ),

    // 3
    guard: $ => seq(
      "when",
      $.condition,
      "=>"
    ),

    // 4
    select_alternative: $ => choice(
      $.accept_alternative,
      $.delay_alternative,
      $.terminate_alternative
    ),

    // 5
    accept_alternative: $ => seq(
      $.accept_statement,
      optional($.sequence_of_statements)
    ),

    // 6
    delay_alternative: $ => seq(
      $.delay_statement,
      optional($.sequence_of_statements)
    ),

    // 7
    terminate_alternative: $ => seq("terminate", ";"),

    // See http://ada-auth.org/standards/12rm/html/RM-9-7-2.html
    // 2
    timed_entry_call: $ => seq(
      "select",
      $.entry_call_alternative,
      "or",
      $.delay_alternative,
      "end",
      "select",
      ";",
    ),

    // 3/2
    entry_call_alternative: $ => seq(
      $.procedure_or_entry_call,
      optional($.sequence_of_statements)
    ),

    // 3.1/2
    procedure_or_entry_call: $ => choice(
      $.procedure_call_statement,
      $.entry_call_statement
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-9-7-3.html
    conditional_entry_call: $ => seq(
      "select",
      $.entry_call_alternative,
      "else",
      $.sequence_of_statements,
      "end",
      "select",
      ";",
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-9-7-4.html
    // 2
    asynchronous_select: $ => seq(
      "select",
      $.triggering_alternative,
      "then",
      "abort",
      $.abortable_part,
      "end",
      "select",
      ";",
    ),

    // 3
    triggering_alternative: $ => seq(
      $.triggering_statement,
      optional($.sequence_of_statements)
    ),

    // 4/2
    triggering_statement: $ => choice(
      $.procedure_or_entry_call,
      $.delay_statement
    ),

    // 5
    abortable_part: $ => $.sequence_of_statements,

    // See http://ada-auth.org/standards/12rm/html/RM-9-8.html
    abort_statement: $ => seq(
      "abort",
      commaSep1($.name),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-10-1-1.html
    // 2
    // Note: deviation from RM text
    // (empty item deviation)
    compilation: $ => at_least_one($.compilation_unit),

    // 3
    compilation_unit: $ => seq(
        optional($.context_clause),
        choice($.library_item, $.subunit)
    ),

    // 4
    library_item: $ => choice(
      seq(
        optional("private"),
        $.library_unit_declaration
      ),
      $.library_unit_body,
      seq(
        optional("private"),
        $.library_unit_renaming_declaration
      )
    ),

    // 5
    library_unit_declaration: $ => choice(
      $.subprogram_declaration,
      $.package_declaration,
      $.generic_declaration,
      $.generic_instantiation
    ),

    // 6
    library_unit_renaming_declaration: $ => choice(
      $.package_renaming_declaration,
      $.generic_renaming_declaration,
      $.subprogram_renaming_declaration
    ),

    // 7
    library_unit_body: $ => choice($.subprogram_body, $.package_body),

    // 8
    parent_unit_name: $ => $.name,

    // See http://ada-auth.org/standards/12rm/html/RM-10-1-2.html
    // 2
    // Note: deviation from RM text
    // (empty item deviation)
    context_clause: $ => at_least_one($.context_item),

    // 3
    context_item: $ => choice(
      $.with_clause,
      $.use_clause
    ),

    // 4/2
    with_clause: $ => choice(
      $.limited_with_clause,
      $.nonlimited_with_clause
    ),

    // 4.1/2
    limited_with_clause: $ => seq(
      "limited",
      optional("private"),
      "with",
      commaSep1($.name),
      ";"
    ),

    // 4.2/2
    nonlimited_with_clause: $ => seq(
      optional("private"),
      "with",
      commaSep1($.name),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-10-1-3.html
    // 2
    body_stub: $ => choice(
      $.subprogram_body_stub,
      $.package_body_stub,
      $.task_body_stub,
      $.protected_body_stub
    ),

    // 3/2
    subprogram_body_stub: $ => seq(
      optional($.overriding_indicator),
      $.subprogram_specification,
      "is",
      "separate",
      ";"
    ),

    // 4
    package_body_stub: $ => seq(
      "package",
      "body",
      $.defining_identifier,
      "is",
      "separate",
      ";"
    ),

    // 5
    task_body_stub: $ => seq(
      "task", "body", $.defining_identifier, "is", "separate", ";"
    ),

    // 6
    protected_body_stub: $ => seq(
      "protected", "body", $.defining_identifier, "is", "separate", ";"
    ),

    // 7
    subunit: $ => seq(
      "separate", "(", $.parent_unit_name, ")", $.proper_body
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-11-1.html
    exception_declaration: $ => seq(
      $.defining_identifier_list, ":", "exception", ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-11-2.html
    // 2
    handled_sequence_of_statements: $ => seq(
      $.sequence_of_statements,
      optional(seq(
        "exception",
        at_least_one($.exception_handler)
      ))
    ),

    // 3
    exception_handler: $ => seq(
      "when",
      optional(seq($.choice_parameter_specification, ":")),
      barSep1($.exception_choice),
      "=>",
      $.sequence_of_statements
    ),

    // 4
    choice_parameter_specification: $ => $.defining_identifier,

    // 5
    exception_choice: $ => choice(
      $.name,
      "others"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-11-3.html
    raise_statement: $ => seq(
      "raise",
      optional(seq($.name, optional(seq("with", $.expression)))),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-12-1.html
    // 2
    generic_declaration: $ => choice(
      $.generic_subprogram_declaration,
      $.generic_package_declaration
    ),

    // 3
    generic_subprogram_declaration: $ => seq(
      $.generic_formal_part,
      $.subprogram_specification,
      ";"
    ),

    // 4
    generic_package_declaration: $ => seq(
      $.generic_formal_part,
      $.package_specification,
      ";"
    ),

    // 5
    generic_formal_part: $ => seq(
      "generic",
      repeat(choice($.generic_formal_parameter_declaration, $.use_clause))
    ),

    // 6
    generic_formal_parameter_declaration: $ => choice(
      $.formal_object_declaration,
      $.formal_type_declaration,
      $.formal_subprogram_declaration,
      $.formal_package_declaration
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-12-3.html
    // 2/2
    generic_instantiation: $ => seq(
      choice(
        seq("package", $.defining_program_unit_name),
        seq(
          optional($.overriding_indicator),
          "procedure",
          $.defining_program_unit_name
        ),
        seq(
          optional($.overriding_indicator),
          "function",
          $.defining_designator
        ),
      ),
      "is",
      "new",
      $.name,
      optional($.generic_actual_part),
      ";"
    ),

    // 3
    generic_actual_part: $ => seq(
      "(",
      commaSep1($.generic_association),
      ")"
    ),

    // 4
    generic_association: $ => seq(
      optional(seq($.selector_name, "=>")),
      $.explicit_generic_actual_parameter
    ),

    // 5
    explicit_generic_actual_parameter: $ => choice(
      $.expression,
      $.name,
      $.subtype_mark,
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-12-4.html
    formal_object_declaration: $ => seq(
      $.defining_identifier_list,
      ":",
      optional($.mode),
      choice(
        seq(optional($.null_exclusion), $.subtype_mark),
        $.access_definition
      ),
      optional(seq(":=", $.default_expression)),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-12-5.html
    // 2
    formal_type_declaration: $ => seq(
      "type",
      $.defining_identifier,
      optional($.discriminant_part),
      "is",
      $.formal_type_definition,
      ";"
    ),

    // 3/2
    formal_type_definition: $ => choice(
      $.formal_private_type_definition,
      $.formal_derived_type_definition,
      $.formal_discrete_type_definition,
      $.formal_signed_integer_type_definition,
      $.formal_modular_type_definition,
      $.formal_floating_point_definition,
      $.formal_ordinary_fixed_point_definition,
      $.formal_decimal_fixed_point_definition,
      $.formal_array_type_definition,
      $.formal_access_type_definition,
      $.formal_interface_type_definition
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-12-5-1.html
    // 2
    formal_private_type_definition: $ => seq(
      optional(seq(
        optional("abstract"),
        "tagged"
      )),
      optional("limited"),
      "private"
    ),

    // 3/2
    formal_derived_type_definition: $ => seq(
      optional("abstract"),
      optional(choice(
        "limited",
        "synchronized"
      )),
      "new",
      $.subtype_mark,
      optional(seq(
        optional(seq(
          "and",
          $.interface_list
        )),
        "with",
        "private"
      ))
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-12-5-2.html
    // 2
    formal_discrete_type_definition: $ => seq("(", "<>", ")"),

    // 3
    formal_signed_integer_type_definition: $ => seq("range", "<>"),

    // 4
    formal_modular_type_definition: $ => seq("mod", "<>"),

    // 5
    formal_floating_point_definition: $ => seq("digits", "<>"),

    // 6
    formal_ordinary_fixed_point_definition: $ => seq("delta", "<>"),

    // 7
    formal_decimal_fixed_point_definition: $ => seq(
      "delta", "<>", "digits", "<>"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-12-5-3.html
    formal_array_type_definition: $ => $.array_type_definition,

    // See http://ada-auth.org/standards/12rm/html/RM-12-5-4.html
    formal_access_type_definition: $ => $.access_type_definition,

    // See http://ada-auth.org/standards/12rm/html/RM-12-5-5.html
    formal_interface_type_definition: $ => $.interface_type_definition,

    // See http://ada-auth.org/standards/12rm/html/RM-12-6.html
    // 2/2
    formal_subprogram_declaration: $ => choice(
      $.formal_concrete_subprogram_declaration,
      $.formal_abstract_subprogram_declaration
    ),

    // 2.1/2
    formal_concrete_subprogram_declaration: $ => seq(
      "with",
      $.subprogram_specification,
      optional(seq("is", $.subprogram_default)),
      ";"
    ),

    // 2.2/2
    formal_abstract_subprogram_declaration: $ => seq(
      "with",
      $.subprogram_specification,
      "is",
      "abstract",
      optional($.subprogram_default),
      ";"
    ),

    // 3/2
    subprogram_default: $ => choice(
      $.default_name,
      "<>",
      "null"
    ),

    // 4
    default_name: $ => $.name,

    // See http://ada-auth.org/standards/12rm/html/RM-12-7.html
    // 2
    formal_package_declaration: $ => seq(
      "with",
      "package",
      $.defining_identifier,
      "is",
      "new",
      $.name,
      optional($.formal_package_actual_part),
      ";"
    ),

    // 3/2
    // Note: deviation from RM text
    // (empty item deviation)
    formal_package_actual_part: $ => choice(
      seq(
        "(",
        optional(seq("others", "=>")),
        "<>",
        ")"
      ),
      $.generic_actual_part,
      seq(
        "(",
        commaSep1($.formal_package_association),
        optional(seq(",", "others", "=>", "<>")),
        ")"
      )
    ),

    // 3.1/2
    formal_package_association: $ => choice(
      $.generic_association,
      seq(
        $.selector_name,
        "=>",
        "<>"
      )
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-13-1.html
    // 2/1
    aspect_clause: $ => choice(
      $.attribute_definition_clause,
      $.enumeration_representation_clause,
      $.record_representation_clause,
      $.at_clause
    ),

    // 3
    local_name: $ => choice(
      $.direct_name,
      seq($.direct_name, "'", $.attribute_designator),
      $.name
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-13-3.html
    attribute_definition_clause: $ => seq(
      "for",
      $.local_name,
      "'",
      $.attribute_designator,
      "use",
      choice(
        $.expression,
        $.name
      ),
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-13-4.html
    // 2
    enumeration_representation_clause: $ => seq(
      "for",
      $.local_name,
      "use",
      $.enumeration_aggregate,
      ";"
    ),

    // 3
    enumeration_aggregate: $ => $.array_aggregate,

    // See http://ada-auth.org/standards/12rm/html/RM-13-5-1.html
    // 2
    record_representation_clause: $ => seq(
      "for",
      $.local_name,
      "use",
      "record",
      optional($.mod_clause),
      repeat($.component_clause),
      "end",
      "record",
      ";"
    ),

    // 3
    component_clause: $ => seq(
      $.local_name,
      "at",
      $.position,
      "range",
      $.first_bit,
      "..",
      $.last_bit,
      ";"
    ),

    // 4
    position: $ => $.expression,

    // 5
    first_bit: $ => $.simple_expression,

    // 6
    last_bit: $ => $.simple_expression,

    // See http://ada-auth.org/standards/12rm/html/RM-13-8.html
    code_statement: $ => seq(
      $.qualified_expression,
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-J-3.html
    delta_constraint: $ => seq(
      "delta",
      $.expression,
      optional($.range_constraint)
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-J-7.html
    at_clause: $ => seq(
      "for",
      $.direct_name,
      "use",
      "at",
      $.expression,
      ";"
    ),

    // See http://ada-auth.org/standards/12rm/html/RM-J-8.html
    mod_clause: $ => seq(
      "at",
      "mod",
      $.expression,
      ";"
    ),
  }
});

function at_least_one (rule) {
  return seq(rule, repeat(rule))
}

function commaSep (rule) {
  return optional(commaSep1(rule))
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep2 (rule) {
  return seq(rule, ',', rule, repeat(seq(',', rule)))
}

function semicolonSep (rule) {
  return optional(semicolonSep1(rule))
}

function semicolonSep1 (rule) {
  return seq(rule, repeat(seq(';', rule)))
}

function barSep (rule) {
  return optional(barSep1(rule))
}

function barSep1 (rule) {
  return seq(rule, repeat(seq('|', rule)))
}
