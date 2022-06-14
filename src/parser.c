#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 296
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  anon_sym_POUND = 30,
  sym__extended_digit = 31,
  sym_source_file = 32,
  sym__definitions = 33,
  sym__definition = 34,
  sym_package_specification = 35,
  sym_comment = 36,
  sym_with_statement = 37,
  sym_use_clause = 38,
  sym_procedure_definition = 39,
  sym_procedure_declaration = 40,
  sym_function_definition = 41,
  sym_function_declaration = 42,
  sym__return_clause = 43,
  sym_declarations = 44,
  sym_parameter_list = 45,
  sym_variable_declaration = 46,
  sym_variable_initialization = 47,
  sym_parameter_declaration = 48,
  sym_expressions = 49,
  sym__expression_statement = 50,
  sym_expression = 51,
  sym_return_statement = 52,
  sym_declare_block = 53,
  sym_declaration = 54,
  sym_value = 55,
  sym_numeric_literal = 56,
  sym_decimal_literal = 57,
  sym__numeral = 58,
  sym__exponent = 59,
  sym_based_literal = 60,
  sym__base = 61,
  sym__based_numeral = 62,
  aux_sym__definitions_repeat1 = 63,
  aux_sym_declarations_repeat1 = 64,
  aux_sym_parameter_list_repeat1 = 65,
  aux_sym_expressions_repeat1 = 66,
  aux_sym__numeral_repeat1 = 67,
  aux_sym__based_numeral_repeat1 = 68,
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
  [anon_sym_POUND] = "#",
  [sym__extended_digit] = "_extended_digit",
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
  [sym_based_literal] = "based_literal",
  [sym__base] = "_base",
  [sym__based_numeral] = "_based_numeral",
  [aux_sym__definitions_repeat1] = "_definitions_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_expressions_repeat1] = "expressions_repeat1",
  [aux_sym__numeral_repeat1] = "_numeral_repeat1",
  [aux_sym__based_numeral_repeat1] = "_based_numeral_repeat1",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [sym__extended_digit] = sym__extended_digit,
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
  [sym_based_literal] = sym_based_literal,
  [sym__base] = sym__base,
  [sym__based_numeral] = sym__based_numeral,
  [aux_sym__definitions_repeat1] = aux_sym__definitions_repeat1,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_expressions_repeat1] = aux_sym_expressions_repeat1,
  [aux_sym__numeral_repeat1] = aux_sym__numeral_repeat1,
  [aux_sym__based_numeral_repeat1] = aux_sym__based_numeral_repeat1,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__extended_digit] = {
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
  [sym_based_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__base] = {
    .visible = false,
    .named = true,
  },
  [sym__based_numeral] = {
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
  [aux_sym__based_numeral_repeat1] = {
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
      if (lookahead == '#') ADVANCE(151);
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
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(146);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(152);
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
    case 151:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__extended_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(152);
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
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 58},
  [46] = {.lex_state = 58},
  [47] = {.lex_state = 58},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 58},
  [50] = {.lex_state = 58},
  [51] = {.lex_state = 58},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 58},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
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
  [81] = {.lex_state = 58},
  [82] = {.lex_state = 58},
  [83] = {.lex_state = 58},
  [84] = {.lex_state = 58},
  [85] = {.lex_state = 58},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 58},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 58},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 58},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 58},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 58},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 55},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 58},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 58},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 58},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 56},
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
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
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
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 56},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 56},
  [295] = {.lex_state = 0},
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
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(285),
    [sym__definitions] = STATE(284),
    [sym__definition] = STATE(2),
    [sym_package_specification] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_with_statement] = STATE(2),
    [sym_use_clause] = STATE(2),
    [sym_procedure_definition] = STATE(2),
    [sym_procedure_declaration] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_function_declaration] = STATE(2),
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
    ACTIONS(15), 1,
      ts_builtin_sym_end,
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
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
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
  [68] = 8,
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
    ACTIONS(17), 1,
      anon_sym_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_end,
    STATE(5), 10,
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
  [102] = 8,
    ACTIONS(21), 1,
      anon_sym_package,
    ACTIONS(24), 1,
      anon_sym_end,
    ACTIONS(26), 1,
      anon_sym_DASH_DASH,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(32), 1,
      anon_sym_use,
    ACTIONS(35), 1,
      anon_sym_procedure,
    ACTIONS(38), 1,
      anon_sym_function,
    STATE(5), 10,
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
  [136] = 8,
    ACTIONS(21), 1,
      anon_sym_package,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(32), 1,
      anon_sym_use,
    ACTIONS(35), 1,
      anon_sym_procedure,
    ACTIONS(38), 1,
      anon_sym_function,
    ACTIONS(41), 1,
      anon_sym_DASH_DASH,
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
  [170] = 9,
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
    ACTIONS(17), 1,
      anon_sym_DASH_DASH,
    ACTIONS(44), 1,
      anon_sym_end,
    STATE(273), 1,
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
  [206] = 8,
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
    ACTIONS(19), 1,
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
  [240] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(48), 1,
      anon_sym_begin,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(16), 1,
      sym_declaration,
    STATE(222), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [266] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(275), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [292] = 6,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_begin,
    STATE(24), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [316] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(235), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [342] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(227), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [368] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(295), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [394] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(286), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [420] = 6,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_begin,
    STATE(11), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [444] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(288), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [470] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(291), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [496] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(292), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [522] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(293), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [548] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(240), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [574] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(205), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [600] = 7,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(50), 1,
      anon_sym_function,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_begin,
    STATE(16), 1,
      sym_declaration,
    STATE(220), 1,
      sym_declarations,
    STATE(107), 5,
      sym_procedure_definition,
      sym_procedure_declaration,
      sym_function_definition,
      sym_function_declaration,
      sym_variable_declaration,
  [626] = 6,
    ACTIONS(82), 1,
      anon_sym_procedure,
    ACTIONS(85), 1,
      anon_sym_begin,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(24), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(107), 5,
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
    ACTIONS(98), 1,
      anon_sym_declare,
    ACTIONS(101), 1,
      sym_null_statement,
    STATE(214), 1,
      sym_expression,
    STATE(25), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [674] = 7,
    ACTIONS(104), 1,
      anon_sym_end,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(214), 1,
      sym_expression,
    STATE(25), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [698] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    ACTIONS(112), 1,
      anon_sym_end,
    STATE(214), 1,
      sym_expression,
    STATE(26), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(210), 2,
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
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(266), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [789] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(265), 1,
      sym_expressions,
    STATE(210), 2,
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
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(264), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [846] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(263), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [869] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(262), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [892] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(261), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [915] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(260), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [938] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(211), 1,
      sym_expressions,
    STATE(214), 1,
      sym_expression,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [961] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(237), 1,
      sym_expressions,
    STATE(210), 2,
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
  [1008] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(221), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1031] = 1,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
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
  [1064] = 3,
    ACTIONS(126), 1,
      sym_comment_body,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 6,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1079] = 1,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1090] = 1,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1101] = 1,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1112] = 1,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1123] = 1,
    ACTIONS(146), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1134] = 7,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(150), 1,
      sym__digit_or_underline,
    STATE(98), 1,
      sym__numeral,
    STATE(231), 1,
      sym_numeric_literal,
    STATE(232), 1,
      sym_value,
    STATE(234), 1,
      sym__base,
    STATE(166), 2,
      sym_decimal_literal,
      sym_based_literal,
  [1157] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(250), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1180] = 1,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1191] = 1,
    ACTIONS(154), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1202] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(267), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1225] = 1,
    ACTIONS(156), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1236] = 1,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1247] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(207), 1,
      sym_expressions,
    STATE(214), 1,
      sym_expression,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1270] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(268), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1293] = 1,
    ACTIONS(160), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1304] = 1,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1315] = 1,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1326] = 1,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1337] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(280), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1360] = 1,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1371] = 1,
    ACTIONS(170), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1382] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(279), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1405] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(278), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1428] = 1,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1439] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(276), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1462] = 1,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1473] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(269), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1496] = 1,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1507] = 1,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1518] = 1,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1529] = 1,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1540] = 1,
    ACTIONS(184), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1551] = 1,
    ACTIONS(186), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1562] = 1,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1573] = 1,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1584] = 1,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1595] = 1,
    ACTIONS(194), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1606] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(274), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1629] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(241), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1652] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(225), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1675] = 1,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1686] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(242), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1709] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(245), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1732] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(270), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1755] = 7,
    ACTIONS(106), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_declare,
    ACTIONS(110), 1,
      sym_null_statement,
    STATE(27), 1,
      sym__expression_statement,
    STATE(214), 1,
      sym_expression,
    STATE(271), 1,
      sym_expressions,
    STATE(210), 2,
      sym_return_statement,
      sym_declare_block,
  [1778] = 3,
    ACTIONS(200), 1,
      sym__digit_or_underline,
    STATE(94), 1,
      aux_sym__numeral_repeat1,
    ACTIONS(198), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_E,
      anon_sym_POUND,
  [1792] = 3,
    ACTIONS(205), 1,
      sym__digit_or_underline,
    STATE(96), 1,
      aux_sym__numeral_repeat1,
    ACTIONS(203), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_E,
      anon_sym_POUND,
  [1806] = 3,
    ACTIONS(209), 1,
      sym__digit_or_underline,
    STATE(94), 1,
      aux_sym__numeral_repeat1,
    ACTIONS(207), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_E,
      anon_sym_POUND,
  [1820] = 5,
    ACTIONS(211), 1,
      sym__digit_or_underline,
    STATE(98), 1,
      sym__numeral,
    STATE(168), 1,
      sym_numeric_literal,
    STATE(234), 1,
      sym__base,
    STATE(166), 2,
      sym_decimal_literal,
      sym_based_literal,
  [1837] = 5,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_E,
    ACTIONS(219), 1,
      anon_sym_POUND,
    STATE(198), 1,
      sym__exponent,
    ACTIONS(213), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1854] = 6,
    ACTIONS(221), 1,
      anon_sym_is,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      anon_sym_return,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_parameter_list,
    STATE(201), 1,
      sym__return_clause,
  [1873] = 6,
    ACTIONS(225), 1,
      anon_sym_return,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_is,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    STATE(137), 1,
      sym_parameter_list,
    STATE(161), 1,
      sym__return_clause,
  [1892] = 1,
    ACTIONS(233), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1899] = 1,
    ACTIONS(235), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1906] = 4,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_is,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      sym_parameter_list,
  [1919] = 4,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_is,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_parameter_list,
  [1932] = 3,
    ACTIONS(247), 1,
      anon_sym_COLON_EQ,
    STATE(190), 1,
      sym_variable_initialization,
    ACTIONS(245), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1943] = 1,
    ACTIONS(249), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1950] = 1,
    ACTIONS(251), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1957] = 1,
    ACTIONS(253), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1964] = 1,
    ACTIONS(255), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1971] = 1,
    ACTIONS(257), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1978] = 1,
    ACTIONS(259), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1985] = 1,
    ACTIONS(261), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [1992] = 4,
    ACTIONS(225), 1,
      anon_sym_return,
    ACTIONS(263), 1,
      anon_sym_is,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    STATE(189), 1,
      sym__return_clause,
  [2005] = 1,
    ACTIONS(267), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2012] = 1,
    ACTIONS(269), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2019] = 1,
    ACTIONS(271), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2026] = 1,
    ACTIONS(273), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_declare,
      sym_null_statement,
  [2033] = 1,
    ACTIONS(275), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2040] = 1,
    ACTIONS(277), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2047] = 3,
    ACTIONS(281), 1,
      sym__extended_digit,
    STATE(129), 1,
      aux_sym__based_numeral_repeat1,
    ACTIONS(279), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [2058] = 1,
    ACTIONS(283), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2065] = 3,
    ACTIONS(217), 1,
      anon_sym_E,
    STATE(193), 1,
      sym__exponent,
    ACTIONS(285), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2076] = 1,
    ACTIONS(287), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2083] = 1,
    ACTIONS(289), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2090] = 1,
    ACTIONS(291), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2097] = 1,
    ACTIONS(293), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2104] = 1,
    ACTIONS(295), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2111] = 1,
    ACTIONS(297), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2118] = 3,
    ACTIONS(301), 1,
      sym__extended_digit,
    STATE(129), 1,
      aux_sym__based_numeral_repeat1,
    ACTIONS(299), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [2129] = 1,
    ACTIONS(304), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2136] = 1,
    ACTIONS(306), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2143] = 1,
    ACTIONS(308), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2150] = 1,
    ACTIONS(310), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2157] = 1,
    ACTIONS(312), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2164] = 1,
    ACTIONS(314), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2171] = 3,
    ACTIONS(217), 1,
      anon_sym_E,
    STATE(162), 1,
      sym__exponent,
    ACTIONS(316), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2182] = 4,
    ACTIONS(225), 1,
      anon_sym_return,
    ACTIONS(318), 1,
      anon_sym_is,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    STATE(167), 1,
      sym__return_clause,
  [2195] = 3,
    ACTIONS(217), 1,
      anon_sym_E,
    STATE(184), 1,
      sym__exponent,
    ACTIONS(322), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2206] = 3,
    ACTIONS(326), 1,
      sym__extended_digit,
    STATE(120), 1,
      aux_sym__based_numeral_repeat1,
    ACTIONS(324), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [2217] = 1,
    ACTIONS(328), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2224] = 1,
    ACTIONS(330), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2231] = 1,
    ACTIONS(332), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2238] = 1,
    ACTIONS(334), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2245] = 1,
    ACTIONS(336), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2252] = 1,
    ACTIONS(338), 4,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
      sym_identifier,
  [2259] = 3,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_parameter_list_repeat1,
  [2269] = 1,
    ACTIONS(344), 3,
      anon_sym_is,
      anon_sym_SEMI,
      anon_sym_return,
  [2275] = 3,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_parameter_list_repeat1,
  [2285] = 1,
    ACTIONS(348), 3,
      anon_sym_is,
      anon_sym_SEMI,
      anon_sym_return,
  [2291] = 3,
    ACTIONS(211), 1,
      sym__digit_or_underline,
    ACTIONS(350), 1,
      aux_sym__exponent_token1,
    STATE(173), 1,
      sym__numeral,
  [2301] = 3,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    ACTIONS(354), 1,
      sym_identifier,
    STATE(148), 1,
      sym_parameter_declaration,
  [2311] = 3,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_parameter_list_repeat1,
  [2321] = 1,
    ACTIONS(361), 3,
      anon_sym_is,
      anon_sym_SEMI,
      anon_sym_return,
  [2327] = 3,
    ACTIONS(247), 1,
      anon_sym_COLON_EQ,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    STATE(251), 1,
      sym_variable_initialization,
  [2337] = 2,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      sym_identifier,
  [2344] = 2,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    ACTIONS(371), 1,
      sym_identifier,
  [2351] = 1,
    ACTIONS(359), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2356] = 2,
    ACTIONS(373), 1,
      anon_sym_is,
    ACTIONS(375), 1,
      anon_sym_SEMI,
  [2363] = 2,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    ACTIONS(379), 1,
      sym_identifier,
  [2370] = 2,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    ACTIONS(383), 1,
      sym_identifier,
  [2377] = 2,
    ACTIONS(385), 1,
      anon_sym_is,
    ACTIONS(387), 1,
      anon_sym_SEMI,
  [2384] = 1,
    ACTIONS(389), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2389] = 1,
    ACTIONS(391), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2394] = 2,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    ACTIONS(395), 1,
      sym_identifier,
  [2401] = 2,
    ACTIONS(397), 1,
      sym__extended_digit,
    STATE(212), 1,
      sym__based_numeral,
  [2408] = 1,
    ACTIONS(399), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2413] = 2,
    ACTIONS(401), 1,
      anon_sym_is,
    ACTIONS(403), 1,
      anon_sym_SEMI,
  [2420] = 1,
    ACTIONS(405), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2425] = 2,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    ACTIONS(409), 1,
      sym_identifier,
  [2432] = 2,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    ACTIONS(413), 1,
      sym_identifier,
  [2439] = 2,
    ACTIONS(415), 1,
      anon_sym_SEMI,
    ACTIONS(417), 1,
      sym_identifier,
  [2446] = 2,
    ACTIONS(419), 1,
      anon_sym_DOT,
    ACTIONS(421), 1,
      anon_sym_POUND,
  [2453] = 1,
    ACTIONS(423), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2458] = 2,
    ACTIONS(354), 1,
      sym_identifier,
    STATE(157), 1,
      sym_parameter_declaration,
  [2465] = 2,
    ACTIONS(211), 1,
      sym__digit_or_underline,
    STATE(163), 1,
      sym__numeral,
  [2472] = 2,
    ACTIONS(425), 1,
      anon_sym_SEMI,
    ACTIONS(427), 1,
      sym_identifier,
  [2479] = 2,
    ACTIONS(429), 1,
      anon_sym_SEMI,
    ACTIONS(431), 1,
      sym_identifier,
  [2486] = 2,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      sym_identifier,
  [2493] = 2,
    ACTIONS(437), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      sym_identifier,
  [2500] = 2,
    ACTIONS(441), 1,
      anon_sym_SEMI,
    ACTIONS(443), 1,
      sym_identifier,
  [2507] = 2,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    ACTIONS(447), 1,
      sym_identifier,
  [2514] = 2,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      sym_identifier,
  [2521] = 2,
    ACTIONS(453), 1,
      anon_sym_SEMI,
    ACTIONS(455), 1,
      sym_identifier,
  [2528] = 1,
    ACTIONS(457), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2533] = 2,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    ACTIONS(461), 1,
      sym_identifier,
  [2540] = 2,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(465), 1,
      sym_identifier,
  [2547] = 2,
    ACTIONS(467), 1,
      anon_sym_SEMI,
    ACTIONS(469), 1,
      sym_identifier,
  [2554] = 2,
    ACTIONS(471), 1,
      anon_sym_SEMI,
    ACTIONS(473), 1,
      sym_identifier,
  [2561] = 2,
    ACTIONS(475), 1,
      anon_sym_is,
    ACTIONS(477), 1,
      anon_sym_SEMI,
  [2568] = 1,
    ACTIONS(479), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2573] = 2,
    ACTIONS(481), 1,
      anon_sym_SEMI,
    ACTIONS(483), 1,
      sym_identifier,
  [2580] = 1,
    ACTIONS(485), 2,
      anon_sym_is,
      anon_sym_SEMI,
  [2585] = 1,
    ACTIONS(487), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2590] = 2,
    ACTIONS(489), 1,
      anon_sym_SEMI,
    ACTIONS(491), 1,
      sym_identifier,
  [2597] = 2,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    ACTIONS(495), 1,
      sym_identifier,
  [2604] = 2,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      sym_identifier,
  [2611] = 2,
    ACTIONS(397), 1,
      sym__extended_digit,
    STATE(172), 1,
      sym__based_numeral,
  [2618] = 1,
    ACTIONS(501), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2623] = 2,
    ACTIONS(211), 1,
      sym__digit_or_underline,
    STATE(136), 1,
      sym__numeral,
  [2630] = 2,
    ACTIONS(503), 1,
      anon_sym_SEMI,
    ACTIONS(505), 1,
      sym_identifier,
  [2637] = 2,
    ACTIONS(507), 1,
      anon_sym_is,
    ACTIONS(509), 1,
      anon_sym_SEMI,
  [2644] = 2,
    ACTIONS(511), 1,
      anon_sym_is,
    ACTIONS(513), 1,
      anon_sym_SEMI,
  [2651] = 2,
    ACTIONS(515), 1,
      anon_sym_SEMI,
    ACTIONS(517), 1,
      sym_identifier,
  [2658] = 1,
    ACTIONS(519), 1,
      anon_sym_SEMI,
  [2662] = 1,
    ACTIONS(521), 1,
      anon_sym_begin,
  [2666] = 1,
    ACTIONS(523), 1,
      anon_sym_COLON,
  [2670] = 1,
    ACTIONS(525), 1,
      anon_sym_end,
  [2674] = 1,
    ACTIONS(527), 1,
      anon_sym_SEMI,
  [2678] = 1,
    ACTIONS(529), 1,
      anon_sym_SEMI,
  [2682] = 1,
    ACTIONS(531), 1,
      anon_sym_SEMI,
  [2686] = 1,
    ACTIONS(533), 1,
      anon_sym_end,
  [2690] = 1,
    ACTIONS(535), 1,
      anon_sym_POUND,
  [2694] = 1,
    ACTIONS(537), 1,
      anon_sym_SEMI,
  [2698] = 1,
    ACTIONS(539), 1,
      anon_sym_SEMI,
  [2702] = 1,
    ACTIONS(541), 1,
      anon_sym_SEMI,
  [2706] = 1,
    ACTIONS(543), 1,
      sym_identifier,
  [2710] = 1,
    ACTIONS(545), 1,
      sym_identifier,
  [2714] = 1,
    ACTIONS(547), 1,
      anon_sym_SEMI,
  [2718] = 1,
    ACTIONS(549), 1,
      anon_sym_SEMI,
  [2722] = 1,
    ACTIONS(551), 1,
      anon_sym_begin,
  [2726] = 1,
    ACTIONS(553), 1,
      anon_sym_end,
  [2730] = 1,
    ACTIONS(555), 1,
      anon_sym_begin,
  [2734] = 1,
    ACTIONS(557), 1,
      sym_package_name,
  [2738] = 1,
    ACTIONS(559), 1,
      anon_sym_SEMI,
  [2742] = 1,
    ACTIONS(561), 1,
      anon_sym_end,
  [2746] = 1,
    ACTIONS(563), 1,
      anon_sym_SEMI,
  [2750] = 1,
    ACTIONS(565), 1,
      anon_sym_begin,
  [2754] = 1,
    ACTIONS(567), 1,
      anon_sym_SEMI,
  [2758] = 1,
    ACTIONS(569), 1,
      anon_sym_SEMI,
  [2762] = 1,
    ACTIONS(571), 1,
      anon_sym_SEMI,
  [2766] = 1,
    ACTIONS(573), 1,
      anon_sym_SEMI,
  [2770] = 1,
    ACTIONS(575), 1,
      anon_sym_SEMI,
  [2774] = 1,
    ACTIONS(577), 1,
      anon_sym_SEMI,
  [2778] = 1,
    ACTIONS(579), 1,
      anon_sym_POUND,
  [2782] = 1,
    ACTIONS(581), 1,
      anon_sym_begin,
  [2786] = 1,
    ACTIONS(583), 1,
      anon_sym_SEMI,
  [2790] = 1,
    ACTIONS(585), 1,
      anon_sym_end,
  [2794] = 1,
    ACTIONS(587), 1,
      anon_sym_SEMI,
  [2798] = 1,
    ACTIONS(589), 1,
      anon_sym_SEMI,
  [2802] = 1,
    ACTIONS(591), 1,
      anon_sym_begin,
  [2806] = 1,
    ACTIONS(593), 1,
      anon_sym_end,
  [2810] = 1,
    ACTIONS(595), 1,
      anon_sym_end,
  [2814] = 1,
    ACTIONS(597), 1,
      anon_sym_SEMI,
  [2818] = 1,
    ACTIONS(599), 1,
      anon_sym_SEMI,
  [2822] = 1,
    ACTIONS(601), 1,
      anon_sym_end,
  [2826] = 1,
    ACTIONS(603), 1,
      anon_sym_SEMI,
  [2830] = 1,
    ACTIONS(605), 1,
      anon_sym_SEMI,
  [2834] = 1,
    ACTIONS(607), 1,
      anon_sym_SEMI,
  [2838] = 1,
    ACTIONS(609), 1,
      anon_sym_SEMI,
  [2842] = 1,
    ACTIONS(611), 1,
      anon_sym_end,
  [2846] = 1,
    ACTIONS(613), 1,
      anon_sym_SEMI,
  [2850] = 1,
    ACTIONS(615), 1,
      anon_sym_SEMI,
  [2854] = 1,
    ACTIONS(617), 1,
      anon_sym_SEMI,
  [2858] = 1,
    ACTIONS(619), 1,
      anon_sym_SEMI,
  [2862] = 1,
    ACTIONS(621), 1,
      anon_sym_SEMI,
  [2866] = 1,
    ACTIONS(623), 1,
      anon_sym_SEMI,
  [2870] = 1,
    ACTIONS(625), 1,
      anon_sym_SEMI,
  [2874] = 1,
    ACTIONS(627), 1,
      sym_identifier,
  [2878] = 1,
    ACTIONS(629), 1,
      sym_identifier,
  [2882] = 1,
    ACTIONS(631), 1,
      anon_sym_end,
  [2886] = 1,
    ACTIONS(633), 1,
      anon_sym_end,
  [2890] = 1,
    ACTIONS(635), 1,
      anon_sym_end,
  [2894] = 1,
    ACTIONS(637), 1,
      anon_sym_end,
  [2898] = 1,
    ACTIONS(639), 1,
      anon_sym_end,
  [2902] = 1,
    ACTIONS(641), 1,
      anon_sym_end,
  [2906] = 1,
    ACTIONS(643), 1,
      anon_sym_end,
  [2910] = 1,
    ACTIONS(645), 1,
      anon_sym_end,
  [2914] = 1,
    ACTIONS(647), 1,
      anon_sym_end,
  [2918] = 1,
    ACTIONS(649), 1,
      anon_sym_end,
  [2922] = 1,
    ACTIONS(651), 1,
      anon_sym_end,
  [2926] = 1,
    ACTIONS(653), 1,
      anon_sym_end,
  [2930] = 1,
    ACTIONS(655), 1,
      anon_sym_COLON,
  [2934] = 1,
    ACTIONS(657), 1,
      anon_sym_end,
  [2938] = 1,
    ACTIONS(659), 1,
      anon_sym_end,
  [2942] = 1,
    ACTIONS(661), 1,
      anon_sym_begin,
  [2946] = 1,
    ACTIONS(663), 1,
      anon_sym_end,
  [2950] = 1,
    ACTIONS(665), 1,
      sym_identifier,
  [2954] = 1,
    ACTIONS(667), 1,
      anon_sym_end,
  [2958] = 1,
    ACTIONS(669), 1,
      anon_sym_end,
  [2962] = 1,
    ACTIONS(671), 1,
      anon_sym_end,
  [2966] = 1,
    ACTIONS(673), 1,
      anon_sym_SEMI,
  [2970] = 1,
    ACTIONS(675), 1,
      anon_sym_SEMI,
  [2974] = 1,
    ACTIONS(677), 1,
      anon_sym_is,
  [2978] = 1,
    ACTIONS(679), 1,
      ts_builtin_sym_end,
  [2982] = 1,
    ACTIONS(681), 1,
      ts_builtin_sym_end,
  [2986] = 1,
    ACTIONS(683), 1,
      anon_sym_begin,
  [2990] = 1,
    ACTIONS(685), 1,
      sym_identifier,
  [2994] = 1,
    ACTIONS(687), 1,
      anon_sym_begin,
  [2998] = 1,
    ACTIONS(689), 1,
      sym_identifier,
  [3002] = 1,
    ACTIONS(691), 1,
      sym_package_name,
  [3006] = 1,
    ACTIONS(693), 1,
      anon_sym_begin,
  [3010] = 1,
    ACTIONS(695), 1,
      anon_sym_begin,
  [3014] = 1,
    ACTIONS(697), 1,
      anon_sym_begin,
  [3018] = 1,
    ACTIONS(699), 1,
      sym_package_name,
  [3022] = 1,
    ACTIONS(701), 1,
      anon_sym_begin,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 266,
  [SMALL_STATE(11)] = 292,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 342,
  [SMALL_STATE(14)] = 368,
  [SMALL_STATE(15)] = 394,
  [SMALL_STATE(16)] = 420,
  [SMALL_STATE(17)] = 444,
  [SMALL_STATE(18)] = 470,
  [SMALL_STATE(19)] = 496,
  [SMALL_STATE(20)] = 522,
  [SMALL_STATE(21)] = 548,
  [SMALL_STATE(22)] = 574,
  [SMALL_STATE(23)] = 600,
  [SMALL_STATE(24)] = 626,
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
  [SMALL_STATE(45)] = 1031,
  [SMALL_STATE(46)] = 1042,
  [SMALL_STATE(47)] = 1053,
  [SMALL_STATE(48)] = 1064,
  [SMALL_STATE(49)] = 1079,
  [SMALL_STATE(50)] = 1090,
  [SMALL_STATE(51)] = 1101,
  [SMALL_STATE(52)] = 1112,
  [SMALL_STATE(53)] = 1123,
  [SMALL_STATE(54)] = 1134,
  [SMALL_STATE(55)] = 1157,
  [SMALL_STATE(56)] = 1180,
  [SMALL_STATE(57)] = 1191,
  [SMALL_STATE(58)] = 1202,
  [SMALL_STATE(59)] = 1225,
  [SMALL_STATE(60)] = 1236,
  [SMALL_STATE(61)] = 1247,
  [SMALL_STATE(62)] = 1270,
  [SMALL_STATE(63)] = 1293,
  [SMALL_STATE(64)] = 1304,
  [SMALL_STATE(65)] = 1315,
  [SMALL_STATE(66)] = 1326,
  [SMALL_STATE(67)] = 1337,
  [SMALL_STATE(68)] = 1360,
  [SMALL_STATE(69)] = 1371,
  [SMALL_STATE(70)] = 1382,
  [SMALL_STATE(71)] = 1405,
  [SMALL_STATE(72)] = 1428,
  [SMALL_STATE(73)] = 1439,
  [SMALL_STATE(74)] = 1462,
  [SMALL_STATE(75)] = 1473,
  [SMALL_STATE(76)] = 1496,
  [SMALL_STATE(77)] = 1507,
  [SMALL_STATE(78)] = 1518,
  [SMALL_STATE(79)] = 1529,
  [SMALL_STATE(80)] = 1540,
  [SMALL_STATE(81)] = 1551,
  [SMALL_STATE(82)] = 1562,
  [SMALL_STATE(83)] = 1573,
  [SMALL_STATE(84)] = 1584,
  [SMALL_STATE(85)] = 1595,
  [SMALL_STATE(86)] = 1606,
  [SMALL_STATE(87)] = 1629,
  [SMALL_STATE(88)] = 1652,
  [SMALL_STATE(89)] = 1675,
  [SMALL_STATE(90)] = 1686,
  [SMALL_STATE(91)] = 1709,
  [SMALL_STATE(92)] = 1732,
  [SMALL_STATE(93)] = 1755,
  [SMALL_STATE(94)] = 1778,
  [SMALL_STATE(95)] = 1792,
  [SMALL_STATE(96)] = 1806,
  [SMALL_STATE(97)] = 1820,
  [SMALL_STATE(98)] = 1837,
  [SMALL_STATE(99)] = 1854,
  [SMALL_STATE(100)] = 1873,
  [SMALL_STATE(101)] = 1892,
  [SMALL_STATE(102)] = 1899,
  [SMALL_STATE(103)] = 1906,
  [SMALL_STATE(104)] = 1919,
  [SMALL_STATE(105)] = 1932,
  [SMALL_STATE(106)] = 1943,
  [SMALL_STATE(107)] = 1950,
  [SMALL_STATE(108)] = 1957,
  [SMALL_STATE(109)] = 1964,
  [SMALL_STATE(110)] = 1971,
  [SMALL_STATE(111)] = 1978,
  [SMALL_STATE(112)] = 1985,
  [SMALL_STATE(113)] = 1992,
  [SMALL_STATE(114)] = 2005,
  [SMALL_STATE(115)] = 2012,
  [SMALL_STATE(116)] = 2019,
  [SMALL_STATE(117)] = 2026,
  [SMALL_STATE(118)] = 2033,
  [SMALL_STATE(119)] = 2040,
  [SMALL_STATE(120)] = 2047,
  [SMALL_STATE(121)] = 2058,
  [SMALL_STATE(122)] = 2065,
  [SMALL_STATE(123)] = 2076,
  [SMALL_STATE(124)] = 2083,
  [SMALL_STATE(125)] = 2090,
  [SMALL_STATE(126)] = 2097,
  [SMALL_STATE(127)] = 2104,
  [SMALL_STATE(128)] = 2111,
  [SMALL_STATE(129)] = 2118,
  [SMALL_STATE(130)] = 2129,
  [SMALL_STATE(131)] = 2136,
  [SMALL_STATE(132)] = 2143,
  [SMALL_STATE(133)] = 2150,
  [SMALL_STATE(134)] = 2157,
  [SMALL_STATE(135)] = 2164,
  [SMALL_STATE(136)] = 2171,
  [SMALL_STATE(137)] = 2182,
  [SMALL_STATE(138)] = 2195,
  [SMALL_STATE(139)] = 2206,
  [SMALL_STATE(140)] = 2217,
  [SMALL_STATE(141)] = 2224,
  [SMALL_STATE(142)] = 2231,
  [SMALL_STATE(143)] = 2238,
  [SMALL_STATE(144)] = 2245,
  [SMALL_STATE(145)] = 2252,
  [SMALL_STATE(146)] = 2259,
  [SMALL_STATE(147)] = 2269,
  [SMALL_STATE(148)] = 2275,
  [SMALL_STATE(149)] = 2285,
  [SMALL_STATE(150)] = 2291,
  [SMALL_STATE(151)] = 2301,
  [SMALL_STATE(152)] = 2311,
  [SMALL_STATE(153)] = 2321,
  [SMALL_STATE(154)] = 2327,
  [SMALL_STATE(155)] = 2337,
  [SMALL_STATE(156)] = 2344,
  [SMALL_STATE(157)] = 2351,
  [SMALL_STATE(158)] = 2356,
  [SMALL_STATE(159)] = 2363,
  [SMALL_STATE(160)] = 2370,
  [SMALL_STATE(161)] = 2377,
  [SMALL_STATE(162)] = 2384,
  [SMALL_STATE(163)] = 2389,
  [SMALL_STATE(164)] = 2394,
  [SMALL_STATE(165)] = 2401,
  [SMALL_STATE(166)] = 2408,
  [SMALL_STATE(167)] = 2413,
  [SMALL_STATE(168)] = 2420,
  [SMALL_STATE(169)] = 2425,
  [SMALL_STATE(170)] = 2432,
  [SMALL_STATE(171)] = 2439,
  [SMALL_STATE(172)] = 2446,
  [SMALL_STATE(173)] = 2453,
  [SMALL_STATE(174)] = 2458,
  [SMALL_STATE(175)] = 2465,
  [SMALL_STATE(176)] = 2472,
  [SMALL_STATE(177)] = 2479,
  [SMALL_STATE(178)] = 2486,
  [SMALL_STATE(179)] = 2493,
  [SMALL_STATE(180)] = 2500,
  [SMALL_STATE(181)] = 2507,
  [SMALL_STATE(182)] = 2514,
  [SMALL_STATE(183)] = 2521,
  [SMALL_STATE(184)] = 2528,
  [SMALL_STATE(185)] = 2533,
  [SMALL_STATE(186)] = 2540,
  [SMALL_STATE(187)] = 2547,
  [SMALL_STATE(188)] = 2554,
  [SMALL_STATE(189)] = 2561,
  [SMALL_STATE(190)] = 2568,
  [SMALL_STATE(191)] = 2573,
  [SMALL_STATE(192)] = 2580,
  [SMALL_STATE(193)] = 2585,
  [SMALL_STATE(194)] = 2590,
  [SMALL_STATE(195)] = 2597,
  [SMALL_STATE(196)] = 2604,
  [SMALL_STATE(197)] = 2611,
  [SMALL_STATE(198)] = 2618,
  [SMALL_STATE(199)] = 2623,
  [SMALL_STATE(200)] = 2630,
  [SMALL_STATE(201)] = 2637,
  [SMALL_STATE(202)] = 2644,
  [SMALL_STATE(203)] = 2651,
  [SMALL_STATE(204)] = 2658,
  [SMALL_STATE(205)] = 2662,
  [SMALL_STATE(206)] = 2666,
  [SMALL_STATE(207)] = 2670,
  [SMALL_STATE(208)] = 2674,
  [SMALL_STATE(209)] = 2678,
  [SMALL_STATE(210)] = 2682,
  [SMALL_STATE(211)] = 2686,
  [SMALL_STATE(212)] = 2690,
  [SMALL_STATE(213)] = 2694,
  [SMALL_STATE(214)] = 2698,
  [SMALL_STATE(215)] = 2702,
  [SMALL_STATE(216)] = 2706,
  [SMALL_STATE(217)] = 2710,
  [SMALL_STATE(218)] = 2714,
  [SMALL_STATE(219)] = 2718,
  [SMALL_STATE(220)] = 2722,
  [SMALL_STATE(221)] = 2726,
  [SMALL_STATE(222)] = 2730,
  [SMALL_STATE(223)] = 2734,
  [SMALL_STATE(224)] = 2738,
  [SMALL_STATE(225)] = 2742,
  [SMALL_STATE(226)] = 2746,
  [SMALL_STATE(227)] = 2750,
  [SMALL_STATE(228)] = 2754,
  [SMALL_STATE(229)] = 2758,
  [SMALL_STATE(230)] = 2762,
  [SMALL_STATE(231)] = 2766,
  [SMALL_STATE(232)] = 2770,
  [SMALL_STATE(233)] = 2774,
  [SMALL_STATE(234)] = 2778,
  [SMALL_STATE(235)] = 2782,
  [SMALL_STATE(236)] = 2786,
  [SMALL_STATE(237)] = 2790,
  [SMALL_STATE(238)] = 2794,
  [SMALL_STATE(239)] = 2798,
  [SMALL_STATE(240)] = 2802,
  [SMALL_STATE(241)] = 2806,
  [SMALL_STATE(242)] = 2810,
  [SMALL_STATE(243)] = 2814,
  [SMALL_STATE(244)] = 2818,
  [SMALL_STATE(245)] = 2822,
  [SMALL_STATE(246)] = 2826,
  [SMALL_STATE(247)] = 2830,
  [SMALL_STATE(248)] = 2834,
  [SMALL_STATE(249)] = 2838,
  [SMALL_STATE(250)] = 2842,
  [SMALL_STATE(251)] = 2846,
  [SMALL_STATE(252)] = 2850,
  [SMALL_STATE(253)] = 2854,
  [SMALL_STATE(254)] = 2858,
  [SMALL_STATE(255)] = 2862,
  [SMALL_STATE(256)] = 2866,
  [SMALL_STATE(257)] = 2870,
  [SMALL_STATE(258)] = 2874,
  [SMALL_STATE(259)] = 2878,
  [SMALL_STATE(260)] = 2882,
  [SMALL_STATE(261)] = 2886,
  [SMALL_STATE(262)] = 2890,
  [SMALL_STATE(263)] = 2894,
  [SMALL_STATE(264)] = 2898,
  [SMALL_STATE(265)] = 2902,
  [SMALL_STATE(266)] = 2906,
  [SMALL_STATE(267)] = 2910,
  [SMALL_STATE(268)] = 2914,
  [SMALL_STATE(269)] = 2918,
  [SMALL_STATE(270)] = 2922,
  [SMALL_STATE(271)] = 2926,
  [SMALL_STATE(272)] = 2930,
  [SMALL_STATE(273)] = 2934,
  [SMALL_STATE(274)] = 2938,
  [SMALL_STATE(275)] = 2942,
  [SMALL_STATE(276)] = 2946,
  [SMALL_STATE(277)] = 2950,
  [SMALL_STATE(278)] = 2954,
  [SMALL_STATE(279)] = 2958,
  [SMALL_STATE(280)] = 2962,
  [SMALL_STATE(281)] = 2966,
  [SMALL_STATE(282)] = 2970,
  [SMALL_STATE(283)] = 2974,
  [SMALL_STATE(284)] = 2978,
  [SMALL_STATE(285)] = 2982,
  [SMALL_STATE(286)] = 2986,
  [SMALL_STATE(287)] = 2990,
  [SMALL_STATE(288)] = 2994,
  [SMALL_STATE(289)] = 2998,
  [SMALL_STATE(290)] = 3002,
  [SMALL_STATE(291)] = 3006,
  [SMALL_STATE(292)] = 3010,
  [SMALL_STATE(293)] = 3014,
  [SMALL_STATE(294)] = 3018,
  [SMALL_STATE(295)] = 3022,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definitions, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definitions, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(223),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(42),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(294),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(290),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(289),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(287),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definitions_repeat1, 2), SHIFT_REPEAT(48),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(258),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(259),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(272),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(54),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(12),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(210),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 37),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 28),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_clause, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 3, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 4, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 39),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 38),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 7, .production_id = 10),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_specification, 5, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 36),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 35),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 10, .production_id = 34),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 33),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 32),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 31),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 30),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 29),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 27),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 26),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 25),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 22),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 21),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_specification, 6, .production_id = 6),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_specification, 6, .production_id = 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 20),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 19),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_specification, 7, .production_id = 9),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 18),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 17),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 13),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 15),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numeral_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__numeral_repeat1, 2), SHIFT_REPEAT(94),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeral, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeral, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 10, .production_id = 34),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8, .production_id = 21),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3, .production_id = 8),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, .production_id = 13),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 10, .production_id = 38),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 10, .production_id = 37),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 7, .production_id = 10),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_declaration, 4, .production_id = 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 10, .production_id = 36),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_declaration, 3, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__based_numeral, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 11),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_based_literal, 6),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 17),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 18),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8, .production_id = 19),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8, .production_id = 20),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 15),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 11, .production_id = 39),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__based_numeral_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__based_numeral_repeat1, 2), SHIFT_REPEAT(129),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8, .production_id = 22),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 25),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 26),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 27),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 28),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 29),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_based_literal, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__based_numeral, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 30),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 31),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 32),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9, .production_id = 33),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 10, .production_id = 35),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 16),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(174),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3, .production_id = 23),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_initialization, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_based_literal, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 4, .production_id = 12),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_clause, 2, .production_id = 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_based_literal, 7),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 5, .production_id = 24),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 4, .production_id = 14),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [681] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
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
