#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 284
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 40

enum {
  anon_sym_package = 1,
  anon_sym_is = 2,
  anon_sym_end = 3,
  anon_sym_SEMI = 4,
  anon_sym_body = 5,
  anon_sym_DASH_DASH = 6,
  sym_comment_body = 7,
  anon_sym_with = 8,
  anon_sym_use = 9,
  anon_sym_procedure = 10,
  anon_sym_begin = 11,
  anon_sym_function = 12,
  anon_sym_return = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_COLON = 16,
  anon_sym_COLON_EQ = 17,
  anon_sym_COMMA = 18,
  anon_sym_declare = 19,
  sym_null_statement = 20,
  anon_sym_bool = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  sym_package_name = 24,
  sym_identifier = 25,
  anon_sym_DOT = 26,
  anon_sym_E = 27,
  aux_sym__exponent_token1 = 28,
  sym__digit_or_underline = 29,
  sym_source_file = 30,
  sym__definitions = 31,
  sym__definition = 32,
  sym_package_specification = 33,
  sym_comment = 34,
  sym_with_statement = 35,
  sym_use_clause = 36,
  sym_procedure_definition = 37,
  sym_procedure_declaration = 38,
  sym_function_definition = 39,
  sym_function_declaration = 40,
  sym__return_clause = 41,
  sym_declarations = 42,
  sym_parameter_list = 43,
  sym_variable_declaration = 44,
  sym_variable_initialization = 45,
  sym_parameter_declaration = 46,
  sym_expressions = 47,
  sym__expression_statement = 48,
  sym_expression = 49,
  sym_return_statement = 50,
  sym_declare_block = 51,
  sym_declaration = 52,
  sym_value = 53,
  sym_numeric_literal = 54,
  sym_decimal_literal = 55,
  sym__numeral = 56,
  sym__exponent = 57,
  aux_sym__definitions_repeat1 = 58,
  aux_sym_declarations_repeat1 = 59,
  aux_sym_parameter_list_repeat1 = 60,
  aux_sym_expressions_repeat1 = 61,
  aux_sym__numeral_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_is] = "is",
  [anon_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_body] = "body",
  [anon_sym_DASH_DASH] = "--",
  [sym_comment_body] = "comment_body",
  [anon_sym_with] = "with",
  [anon_sym_use] = "use",
  [anon_sym_procedure] = "procedure",
  [anon_sym_begin] = "begin",
  [anon_sym_function] = "function",
  [anon_sym_return] = "return",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COMMA] = ",",
  [anon_sym_declare] = "declare",
  [sym_null_statement] = "null_statement",
  [anon_sym_bool] = "bool",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_package_name] = "package_name",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_E] = "E",
  [aux_sym__exponent_token1] = "_exponent_token1",
  [sym__digit_or_underline] = "_digit_or_underline",
  [sym_source_file] = "source_file",
  [sym__definitions] = "_definitions",
  [sym__definition] = "_definition",
  [sym_package_specification] = "package_specification",
  [sym_comment] = "comment",
  [sym_with_statement] = "with_statement",
  [sym_use_clause] = "use_clause",
  [sym_procedure_definition] = "procedure_definition",
  [sym_procedure_declaration] = "procedure_declaration",
  [sym_function_definition] = "function_definition",
  [sym_function_declaration] = "function_declaration",
  [sym__return_clause] = "_return_clause",
  [sym_declarations] = "declarations",
  [sym_parameter_list] = "parameter_list",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_initialization] = "variable_initialization",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_expressions] = "expressions",
  [sym__expression_statement] = "_expression_statement",
  [sym_expression] = "expression",
  [sym_return_statement] = "return_statement",
  [sym_declare_block] = "declare_block",
  [sym_declaration] = "declaration",
  [sym_value] = "value",
  [sym_numeric_literal] = "numeric_literal",
  [sym_decimal_literal] = "decimal_literal",
  [sym__numeral] = "_numeral",
  [sym__exponent] = "_exponent",
  [aux_sym__definitions_repeat1] = "_definitions_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_expressions_repeat1] = "expressions_repeat1",
  [aux_sym__numeral_repeat1] = "_numeral_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [sym_comment_body] = sym_comment_body,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_procedure] = anon_sym_procedure,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_declare] = anon_sym_declare,
  [sym_null_statement] = sym_null_statement,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_package_name] = sym_package_name,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_E] = anon_sym_E,
  [aux_sym__exponent_token1] = aux_sym__exponent_token1,
  [sym__digit_or_underline] = sym__digit_or_underline,
  [sym_source_file] = sym_source_file,
  [sym__definitions] = sym__definitions,
  [sym__definition] = sym__definition,
  [sym_package_specification] = sym_package_specification,
  [sym_comment] = sym_comment,
  [sym_with_statement] = sym_with_statement,
  [sym_use_clause] = sym_use_clause,
  [sym_procedure_definition] = sym_procedure_definition,
  [sym_procedure_declaration] = sym_procedure_declaration,
  [sym_function_definition] = sym_function_definition,
  [sym_function_declaration] = sym_function_declaration,
  [sym__return_clause] = sym__return_clause,
  [sym_declarations] = sym_declarations,
  [sym_parameter_list] = sym_parameter_list,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_initialization] = sym_variable_initialization,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_expressions] = sym_expressions,
  [sym__expression_statement] = sym__expression_statement,
  [sym_expression] = sym_expression,
  [sym_return_statement] = sym_return_statement,
  [sym_declare_block] = sym_declare_block,
  [sym_declaration] = sym_declaration,
  [sym_value] = sym_value,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym__numeral] = sym__numeral,
  [sym__exponent] = sym__exponent,
  [aux_sym__definitions_repeat1] = aux_sym__definitions_repeat1,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_expressions_repeat1] = aux_sym_expressions_repeat1,
  [aux_sym__numeral_repeat1] = aux_sym__numeral_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment_body] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_procedure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [sym_null_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_package_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__exponent_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__digit_or_underline] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definitions] = {
    .visible = false,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_package_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_with_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_use_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__return_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_initialization] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expressions] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declare_block] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__numeral] = {
    .visible = false,
    .named = true,
  },
  [sym__exponent] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__definitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expressions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__numeral_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_declarations = 1,
  field_default_value = 2,
  field_definitions = 3,
  field_end_name = 4,
  field_expressions = 5,
  field_function_body = 6,
  field_initial_value = 7,
  field_name = 8,
  field_parameter_list = 9,
  field_parameter_name = 10,
  field_procedure_body = 11,
  field_return_type = 12,
  field_sign = 13,
  field_type = 14,
  field_variable_name = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_declarations] = "declarations",
  [field_default_value] = "default_value",
  [field_definitions] = "definitions",
  [field_end_name] = "end_name",
  [field_expressions] = "expressions",
  [field_function_body] = "function_body",
  [field_initial_value] = "initial_value",
  [field_name] = "name",
  [field_parameter_list] = "parameter_list",
  [field_parameter_name] = "parameter_name",
  [field_procedure_body] = "procedure_body",
  [field_return_type] = "return_type",
  [field_sign] = "sign",
  [field_type] = "type",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 2},
  [12] = {.index = 22, .length = 3},
  [13] = {.index = 25, .length = 2},
  [14] = {.index = 27, .length = 1},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 3},
  [17] = {.index = 34, .length = 3},
  [18] = {.index = 37, .length = 3},
  [19] = {.index = 40, .length = 3},
  [20] = {.index = 43, .length = 3},
  [21] = {.index = 46, .length = 3},
  [22] = {.index = 49, .length = 3},
  [23] = {.index = 52, .length = 1},
  [24] = {.index = 53, .length = 2},
  [25] = {.index = 55, .length = 4},
  [26] = {.index = 59, .length = 4},
  [27] = {.index = 63, .length = 4},
  [28] = {.index = 67, .length = 4},
  [29] = {.index = 71, .length = 4},
  [30] = {.index = 75, .length = 4},
  [31] = {.index = 79, .length = 4},
  [32] = {.index = 83, .length = 4},
  [33] = {.index = 87, .length = 4},
  [34] = {.index = 91, .length = 5},
  [35] = {.index = 96, .length = 5},
  [36] = {.index = 101, .length = 5},
  [37] = {.index = 106, .length = 5},
  [38] = {.index = 111, .length = 5},
  [39] = {.index = 116, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_parameter_list, 2},
  [3] =
    {field_return_type, 1},
  [4] =
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [6] =
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 3, .inherited = true},
  [9] =
    {field_end_name, 4},
    {field_name, 1},
  [11] =
    {field_definitions, 3},
    {field_name, 1},
  [13] =
    {field_parameter_name, 0},
    {field_type, 2},
  [15] =
    {field_definitions, 3},
    {field_end_name, 5},
    {field_name, 1},
  [18] =
    {field_name, 1},
    {field_procedure_body, 4},
  [20] =
    {field_type, 2},
    {field_variable_name, 0},
  [22] =
    {field_default_value, 3},
    {field_parameter_name, 0},
    {field_type, 2},
  [25] =
    {field_function_body, 4},
    {field_name, 1},
  [27] =
    {field_expressions, 2},
  [28] =
    {field_end_name, 6},
    {field_name, 1},
    {field_procedure_body, 4},
  [31] =
    {field_initial_value, 3},
    {field_type, 2},
    {field_variable_name, 0},
  [34] =
    {field_declarations, 3},
    {field_name, 1},
    {field_procedure_body, 5},
  [37] =
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 5},
  [40] =
    {field_end_name, 6},
    {field_function_body, 4},
    {field_name, 1},
  [43] =
    {field_declarations, 3},
    {field_function_body, 5},
    {field_name, 1},
  [46] =
    {field_function_body, 5},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [49] =
    {field_function_body, 5},
    {field_name, 1},
    {field_parameter_list, 2},
  [52] =
    {field_sign, 1},
  [53] =
    {field_declarations, 1},
    {field_expressions, 3},
  [55] =
    {field_declarations, 3},
    {field_end_name, 7},
    {field_name, 1},
    {field_procedure_body, 5},
  [59] =
    {field_end_name, 7},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 5},
  [63] =
    {field_declarations, 4},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 6},
  [67] =
    {field_declarations, 3},
    {field_end_name, 7},
    {field_function_body, 5},
    {field_name, 1},
  [71] =
    {field_end_name, 7},
    {field_function_body, 5},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [75] =
    {field_declarations, 4},
    {field_function_body, 6},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [79] =
    {field_end_name, 7},
    {field_function_body, 5},
    {field_name, 1},
    {field_parameter_list, 2},
  [83] =
    {field_declarations, 4},
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
  [87] =
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 3, .inherited = true},
  [91] =
    {field_declarations, 4},
    {field_end_name, 8},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 6},
  [96] =
    {field_declarations, 4},
    {field_end_name, 8},
    {field_function_body, 6},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [101] =
    {field_declarations, 4},
    {field_end_name, 8},
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
  [106] =
    {field_end_name, 8},
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 3, .inherited = true},
  [111] =
    {field_declarations, 5},
    {field_function_body, 7},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 3, .inherited = true},
  [116] =
    {field_declarations, 5},
    {field_end_name, 9},
    {field_function_body, 7},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 3, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '+') ADVANCE(148);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == 'E') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(150);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '_') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == 'b') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(6);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(150);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 57:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'k') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_function);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_null_statement);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_package_name);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__exponent_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__exponent_token1);
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__digit_or_underline);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(150);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 58},
  [6] = {.lex_state = 58},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 58},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 58},
  [29] = {.lex_state = 58},
  [30] = {.lex_state = 58},
  [31] = {.lex_state = 58},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 58},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 58},
  [44] = {.lex_state = 58},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 58},
  [47] = {.lex_state = 58},
  [48] = {.lex_state = 58},
  [49] = {.lex_state = 58},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 58},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 58},
  [54] = {.lex_state = 58},
  [55] = {.lex_state = 57},
  [56] = {.lex_state = 58},
  [57] = {.lex_state = 58},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 58},
  [60] = {.lex_state = 58},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 58},
  [64] = {.lex_state = 58},
  [65] = {.lex_state = 58},
  [66] = {.lex_state = 58},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 58},
  [69] = {.lex_state = 58},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 58},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 58},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 58},
  [77] = {.lex_state = 58},
  [78] = {.lex_state = 58},
  [79] = {.lex_state = 58},
  [80] = {.lex_state = 58},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 58},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 58},
  [87] = {.lex_state = 58},
  [88] = {.lex_state = 58},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 58},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 58},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 58},
  [146] = {.lex_state = 55},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 56},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 56},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 56},
  [283] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_procedure] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [sym_null_statement] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [aux_sym__exponent_token1] = ACTIONS(1),
    [sym__digit_or_underline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(273),
    [sym__definitions] = STATE(272),
    [sym__definition] = STATE(7),
    [sym_package_specification] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_with_statement] = STATE(7),
    [sym_use_clause] = STATE(7),
    [sym_procedure_definition] = STATE(7),
    [sym_procedure_declaration] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_function_declaration] = STATE(7),
    [anon_sym_package] = ACTIONS(3),
    [anon_sym_DASH_DASH] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_procedure] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(15), 1,
      anon_sym_package,
    ACTIONS(18), 1,
      anon_sym_end,
    ACTIONS(20), 1,
      anon_sym_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_with,
    ACTIONS(26), 1,
      anon_sym_use,
    ACTIONS(29), 1,
      anon_sym_procedure,
    ACTIONS(32), 1,
      anon_sym_function,
    STATE(2), 10,
      sym__definition,
      sym_package_specification,
      sym_comment,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      aux_sym__definitions_repeat1,
  [34] = 8,
    ACTIONS(3), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_with,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_procedure,
    ACTIONS(13), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_end,
    ACTIONS(37), 1,
      anon_sym_DASH_DASH,
    STATE(8), 10,
      sym__definition,
      sym_package_specification,
      sym_comment,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      aux_sym__definitions_repeat1,
  [68] = 8,
    ACTIONS(15), 1,
      anon_sym_package,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_with,
    ACTIONS(26), 1,
      anon_sym_use,
    ACTIONS(29), 1,
      anon_sym_procedure,
    ACTIONS(32), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_DASH_DASH,
    STATE(4), 10,
      sym__definition,
      sym_package_specification,
      sym_comment,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      aux_sym__definitions_repeat1,
  [102] = 9,
    ACTIONS(3), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_with,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_procedure,
    ACTIONS(13), 1,
      anon_sym_function,
    ACTIONS(37), 1,
      anon_sym_DASH_DASH,
    ACTIONS(42), 1,
      anon_sym_end,
    STATE(261), 1,
      sym__definitions,
    STATE(3), 9,
      sym__definition,
      sym_package_specification,
      sym_comment,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
  [138] = 8,
    ACTIONS(3), 1,
      anon_sym_package,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH,
    ACTIONS(7), 1,
      anon_sym_with,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_procedure,
    ACTIONS(13), 1,
      anon_sym_function,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(4), 10,
      sym__definition,
      sym_package_specification,
      sym_comment,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      aux_sym__definitions_repeat1,
  [172] = 8,
    ACTIONS(3), 1,
      anon_sym_package,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH,
    ACTIONS(7), 1,
      anon_sym_with,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_procedure,
    ACTIONS(13), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(6), 10,
      sym__definition,
      sym_package_specification,
      sym_comment,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      aux_sym__definitions_repeat1,
  [206] = 8,
    ACTIONS(3), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_with,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_procedure,
    ACTIONS(13), 1,
      anon_sym_function,
    ACTIONS(37), 1,
      anon_sym_DASH_DASH,
    ACTIONS(44), 1,
      anon_sym_end,
    STATE(2), 10,
      sym__definition,
      sym_package_specification,
      sym_comment,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      aux_sym__definitions_repeat1,
  [240] = 6,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(48), 1,
      anon_sym_begin,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(12), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [264] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(276), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [290] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(274), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [316] = 6,
    ACTIONS(58), 1,
      anon_sym_procedure,
    ACTIONS(61), 1,
      anon_sym_begin,
    ACTIONS(63), 1,
      anon_sym_function,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(12), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [340] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(263), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [366] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(223), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [392] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(283), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [418] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(279), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [444] = 6,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_begin,
    STATE(9), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [468] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(280), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [494] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(195), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [520] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(281), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [546] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(215), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [572] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(217), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [598] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(198), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [624] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_begin,
    STATE(17), 1,
      sym_declaration,
    STATE(210), 1,
      sym_declarations,
    STATE(105), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [650] = 7,
    ACTIONS(93), 1,
      anon_sym_end,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(205), 1,
      sym_expression,
    STATE(27), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [674] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    ACTIONS(101), 1,
      anon_sym_end,
    STATE(205), 1,
      sym_expression,
    STATE(25), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [698] = 7,
    ACTIONS(103), 1,
      anon_sym_end,
    ACTIONS(105), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(111), 1,
      sym_null_statement,
    STATE(205), 1,
      sym_expression,
    STATE(27), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [722] = 1,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [733] = 1,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [744] = 1,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [755] = 1,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [766] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(254), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [789] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(253), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [812] = 1,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [823] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(252), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [846] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(251), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [869] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(250), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [892] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(249), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [915] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(248), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [938] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(203), 1,
      sym_expressions,
    STATE(205), 1,
      sym_expression,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [961] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(238), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [984] = 2,
    ACTIONS(126), 1,
      sym_comment_body,
    ACTIONS(124), 7,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [997] = 1,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1008] = 1,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1019] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(228), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1042] = 1,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1053] = 1,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1064] = 1,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1075] = 1,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1086] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(225), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1109] = 1,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1120] = 1,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1131] = 1,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1142] = 1,
    ACTIONS(146), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1153] = 3,
    ACTIONS(126), 1,
      sym_comment_body,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 6,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1168] = 1,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1179] = 1,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1190] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(259), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1213] = 1,
    ACTIONS(154), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1224] = 1,
    ACTIONS(156), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1235] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(196), 1,
      sym_expressions,
    STATE(205), 1,
      sym_expression,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1258] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(255), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1281] = 1,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1292] = 1,
    ACTIONS(160), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1303] = 1,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1314] = 1,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1325] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(268), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1348] = 1,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1359] = 1,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1370] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(267), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1393] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(266), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1416] = 1,
    ACTIONS(170), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1427] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(264), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1450] = 1,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1461] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(256), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1484] = 1,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1495] = 1,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1506] = 1,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1517] = 1,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1528] = 1,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1539] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(229), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1562] = 1,
    ACTIONS(184), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1573] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(257), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1596] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(230), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1619] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(262), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1642] = 1,
    ACTIONS(186), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1653] = 1,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1664] = 1,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1675] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(213), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1698] = 1,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1709] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(233), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1732] = 7,
    ACTIONS(95), 1,
      anon_sym_return,
    ACTIONS(97), 1,
      anon_sym_declare,
    ACTIONS(99), 1,
      sym_null_statement,
    STATE(26), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym_expression,
    STATE(258), 1,
      sym_expressions,
    STATE(201), 2,
      sym_return_statement,
      sym_declare_block,
  [1755] = 3,
    ACTIONS(196), 1,
      sym__digit_or_underline,
    STATE(93), 1,
      aux_sym__numeral_repeat1,
    ACTIONS(194), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_E,
  [1768] = 3,
    ACTIONS(201), 1,
      sym__digit_or_underline,
    STATE(98), 1,
      aux_sym__numeral_repeat1,
    ACTIONS(199), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_E,
  [1781] = 6,
    ACTIONS(203), 1,
      anon_sym_is,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      anon_sym_return,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_parameter_list,
    STATE(191), 1,
      sym__return_clause,
  [1800] = 6,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym__digit_or_underline,
    STATE(99), 1,
      sym__numeral,
    STATE(161), 1,
      sym_decimal_literal,
    STATE(220), 1,
      sym_numeric_literal,
    STATE(221), 1,
      sym_value,
  [1819] = 6,
    ACTIONS(207), 1,
      anon_sym_return,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_is,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    STATE(120), 1,
      sym_parameter_list,
    STATE(154), 1,
      sym__return_clause,
  [1838] = 3,
    ACTIONS(221), 1,
      sym__digit_or_underline,
    STATE(93), 1,
      aux_sym__numeral_repeat1,
    ACTIONS(219), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_E,
  [1851] = 4,
    ACTIONS(225), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_E,
    STATE(188), 1,
      sym__exponent,
    ACTIONS(223), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1865] = 1,
    ACTIONS(229), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1872] = 1,
    ACTIONS(231), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1879] = 4,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_is,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      sym_parameter_list,
  [1892] = 3,
    ACTIONS(239), 1,
      anon_sym_COLON_EQ,
    STATE(183), 1,
      sym_variable_initialization,
    ACTIONS(237), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1903] = 1,
    ACTIONS(241), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1910] = 1,
    ACTIONS(243), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1917] = 1,
    ACTIONS(245), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1924] = 1,
    ACTIONS(247), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1931] = 1,
    ACTIONS(249), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1938] = 1,
    ACTIONS(251), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1945] = 1,
    ACTIONS(253), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1952] = 4,
    ACTIONS(207), 1,
      anon_sym_return,
    ACTIONS(255), 1,
      anon_sym_is,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      sym__return_clause,
  [1965] = 1,
    ACTIONS(259), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1972] = 1,
    ACTIONS(261), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1979] = 1,
    ACTIONS(263), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1986] = 1,
    ACTIONS(265), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1993] = 1,
    ACTIONS(267), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2000] = 1,
    ACTIONS(269), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2007] = 1,
    ACTIONS(271), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2014] = 4,
    ACTIONS(273), 1,
      sym__digit_or_underline,
    STATE(99), 1,
      sym__numeral,
    STATE(161), 1,
      sym_decimal_literal,
    STATE(163), 1,
      sym_numeric_literal,
  [2027] = 4,
    ACTIONS(207), 1,
      anon_sym_return,
    ACTIONS(275), 1,
      anon_sym_is,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    STATE(160), 1,
      sym__return_clause,
  [2040] = 1,
    ACTIONS(279), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2047] = 1,
    ACTIONS(281), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2054] = 1,
    ACTIONS(283), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2061] = 1,
    ACTIONS(285), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2068] = 4,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_is,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_parameter_list,
  [2081] = 1,
    ACTIONS(291), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2088] = 1,
    ACTIONS(293), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2095] = 1,
    ACTIONS(295), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2102] = 1,
    ACTIONS(297), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2109] = 1,
    ACTIONS(299), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2116] = 1,
    ACTIONS(301), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2123] = 1,
    ACTIONS(303), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2130] = 1,
    ACTIONS(305), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_declare,
      sym_null_statement,
  [2137] = 3,
    ACTIONS(227), 1,
      anon_sym_E,
    STATE(158), 1,
      sym__exponent,
    ACTIONS(307), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2148] = 1,
    ACTIONS(309), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2155] = 1,
    ACTIONS(311), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2162] = 1,
    ACTIONS(313), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2169] = 1,
    ACTIONS(315), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2176] = 1,
    ACTIONS(317), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2183] = 1,
    ACTIONS(319), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2190] = 3,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_parameter_list_repeat1,
  [2200] = 1,
    ACTIONS(325), 3,
      anon_sym_is,
      anon_sym_SEMI,
      anon_sym_return,
  [2206] = 3,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_parameter_list_repeat1,
  [2216] = 1,
    ACTIONS(329), 3,
      anon_sym_is,
      anon_sym_SEMI,
      anon_sym_return,
  [2222] = 3,
    ACTIONS(239), 1,
      anon_sym_COLON_EQ,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    STATE(239), 1,
      sym_variable_initialization,
  [2232] = 3,
    ACTIONS(273), 1,
      sym__digit_or_underline,
    ACTIONS(333), 1,
      aux_sym__exponent_token1,
    STATE(168), 1,
      sym__numeral,
  [2242] = 3,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 1,
      sym_identifier,
    STATE(143), 1,
      sym_parameter_declaration,
  [2252] = 3,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_parameter_list_repeat1,
  [2262] = 1,
    ACTIONS(344), 3,
      anon_sym_is,
      anon_sym_SEMI,
      anon_sym_return,
  [2268] = 2,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(348), 1,
      sym_identifier,
  [2275] = 1,
    ACTIONS(342), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2280] = 2,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(352), 1,
      sym_identifier,
  [2287] = 2,
    ACTIONS(354), 1,
      anon_sym_is,
    ACTIONS(356), 1,
      anon_sym_SEMI,
  [2294] = 2,
    ACTIONS(358), 1,
      anon_sym_is,
    ACTIONS(360), 1,
      anon_sym_SEMI,
  [2301] = 2,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      sym_identifier,
  [2308] = 2,
    ACTIONS(366), 1,
      anon_sym_SEMI,
    ACTIONS(368), 1,
      sym_identifier,
  [2315] = 2,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      sym_identifier,
  [2322] = 1,
    ACTIONS(374), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2327] = 1,
    ACTIONS(376), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2332] = 2,
    ACTIONS(378), 1,
      anon_sym_is,
    ACTIONS(380), 1,
      anon_sym_SEMI,
  [2339] = 1,
    ACTIONS(382), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2344] = 2,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      sym_identifier,
  [2351] = 1,
    ACTIONS(388), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2356] = 2,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      sym_identifier,
  [2363] = 2,
    ACTIONS(394), 1,
      anon_sym_SEMI,
    ACTIONS(396), 1,
      sym_identifier,
  [2370] = 2,
    ACTIONS(337), 1,
      sym_identifier,
    STATE(151), 1,
      sym_parameter_declaration,
  [2377] = 2,
    ACTIONS(398), 1,
      anon_sym_SEMI,
    ACTIONS(400), 1,
      sym_identifier,
  [2384] = 1,
    ACTIONS(402), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2389] = 2,
    ACTIONS(273), 1,
      sym__digit_or_underline,
    STATE(159), 1,
      sym__numeral,
  [2396] = 2,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    ACTIONS(406), 1,
      sym_identifier,
  [2403] = 2,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      sym_identifier,
  [2410] = 2,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      sym_identifier,
  [2417] = 2,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      sym_identifier,
  [2424] = 2,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(422), 1,
      sym_identifier,
  [2431] = 2,
    ACTIONS(424), 1,
      anon_sym_SEMI,
    ACTIONS(426), 1,
      sym_identifier,
  [2438] = 2,
    ACTIONS(428), 1,
      anon_sym_SEMI,
    ACTIONS(430), 1,
      sym_identifier,
  [2445] = 2,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      sym_identifier,
  [2452] = 2,
    ACTIONS(436), 1,
      anon_sym_is,
    ACTIONS(438), 1,
      anon_sym_SEMI,
  [2459] = 1,
    ACTIONS(440), 2,
      anon_sym_is,
      anon_sym_SEMI,
  [2464] = 2,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      sym_identifier,
  [2471] = 2,
    ACTIONS(446), 1,
      anon_sym_SEMI,
    ACTIONS(448), 1,
      sym_identifier,
  [2478] = 2,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(452), 1,
      sym_identifier,
  [2485] = 1,
    ACTIONS(454), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2490] = 2,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym_identifier,
  [2497] = 2,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      sym_identifier,
  [2504] = 2,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    ACTIONS(466), 1,
      sym_identifier,
  [2511] = 2,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      sym_identifier,
  [2518] = 1,
    ACTIONS(472), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2523] = 2,
    ACTIONS(273), 1,
      sym__digit_or_underline,
    STATE(134), 1,
      sym__numeral,
  [2530] = 2,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      sym_identifier,
  [2537] = 2,
    ACTIONS(478), 1,
      anon_sym_is,
    ACTIONS(480), 1,
      anon_sym_SEMI,
  [2544] = 2,
    ACTIONS(482), 1,
      anon_sym_is,
    ACTIONS(484), 1,
      anon_sym_SEMI,
  [2551] = 2,
    ACTIONS(486), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      sym_identifier,
  [2558] = 1,
    ACTIONS(490), 1,
      anon_sym_SEMI,
  [2562] = 1,
    ACTIONS(492), 1,
      anon_sym_begin,
  [2566] = 1,
    ACTIONS(494), 1,
      anon_sym_end,
  [2570] = 1,
    ACTIONS(496), 1,
      anon_sym_COLON,
  [2574] = 1,
    ACTIONS(498), 1,
      anon_sym_begin,
  [2578] = 1,
    ACTIONS(500), 1,
      anon_sym_SEMI,
  [2582] = 1,
    ACTIONS(502), 1,
      anon_sym_SEMI,
  [2586] = 1,
    ACTIONS(504), 1,
      anon_sym_SEMI,
  [2590] = 1,
    ACTIONS(506), 1,
      anon_sym_SEMI,
  [2594] = 1,
    ACTIONS(508), 1,
      anon_sym_end,
  [2598] = 1,
    ACTIONS(510), 1,
      anon_sym_SEMI,
  [2602] = 1,
    ACTIONS(512), 1,
      anon_sym_SEMI,
  [2606] = 1,
    ACTIONS(514), 1,
      sym_identifier,
  [2610] = 1,
    ACTIONS(516), 1,
      anon_sym_SEMI,
  [2614] = 1,
    ACTIONS(518), 1,
      sym_identifier,
  [2618] = 1,
    ACTIONS(520), 1,
      anon_sym_SEMI,
  [2622] = 1,
    ACTIONS(522), 1,
      anon_sym_begin,
  [2626] = 1,
    ACTIONS(524), 1,
      sym_package_name,
  [2630] = 1,
    ACTIONS(526), 1,
      anon_sym_SEMI,
  [2634] = 1,
    ACTIONS(528), 1,
      anon_sym_end,
  [2638] = 1,
    ACTIONS(530), 1,
      anon_sym_SEMI,
  [2642] = 1,
    ACTIONS(532), 1,
      anon_sym_begin,
  [2646] = 1,
    ACTIONS(534), 1,
      anon_sym_SEMI,
  [2650] = 1,
    ACTIONS(536), 1,
      anon_sym_begin,
  [2654] = 1,
    ACTIONS(538), 1,
      anon_sym_SEMI,
  [2658] = 1,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [2662] = 1,
    ACTIONS(542), 1,
      anon_sym_SEMI,
  [2666] = 1,
    ACTIONS(544), 1,
      anon_sym_SEMI,
  [2670] = 1,
    ACTIONS(546), 1,
      anon_sym_SEMI,
  [2674] = 1,
    ACTIONS(548), 1,
      anon_sym_begin,
  [2678] = 1,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [2682] = 1,
    ACTIONS(552), 1,
      anon_sym_end,
  [2686] = 1,
    ACTIONS(554), 1,
      anon_sym_SEMI,
  [2690] = 1,
    ACTIONS(556), 1,
      anon_sym_SEMI,
  [2694] = 1,
    ACTIONS(558), 1,
      anon_sym_end,
  [2698] = 1,
    ACTIONS(560), 1,
      anon_sym_end,
  [2702] = 1,
    ACTIONS(562), 1,
      anon_sym_end,
  [2706] = 1,
    ACTIONS(564), 1,
      anon_sym_SEMI,
  [2710] = 1,
    ACTIONS(566), 1,
      anon_sym_SEMI,
  [2714] = 1,
    ACTIONS(568), 1,
      anon_sym_end,
  [2718] = 1,
    ACTIONS(570), 1,
      anon_sym_SEMI,
  [2722] = 1,
    ACTIONS(572), 1,
      anon_sym_SEMI,
  [2726] = 1,
    ACTIONS(574), 1,
      anon_sym_SEMI,
  [2730] = 1,
    ACTIONS(576), 1,
      anon_sym_SEMI,
  [2734] = 1,
    ACTIONS(578), 1,
      anon_sym_end,
  [2738] = 1,
    ACTIONS(580), 1,
      anon_sym_SEMI,
  [2742] = 1,
    ACTIONS(582), 1,
      anon_sym_SEMI,
  [2746] = 1,
    ACTIONS(584), 1,
      anon_sym_SEMI,
  [2750] = 1,
    ACTIONS(586), 1,
      anon_sym_SEMI,
  [2754] = 1,
    ACTIONS(588), 1,
      anon_sym_SEMI,
  [2758] = 1,
    ACTIONS(590), 1,
      anon_sym_SEMI,
  [2762] = 1,
    ACTIONS(592), 1,
      anon_sym_SEMI,
  [2766] = 1,
    ACTIONS(594), 1,
      sym_identifier,
  [2770] = 1,
    ACTIONS(596), 1,
      sym_identifier,
  [2774] = 1,
    ACTIONS(598), 1,
      anon_sym_end,
  [2778] = 1,
    ACTIONS(600), 1,
      anon_sym_end,
  [2782] = 1,
    ACTIONS(602), 1,
      anon_sym_end,
  [2786] = 1,
    ACTIONS(604), 1,
      anon_sym_end,
  [2790] = 1,
    ACTIONS(606), 1,
      anon_sym_end,
  [2794] = 1,
    ACTIONS(608), 1,
      anon_sym_end,
  [2798] = 1,
    ACTIONS(610), 1,
      anon_sym_end,
  [2802] = 1,
    ACTIONS(612), 1,
      anon_sym_end,
  [2806] = 1,
    ACTIONS(614), 1,
      anon_sym_end,
  [2810] = 1,
    ACTIONS(616), 1,
      anon_sym_end,
  [2814] = 1,
    ACTIONS(618), 1,
      anon_sym_end,
  [2818] = 1,
    ACTIONS(620), 1,
      anon_sym_end,
  [2822] = 1,
    ACTIONS(622), 1,
      anon_sym_COLON,
  [2826] = 1,
    ACTIONS(624), 1,
      anon_sym_end,
  [2830] = 1,
    ACTIONS(626), 1,
      anon_sym_end,
  [2834] = 1,
    ACTIONS(628), 1,
      anon_sym_begin,
  [2838] = 1,
    ACTIONS(630), 1,
      anon_sym_end,
  [2842] = 1,
    ACTIONS(632), 1,
      sym_identifier,
  [2846] = 1,
    ACTIONS(634), 1,
      anon_sym_end,
  [2850] = 1,
    ACTIONS(636), 1,
      anon_sym_end,
  [2854] = 1,
    ACTIONS(638), 1,
      anon_sym_end,
  [2858] = 1,
    ACTIONS(640), 1,
      anon_sym_SEMI,
  [2862] = 1,
    ACTIONS(642), 1,
      anon_sym_SEMI,
  [2866] = 1,
    ACTIONS(644), 1,
      anon_sym_is,
  [2870] = 1,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
  [2874] = 1,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
  [2878] = 1,
    ACTIONS(650), 1,
      anon_sym_begin,
  [2882] = 1,
    ACTIONS(652), 1,
      sym_identifier,
  [2886] = 1,
    ACTIONS(654), 1,
      anon_sym_begin,
  [2890] = 1,
    ACTIONS(656), 1,
      sym_identifier,
  [2894] = 1,
    ACTIONS(658), 1,
      sym_package_name,
  [2898] = 1,
    ACTIONS(660), 1,
      anon_sym_begin,
  [2902] = 1,
    ACTIONS(662), 1,
      anon_sym_begin,
  [2906] = 1,
    ACTIONS(664), 1,
      anon_sym_begin,
  [2910] = 1,
    ACTIONS(666), 1,
      sym_package_name,
  [2914] = 1,
    ACTIONS(668), 1,
      anon_sym_begin,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 340,
  [SMALL_STATE(14)] = 366,
  [SMALL_STATE(15)] = 392,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 444,
  [SMALL_STATE(18)] = 468,
  [SMALL_STATE(19)] = 494,
  [SMALL_STATE(20)] = 520,
  [SMALL_STATE(21)] = 546,
  [SMALL_STATE(22)] = 572,
  [SMALL_STATE(23)] = 598,
  [SMALL_STATE(24)] = 624,
  [SMALL_STATE(25)] = 650,
  [SMALL_STATE(26)] = 674,
  [SMALL_STATE(27)] = 698,
  [SMALL_STATE(28)] = 722,
  [SMALL_STATE(29)] = 733,
  [SMALL_STATE(30)] = 744,
  [SMALL_STATE(31)] = 755,
  [SMALL_STATE(32)] = 766,
  [SMALL_STATE(33)] = 789,
  [SMALL_STATE(34)] = 812,
  [SMALL_STATE(35)] = 823,
  [SMALL_STATE(36)] = 846,
  [SMALL_STATE(37)] = 869,
  [SMALL_STATE(38)] = 892,
  [SMALL_STATE(39)] = 915,
  [SMALL_STATE(40)] = 938,
  [SMALL_STATE(41)] = 961,
  [SMALL_STATE(42)] = 984,
  [SMALL_STATE(43)] = 997,
  [SMALL_STATE(44)] = 1008,
  [SMALL_STATE(45)] = 1019,
  [SMALL_STATE(46)] = 1042,
  [SMALL_STATE(47)] = 1053,
  [SMALL_STATE(48)] = 1064,
  [SMALL_STATE(49)] = 1075,
  [SMALL_STATE(50)] = 1086,
  [SMALL_STATE(51)] = 1109,
  [SMALL_STATE(52)] = 1120,
  [SMALL_STATE(53)] = 1131,
  [SMALL_STATE(54)] = 1142,
  [SMALL_STATE(55)] = 1153,
  [SMALL_STATE(56)] = 1168,
  [SMALL_STATE(57)] = 1179,
  [SMALL_STATE(58)] = 1190,
  [SMALL_STATE(59)] = 1213,
  [SMALL_STATE(60)] = 1224,
  [SMALL_STATE(61)] = 1235,
  [SMALL_STATE(62)] = 1258,
  [SMALL_STATE(63)] = 1281,
  [SMALL_STATE(64)] = 1292,
  [SMALL_STATE(65)] = 1303,
  [SMALL_STATE(66)] = 1314,
  [SMALL_STATE(67)] = 1325,
  [SMALL_STATE(68)] = 1348,
  [SMALL_STATE(69)] = 1359,
  [SMALL_STATE(70)] = 1370,
  [SMALL_STATE(71)] = 1393,
  [SMALL_STATE(72)] = 1416,
  [SMALL_STATE(73)] = 1427,
  [SMALL_STATE(74)] = 1450,
  [SMALL_STATE(75)] = 1461,
  [SMALL_STATE(76)] = 1484,
  [SMALL_STATE(77)] = 1495,
  [SMALL_STATE(78)] = 1506,
  [SMALL_STATE(79)] = 1517,
  [SMALL_STATE(80)] = 1528,
  [SMALL_STATE(81)] = 1539,
  [SMALL_STATE(82)] = 1562,
  [SMALL_STATE(83)] = 1573,
  [SMALL_STATE(84)] = 1596,
  [SMALL_STATE(85)] = 1619,
  [SMALL_STATE(86)] = 1642,
  [SMALL_STATE(87)] = 1653,
  [SMALL_STATE(88)] = 1664,
  [SMALL_STATE(89)] = 1675,
  [SMALL_STATE(90)] = 1698,
  [SMALL_STATE(91)] = 1709,
  [SMALL_STATE(92)] = 1732,
  [SMALL_STATE(93)] = 1755,
  [SMALL_STATE(94)] = 1768,
  [SMALL_STATE(95)] = 1781,
  [SMALL_STATE(96)] = 1800,
  [SMALL_STATE(97)] = 1819,
  [SMALL_STATE(98)] = 1838,
  [SMALL_STATE(99)] = 1851,
  [SMALL_STATE(100)] = 1865,
  [SMALL_STATE(101)] = 1872,
  [SMALL_STATE(102)] = 1879,
  [SMALL_STATE(103)] = 1892,
  [SMALL_STATE(104)] = 1903,
  [SMALL_STATE(105)] = 1910,
  [SMALL_STATE(106)] = 1917,
  [SMALL_STATE(107)] = 1924,
  [SMALL_STATE(108)] = 1931,
  [SMALL_STATE(109)] = 1938,
  [SMALL_STATE(110)] = 1945,
  [SMALL_STATE(111)] = 1952,
  [SMALL_STATE(112)] = 1965,
  [SMALL_STATE(113)] = 1972,
  [SMALL_STATE(114)] = 1979,
  [SMALL_STATE(115)] = 1986,
  [SMALL_STATE(116)] = 1993,
  [SMALL_STATE(117)] = 2000,
  [SMALL_STATE(118)] = 2007,
  [SMALL_STATE(119)] = 2014,
  [SMALL_STATE(120)] = 2027,
  [SMALL_STATE(121)] = 2040,
  [SMALL_STATE(122)] = 2047,
  [SMALL_STATE(123)] = 2054,
  [SMALL_STATE(124)] = 2061,
  [SMALL_STATE(125)] = 2068,
  [SMALL_STATE(126)] = 2081,
  [SMALL_STATE(127)] = 2088,
  [SMALL_STATE(128)] = 2095,
  [SMALL_STATE(129)] = 2102,
  [SMALL_STATE(130)] = 2109,
  [SMALL_STATE(131)] = 2116,
  [SMALL_STATE(132)] = 2123,
  [SMALL_STATE(133)] = 2130,
  [SMALL_STATE(134)] = 2137,
  [SMALL_STATE(135)] = 2148,
  [SMALL_STATE(136)] = 2155,
  [SMALL_STATE(137)] = 2162,
  [SMALL_STATE(138)] = 2169,
  [SMALL_STATE(139)] = 2176,
  [SMALL_STATE(140)] = 2183,
  [SMALL_STATE(141)] = 2190,
  [SMALL_STATE(142)] = 2200,
  [SMALL_STATE(143)] = 2206,
  [SMALL_STATE(144)] = 2216,
  [SMALL_STATE(145)] = 2222,
  [SMALL_STATE(146)] = 2232,
  [SMALL_STATE(147)] = 2242,
  [SMALL_STATE(148)] = 2252,
  [SMALL_STATE(149)] = 2262,
  [SMALL_STATE(150)] = 2268,
  [SMALL_STATE(151)] = 2275,
  [SMALL_STATE(152)] = 2280,
  [SMALL_STATE(153)] = 2287,
  [SMALL_STATE(154)] = 2294,
  [SMALL_STATE(155)] = 2301,
  [SMALL_STATE(156)] = 2308,
  [SMALL_STATE(157)] = 2315,
  [SMALL_STATE(158)] = 2322,
  [SMALL_STATE(159)] = 2327,
  [SMALL_STATE(160)] = 2332,
  [SMALL_STATE(161)] = 2339,
  [SMALL_STATE(162)] = 2344,
  [SMALL_STATE(163)] = 2351,
  [SMALL_STATE(164)] = 2356,
  [SMALL_STATE(165)] = 2363,
  [SMALL_STATE(166)] = 2370,
  [SMALL_STATE(167)] = 2377,
  [SMALL_STATE(168)] = 2384,
  [SMALL_STATE(169)] = 2389,
  [SMALL_STATE(170)] = 2396,
  [SMALL_STATE(171)] = 2403,
  [SMALL_STATE(172)] = 2410,
  [SMALL_STATE(173)] = 2417,
  [SMALL_STATE(174)] = 2424,
  [SMALL_STATE(175)] = 2431,
  [SMALL_STATE(176)] = 2438,
  [SMALL_STATE(177)] = 2445,
  [SMALL_STATE(178)] = 2452,
  [SMALL_STATE(179)] = 2459,
  [SMALL_STATE(180)] = 2464,
  [SMALL_STATE(181)] = 2471,
  [SMALL_STATE(182)] = 2478,
  [SMALL_STATE(183)] = 2485,
  [SMALL_STATE(184)] = 2490,
  [SMALL_STATE(185)] = 2497,
  [SMALL_STATE(186)] = 2504,
  [SMALL_STATE(187)] = 2511,
  [SMALL_STATE(188)] = 2518,
  [SMALL_STATE(189)] = 2523,
  [SMALL_STATE(190)] = 2530,
  [SMALL_STATE(191)] = 2537,
  [SMALL_STATE(192)] = 2544,
  [SMALL_STATE(193)] = 2551,
  [SMALL_STATE(194)] = 2558,
  [SMALL_STATE(195)] = 2562,
  [SMALL_STATE(196)] = 2566,
  [SMALL_STATE(197)] = 2570,
  [SMALL_STATE(198)] = 2574,
  [SMALL_STATE(199)] = 2578,
  [SMALL_STATE(200)] = 2582,
  [SMALL_STATE(201)] = 2586,
  [SMALL_STATE(202)] = 2590,
  [SMALL_STATE(203)] = 2594,
  [SMALL_STATE(204)] = 2598,
  [SMALL_STATE(205)] = 2602,
  [SMALL_STATE(206)] = 2606,
  [SMALL_STATE(207)] = 2610,
  [SMALL_STATE(208)] = 2614,
  [SMALL_STATE(209)] = 2618,
  [SMALL_STATE(210)] = 2622,
  [SMALL_STATE(211)] = 2626,
  [SMALL_STATE(212)] = 2630,
  [SMALL_STATE(213)] = 2634,
  [SMALL_STATE(214)] = 2638,
  [SMALL_STATE(215)] = 2642,
  [SMALL_STATE(216)] = 2646,
  [SMALL_STATE(217)] = 2650,
  [SMALL_STATE(218)] = 2654,
  [SMALL_STATE(219)] = 2658,
  [SMALL_STATE(220)] = 2662,
  [SMALL_STATE(221)] = 2666,
  [SMALL_STATE(222)] = 2670,
  [SMALL_STATE(223)] = 2674,
  [SMALL_STATE(224)] = 2678,
  [SMALL_STATE(225)] = 2682,
  [SMALL_STATE(226)] = 2686,
  [SMALL_STATE(227)] = 2690,
  [SMALL_STATE(228)] = 2694,
  [SMALL_STATE(229)] = 2698,
  [SMALL_STATE(230)] = 2702,
  [SMALL_STATE(231)] = 2706,
  [SMALL_STATE(232)] = 2710,
  [SMALL_STATE(233)] = 2714,
  [SMALL_STATE(234)] = 2718,
  [SMALL_STATE(235)] = 2722,
  [SMALL_STATE(236)] = 2726,
  [SMALL_STATE(237)] = 2730,
  [SMALL_STATE(238)] = 2734,
  [SMALL_STATE(239)] = 2738,
  [SMALL_STATE(240)] = 2742,
  [SMALL_STATE(241)] = 2746,
  [SMALL_STATE(242)] = 2750,
  [SMALL_STATE(243)] = 2754,
  [SMALL_STATE(244)] = 2758,
  [SMALL_STATE(245)] = 2762,
  [SMALL_STATE(246)] = 2766,
  [SMALL_STATE(247)] = 2770,
  [SMALL_STATE(248)] = 2774,
  [SMALL_STATE(249)] = 2778,
  [SMALL_STATE(250)] = 2782,
  [SMALL_STATE(251)] = 2786,
  [SMALL_STATE(252)] = 2790,
  [SMALL_STATE(253)] = 2794,
  [SMALL_STATE(254)] = 2798,
  [SMALL_STATE(255)] = 2802,
  [SMALL_STATE(256)] = 2806,
  [SMALL_STATE(257)] = 2810,
  [SMALL_STATE(258)] = 2814,
  [SMALL_STATE(259)] = 2818,
  [SMALL_STATE(260)] = 2822,
  [SMALL_STATE(261)] = 2826,
  [SMALL_STATE(262)] = 2830,
  [SMALL_STATE(263)] = 2834,
  [SMALL_STATE(264)] = 2838,
  [SMALL_STATE(265)] = 2842,
  [SMALL_STATE(266)] = 2846,
  [SMALL_STATE(267)] = 2850,
  [SMALL_STATE(268)] = 2854,
  [SMALL_STATE(269)] = 2858,
  [SMALL_STATE(270)] = 2862,
  [SMALL_STATE(271)] = 2866,
  [SMALL_STATE(272)] = 2870,
  [SMALL_STATE(273)] = 2874,
  [SMALL_STATE(274)] = 2878,
  [SMALL_STATE(275)] = 2882,
  [SMALL_STATE(276)] = 2886,
  [SMALL_STATE(277)] = 2890,
  [SMALL_STATE(278)] = 2894,
  [SMALL_STATE(279)] = 2898,
  [SMALL_STATE(280)] = 2902,
  [SMALL_STATE(281)] = 2906,
  [SMALL_STATE(282)] = 2910,
  [SMALL_STATE(283)] = 2914,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(211),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(42),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(282),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(278),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(277),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(275),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definitions, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(55),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definitions, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(246),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(247),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(260),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(96),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(14),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(201),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 36),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 29),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_clause, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 3, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 39),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 4, .production_id = 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 38),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 37),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_specification, 5, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 35),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 10, .production_id = 34),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_specification, 7, .production_id = 9),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 33),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 32),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 31),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 30),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 28),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 27),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 26),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 25),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 22),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 21),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 20),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_specification, 6, .production_id = 6),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_specification, 6, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 19),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 18),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 17),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 15),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 13),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 7, .production_id = 10),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numeral_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__numeral_repeat1, 2), SHIFT_REPEAT(93),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeral, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeral, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 16),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8, .production_id = 20),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3, .production_id = 8),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 15),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 11, .production_id = 39),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 10, .production_id = 38),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, .production_id = 13),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 7, .production_id = 10),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 10, .production_id = 37),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_declaration, 4, .production_id = 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_declaration, 3, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 11),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 18),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 10, .production_id = 36),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8, .production_id = 19),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 17),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8, .production_id = 21),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8, .production_id = 22),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 25),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 26),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 27),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 28),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 29),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 30),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 31),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 10, .production_id = 35),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 32),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 10, .production_id = 34),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 33),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(166),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3, .production_id = 23),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_initialization, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_clause, 2, .production_id = 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 4, .production_id = 12),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 5, .production_id = 24),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 4, .production_id = 14),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [648] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Ada(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
