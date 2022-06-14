#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 37

enum {
  anon_sym_package = 1,
  anon_sym_is = 2,
  anon_sym_end = 3,
  anon_sym_SEMI = 4,
  anon_sym_DASH_DASH = 5,
  sym_comment_body = 6,
  anon_sym_with = 7,
  anon_sym_use = 8,
  anon_sym_procedure = 9,
  anon_sym_begin = 10,
  anon_sym_function = 11,
  anon_sym_return = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_COLON = 15,
  anon_sym_COLON_EQ = 16,
  anon_sym_COMMA = 17,
  anon_sym_declare = 18,
  sym_null_statement = 19,
  anon_sym_bool = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  sym_package_name = 23,
  sym_identifier = 24,
  sym_integer_literal = 25,
  sym_real_literal = 26,
  sym_source_file = 27,
  sym__definition = 28,
  sym_package_specification = 29,
  sym_comment = 30,
  sym_with_statement = 31,
  sym_use_clause = 32,
  sym_procedure_definition = 33,
  sym_procedure_declaration = 34,
  sym_function_definition = 35,
  sym_function_declaration = 36,
  sym__return_clause = 37,
  sym__declarations = 38,
  sym_parameter_list = 39,
  sym_variable_declaration = 40,
  sym_variable_initialization = 41,
  sym_parameter_declaration = 42,
  sym_expressions = 43,
  sym__expression_statement = 44,
  sym_expression = 45,
  sym_return_statement = 46,
  sym_declare_block = 47,
  sym_declaration = 48,
  sym_value = 49,
  sym_numeric_literal = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym__declarations_repeat1 = 52,
  aux_sym_parameter_list_repeat1 = 53,
  aux_sym_expressions_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_is] = "is",
  [anon_sym_end] = "end",
  [anon_sym_SEMI] = ";",
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
  [sym_integer_literal] = "integer_literal",
  [sym_real_literal] = "real_literal",
  [sym_source_file] = "source_file",
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
  [sym__declarations] = "_declarations",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__declarations_repeat1] = "_declarations_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_expressions_repeat1] = "expressions_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_integer_literal] = sym_integer_literal,
  [sym_real_literal] = sym_real_literal,
  [sym_source_file] = sym_source_file,
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
  [sym__declarations] = sym__declarations,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__declarations_repeat1] = aux_sym__declarations_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_expressions_repeat1] = aux_sym_expressions_repeat1,
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
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_real_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
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
  [sym__declarations] = {
    .visible = false,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__declarations_repeat1] = {
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
};

enum {
  field_declarations = 1,
  field_default_value = 2,
  field_end_name = 3,
  field_expressions = 4,
  field_function_body = 5,
  field_initial_value = 6,
  field_name = 7,
  field_parameter_list = 8,
  field_parameter_name = 9,
  field_procedure_body = 10,
  field_return_type = 11,
  field_type = 12,
  field_variable_name = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_declarations] = "declarations",
  [field_default_value] = "default_value",
  [field_end_name] = "end_name",
  [field_expressions] = "expressions",
  [field_function_body] = "function_body",
  [field_initial_value] = "initial_value",
  [field_name] = "name",
  [field_parameter_list] = "parameter_list",
  [field_parameter_name] = "parameter_name",
  [field_procedure_body] = "procedure_body",
  [field_return_type] = "return_type",
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
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 3},
  [11] = {.index = 20, .length = 3},
  [12] = {.index = 23, .length = 2},
  [13] = {.index = 25, .length = 1},
  [14] = {.index = 26, .length = 3},
  [15] = {.index = 29, .length = 3},
  [16] = {.index = 32, .length = 3},
  [17] = {.index = 35, .length = 3},
  [18] = {.index = 38, .length = 3},
  [19] = {.index = 41, .length = 3},
  [20] = {.index = 44, .length = 3},
  [21] = {.index = 47, .length = 2},
  [22] = {.index = 49, .length = 4},
  [23] = {.index = 53, .length = 4},
  [24] = {.index = 57, .length = 4},
  [25] = {.index = 61, .length = 4},
  [26] = {.index = 65, .length = 4},
  [27] = {.index = 69, .length = 4},
  [28] = {.index = 73, .length = 4},
  [29] = {.index = 77, .length = 4},
  [30] = {.index = 81, .length = 4},
  [31] = {.index = 85, .length = 5},
  [32] = {.index = 90, .length = 5},
  [33] = {.index = 95, .length = 5},
  [34] = {.index = 100, .length = 5},
  [35] = {.index = 105, .length = 5},
  [36] = {.index = 110, .length = 6},
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
    {field_type, 2},
    {field_variable_name, 0},
  [13] =
    {field_parameter_name, 0},
    {field_type, 2},
  [15] =
    {field_name, 1},
    {field_procedure_body, 4},
  [17] =
    {field_initial_value, 3},
    {field_type, 2},
    {field_variable_name, 0},
  [20] =
    {field_default_value, 3},
    {field_parameter_name, 0},
    {field_type, 2},
  [23] =
    {field_function_body, 4},
    {field_name, 1},
  [25] =
    {field_expressions, 2},
  [26] =
    {field_end_name, 6},
    {field_name, 1},
    {field_procedure_body, 4},
  [29] =
    {field_declarations, 3},
    {field_name, 1},
    {field_procedure_body, 5},
  [32] =
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 5},
  [35] =
    {field_end_name, 6},
    {field_function_body, 4},
    {field_name, 1},
  [38] =
    {field_declarations, 3},
    {field_function_body, 5},
    {field_name, 1},
  [41] =
    {field_function_body, 5},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [44] =
    {field_function_body, 5},
    {field_name, 1},
    {field_parameter_list, 2},
  [47] =
    {field_declarations, 1},
    {field_expressions, 3},
  [49] =
    {field_declarations, 3},
    {field_end_name, 7},
    {field_name, 1},
    {field_procedure_body, 5},
  [53] =
    {field_end_name, 7},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 5},
  [57] =
    {field_declarations, 4},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 6},
  [61] =
    {field_declarations, 3},
    {field_end_name, 7},
    {field_function_body, 5},
    {field_name, 1},
  [65] =
    {field_end_name, 7},
    {field_function_body, 5},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [69] =
    {field_declarations, 4},
    {field_function_body, 6},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [73] =
    {field_end_name, 7},
    {field_function_body, 5},
    {field_name, 1},
    {field_parameter_list, 2},
  [77] =
    {field_declarations, 4},
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
  [81] =
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 3, .inherited = true},
  [85] =
    {field_declarations, 4},
    {field_end_name, 8},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 6},
  [90] =
    {field_declarations, 4},
    {field_end_name, 8},
    {field_function_body, 6},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [95] =
    {field_declarations, 4},
    {field_end_name, 8},
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
  [100] =
    {field_end_name, 8},
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 3, .inherited = true},
  [105] =
    {field_declarations, 5},
    {field_function_body, 7},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 3, .inherited = true},
  [110] =
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
      if (eof) ADVANCE(57);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(27);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(6);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'g') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'k') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_null_statement);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_package_name);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_real_literal);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 55},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 55},
  [195] = {.lex_state = 55},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_integer_literal] = ACTIONS(1),
    [sym_real_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(157),
    [sym__definition] = STATE(3),
    [sym_package_specification] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_with_statement] = STATE(3),
    [sym_use_clause] = STATE(3),
    [sym_procedure_definition] = STATE(3),
    [sym_procedure_declaration] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_with] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_procedure] = ACTIONS(13),
    [anon_sym_function] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_package,
    ACTIONS(22), 1,
      anon_sym_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(28), 1,
      anon_sym_use,
    ACTIONS(31), 1,
      anon_sym_procedure,
    ACTIONS(34), 1,
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
      aux_sym_source_file_repeat1,
  [34] = 8,
    ACTIONS(5), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH,
    ACTIONS(9), 1,
      anon_sym_with,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_procedure,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
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
      aux_sym_source_file_repeat1,
  [68] = 7,
    ACTIONS(39), 1,
      anon_sym_end,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(47), 1,
      sym_null_statement,
    STATE(179), 1,
      sym_expression,
    STATE(4), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [92] = 7,
    ACTIONS(50), 1,
      anon_sym_end,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(179), 1,
      sym_expression,
    STATE(4), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [116] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    ACTIONS(58), 1,
      anon_sym_end,
    STATE(179), 1,
      sym_expression,
    STATE(5), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [140] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(179), 1,
      sym_expression,
    STATE(191), 1,
      sym_expressions,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [163] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(133), 1,
      sym_expressions,
    STATE(179), 1,
      sym_expression,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [186] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(142), 1,
      sym_expressions,
    STATE(179), 1,
      sym_expression,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [209] = 1,
    ACTIONS(60), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [220] = 1,
    ACTIONS(62), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [231] = 1,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [242] = 1,
    ACTIONS(66), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [253] = 1,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [264] = 1,
    ACTIONS(70), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [275] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(175), 1,
      sym_expressions,
    STATE(179), 1,
      sym_expression,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [298] = 3,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_comment_body,
    ACTIONS(74), 6,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [313] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(149), 1,
      sym_expressions,
    STATE(179), 1,
      sym_expression,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [336] = 1,
    ACTIONS(78), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [347] = 1,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [358] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(131), 1,
      sym_expressions,
    STATE(179), 1,
      sym_expression,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [381] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(130), 1,
      sym_expressions,
    STATE(179), 1,
      sym_expression,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [404] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(179), 1,
      sym_expression,
    STATE(190), 1,
      sym_expressions,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [427] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(165), 1,
      sym_expressions,
    STATE(179), 1,
      sym_expression,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [450] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(160), 1,
      sym_expressions,
    STATE(179), 1,
      sym_expression,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [473] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(166), 1,
      sym_expressions,
    STATE(179), 1,
      sym_expression,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [496] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(152), 1,
      sym_expressions,
    STATE(179), 1,
      sym_expression,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [519] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(154), 1,
      sym_expressions,
    STATE(179), 1,
      sym_expression,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [542] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(179), 1,
      sym_expression,
    STATE(199), 1,
      sym_expressions,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [565] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(179), 1,
      sym_expression,
    STATE(188), 1,
      sym_expressions,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [588] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(179), 1,
      sym_expression,
    STATE(189), 1,
      sym_expressions,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [611] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(179), 1,
      sym_expression,
    STATE(196), 1,
      sym_expressions,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [634] = 7,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      anon_sym_declare,
    ACTIONS(56), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(179), 1,
      sym_expression,
    STATE(181), 1,
      sym_expressions,
    STATE(161), 2,
      sym_return_statement,
      sym_declare_block,
  [657] = 1,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [667] = 1,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [677] = 6,
    ACTIONS(86), 1,
      anon_sym_procedure,
    ACTIONS(88), 1,
      anon_sym_begin,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(46), 1,
      sym_declaration,
    STATE(146), 1,
      sym__declarations,
    STATE(89), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [697] = 1,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [707] = 6,
    ACTIONS(86), 1,
      anon_sym_procedure,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_begin,
    STATE(46), 1,
      sym_declaration,
    STATE(200), 1,
      sym__declarations,
    STATE(89), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [727] = 6,
    ACTIONS(86), 1,
      anon_sym_procedure,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_begin,
    STATE(46), 1,
      sym_declaration,
    STATE(197), 1,
      sym__declarations,
    STATE(89), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [747] = 1,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [757] = 1,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [767] = 1,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [777] = 1,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [787] = 1,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [797] = 1,
    ACTIONS(108), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [807] = 5,
    ACTIONS(86), 1,
      anon_sym_procedure,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_begin,
    STATE(68), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(89), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [825] = 1,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [835] = 1,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [845] = 1,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [855] = 6,
    ACTIONS(86), 1,
      anon_sym_procedure,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_begin,
    STATE(46), 1,
      sym_declaration,
    STATE(140), 1,
      sym__declarations,
    STATE(89), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [875] = 1,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [885] = 1,
    ACTIONS(122), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [895] = 1,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [905] = 6,
    ACTIONS(86), 1,
      anon_sym_procedure,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_begin,
    STATE(46), 1,
      sym_declaration,
    STATE(177), 1,
      sym__declarations,
    STATE(89), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [925] = 1,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [935] = 6,
    ACTIONS(86), 1,
      anon_sym_procedure,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_begin,
    STATE(46), 1,
      sym_declaration,
    STATE(176), 1,
      sym__declarations,
    STATE(89), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [955] = 1,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [965] = 1,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [975] = 1,
    ACTIONS(136), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [985] = 1,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [995] = 1,
    ACTIONS(140), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1005] = 1,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1015] = 1,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1025] = 1,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1035] = 6,
    ACTIONS(86), 1,
      anon_sym_procedure,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_begin,
    STATE(46), 1,
      sym_declaration,
    STATE(128), 1,
      sym__declarations,
    STATE(89), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [1055] = 1,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1065] = 5,
    ACTIONS(152), 1,
      anon_sym_procedure,
    ACTIONS(155), 1,
      anon_sym_begin,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(67), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(89), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [1083] = 5,
    ACTIONS(86), 1,
      anon_sym_procedure,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_begin,
    STATE(67), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(89), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [1101] = 1,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1111] = 1,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1121] = 6,
    ACTIONS(86), 1,
      anon_sym_procedure,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_begin,
    STATE(46), 1,
      sym_declaration,
    STATE(182), 1,
      sym__declarations,
    STATE(89), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [1141] = 6,
    ACTIONS(168), 1,
      anon_sym_is,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      anon_sym_return,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_parameter_list,
    STATE(106), 1,
      sym__return_clause,
  [1160] = 5,
    ACTIONS(176), 1,
      anon_sym_procedure,
    ACTIONS(178), 1,
      anon_sym_begin,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(168), 1,
      sym_declaration,
    STATE(164), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [1177] = 2,
    ACTIONS(182), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    ACTIONS(184), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1187] = 4,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(170), 1,
      sym_value,
    STATE(172), 1,
      sym_numeric_literal,
    ACTIONS(188), 2,
      sym_integer_literal,
      sym_real_literal,
  [1201] = 2,
    ACTIONS(190), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    ACTIONS(192), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1211] = 3,
    ACTIONS(196), 1,
      anon_sym_COLON_EQ,
    STATE(99), 1,
      sym_variable_initialization,
    ACTIONS(194), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1223] = 4,
    ACTIONS(172), 1,
      anon_sym_return,
    ACTIONS(198), 1,
      anon_sym_is,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym__return_clause,
  [1236] = 1,
    ACTIONS(202), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_declare,
      sym_null_statement,
  [1243] = 4,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_is,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_parameter_list,
  [1256] = 3,
    ACTIONS(196), 1,
      anon_sym_COLON_EQ,
    STATE(116), 1,
      sym_variable_initialization,
    ACTIONS(208), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1267] = 1,
    ACTIONS(210), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1273] = 3,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_parameter_list_repeat1,
  [1283] = 1,
    ACTIONS(217), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1289] = 2,
    STATE(171), 1,
      sym_numeric_literal,
    ACTIONS(219), 2,
      sym_integer_literal,
      sym_real_literal,
  [1297] = 1,
    ACTIONS(221), 3,
      anon_sym_is,
      anon_sym_SEMI,
      anon_sym_return,
  [1303] = 3,
    ACTIONS(223), 1,
      anon_sym_begin,
    ACTIONS(225), 1,
      anon_sym_COLON_EQ,
    STATE(169), 1,
      sym_variable_initialization,
  [1313] = 3,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_is,
    STATE(173), 1,
      sym_parameter_list,
  [1323] = 1,
    ACTIONS(229), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1329] = 1,
    ACTIONS(231), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1335] = 1,
    ACTIONS(233), 3,
      anon_sym_is,
      anon_sym_SEMI,
      anon_sym_return,
  [1341] = 1,
    ACTIONS(235), 3,
      anon_sym_is,
      anon_sym_SEMI,
      anon_sym_return,
  [1347] = 1,
    ACTIONS(237), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1353] = 3,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_parameter_list_repeat1,
  [1363] = 3,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_parameter_list_repeat1,
  [1373] = 3,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_is,
    STATE(201), 1,
      sym_parameter_list,
  [1383] = 1,
    ACTIONS(245), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1389] = 2,
    STATE(76), 1,
      sym_numeric_literal,
    ACTIONS(188), 2,
      sym_integer_literal,
      sym_real_literal,
  [1397] = 1,
    ACTIONS(247), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1403] = 3,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(94), 1,
      sym_parameter_declaration,
  [1413] = 1,
    ACTIONS(253), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1419] = 1,
    ACTIONS(255), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1425] = 1,
    ACTIONS(257), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1431] = 1,
    ACTIONS(259), 2,
      anon_sym_is,
      anon_sym_SEMI,
  [1436] = 2,
    ACTIONS(261), 1,
      anon_sym_is,
    ACTIONS(263), 1,
      anon_sym_SEMI,
  [1443] = 2,
    ACTIONS(265), 1,
      anon_sym_is,
    ACTIONS(267), 1,
      anon_sym_SEMI,
  [1450] = 2,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      sym_identifier,
  [1457] = 2,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      sym_identifier,
  [1464] = 2,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    ACTIONS(279), 1,
      sym_identifier,
  [1471] = 2,
    ACTIONS(281), 1,
      anon_sym_SEMI,
    ACTIONS(283), 1,
      sym_identifier,
  [1478] = 2,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(119), 1,
      sym_parameter_declaration,
  [1485] = 2,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(287), 1,
      sym_identifier,
  [1492] = 2,
    ACTIONS(289), 1,
      anon_sym_is,
    ACTIONS(291), 1,
      anon_sym_SEMI,
  [1499] = 2,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      sym_identifier,
  [1506] = 2,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      sym_identifier,
  [1513] = 1,
    ACTIONS(301), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1518] = 2,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    ACTIONS(305), 1,
      sym_identifier,
  [1525] = 2,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      sym_identifier,
  [1532] = 1,
    ACTIONS(215), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1537] = 2,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    ACTIONS(313), 1,
      sym_identifier,
  [1544] = 2,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      sym_identifier,
  [1551] = 2,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(321), 1,
      sym_identifier,
  [1558] = 2,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    ACTIONS(325), 1,
      sym_identifier,
  [1565] = 2,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(329), 1,
      sym_identifier,
  [1572] = 2,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(333), 1,
      sym_identifier,
  [1579] = 2,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    ACTIONS(337), 1,
      sym_identifier,
  [1586] = 2,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(341), 1,
      sym_identifier,
  [1593] = 1,
    ACTIONS(343), 1,
      anon_sym_begin,
  [1597] = 1,
    ACTIONS(182), 1,
      anon_sym_begin,
  [1601] = 1,
    ACTIONS(345), 1,
      anon_sym_end,
  [1605] = 1,
    ACTIONS(347), 1,
      anon_sym_end,
  [1609] = 1,
    ACTIONS(349), 1,
      anon_sym_SEMI,
  [1613] = 1,
    ACTIONS(351), 1,
      anon_sym_end,
  [1617] = 1,
    ACTIONS(353), 1,
      anon_sym_end,
  [1621] = 1,
    ACTIONS(355), 1,
      anon_sym_SEMI,
  [1625] = 1,
    ACTIONS(357), 1,
      anon_sym_SEMI,
  [1629] = 1,
    ACTIONS(359), 1,
      anon_sym_SEMI,
  [1633] = 1,
    ACTIONS(361), 1,
      anon_sym_SEMI,
  [1637] = 1,
    ACTIONS(363), 1,
      anon_sym_SEMI,
  [1641] = 1,
    ACTIONS(365), 1,
      anon_sym_begin,
  [1645] = 1,
    ACTIONS(367), 1,
      anon_sym_SEMI,
  [1649] = 1,
    ACTIONS(369), 1,
      anon_sym_end,
  [1653] = 1,
    ACTIONS(371), 1,
      anon_sym_SEMI,
  [1657] = 1,
    ACTIONS(373), 1,
      anon_sym_SEMI,
  [1661] = 1,
    ACTIONS(375), 1,
      anon_sym_SEMI,
  [1665] = 1,
    ACTIONS(377), 1,
      anon_sym_begin,
  [1669] = 1,
    ACTIONS(379), 1,
      anon_sym_SEMI,
  [1673] = 1,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [1677] = 1,
    ACTIONS(383), 1,
      anon_sym_end,
  [1681] = 1,
    ACTIONS(385), 1,
      anon_sym_SEMI,
  [1685] = 1,
    ACTIONS(387), 1,
      anon_sym_is,
  [1689] = 1,
    ACTIONS(389), 1,
      anon_sym_end,
  [1693] = 1,
    ACTIONS(391), 1,
      anon_sym_SEMI,
  [1697] = 1,
    ACTIONS(393), 1,
      anon_sym_end,
  [1701] = 1,
    ACTIONS(395), 1,
      anon_sym_SEMI,
  [1705] = 1,
    ACTIONS(397), 1,
      anon_sym_SEMI,
  [1709] = 1,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [1713] = 1,
    ACTIONS(401), 1,
      anon_sym_COLON,
  [1717] = 1,
    ACTIONS(403), 1,
      sym_identifier,
  [1721] = 1,
    ACTIONS(405), 1,
      anon_sym_end,
  [1725] = 1,
    ACTIONS(407), 1,
      anon_sym_SEMI,
  [1729] = 1,
    ACTIONS(409), 1,
      anon_sym_SEMI,
  [1733] = 1,
    ACTIONS(411), 1,
      sym_identifier,
  [1737] = 1,
    ACTIONS(413), 1,
      anon_sym_begin,
  [1741] = 1,
    ACTIONS(415), 1,
      anon_sym_end,
  [1745] = 1,
    ACTIONS(417), 1,
      anon_sym_end,
  [1749] = 1,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [1753] = 1,
    ACTIONS(421), 1,
      anon_sym_begin,
  [1757] = 1,
    ACTIONS(423), 1,
      anon_sym_begin,
  [1761] = 1,
    ACTIONS(425), 1,
      anon_sym_SEMI,
  [1765] = 1,
    ACTIONS(190), 1,
      anon_sym_begin,
  [1769] = 1,
    ACTIONS(427), 1,
      anon_sym_SEMI,
  [1773] = 1,
    ACTIONS(429), 1,
      anon_sym_is,
  [1777] = 1,
    ACTIONS(431), 1,
      sym_identifier,
  [1781] = 1,
    ACTIONS(433), 1,
      anon_sym_end,
  [1785] = 1,
    ACTIONS(435), 1,
      anon_sym_begin,
  [1789] = 1,
    ACTIONS(437), 1,
      anon_sym_begin,
  [1793] = 1,
    ACTIONS(439), 1,
      sym_identifier,
  [1797] = 1,
    ACTIONS(441), 1,
      anon_sym_SEMI,
  [1801] = 1,
    ACTIONS(443), 1,
      anon_sym_SEMI,
  [1805] = 1,
    ACTIONS(445), 1,
      anon_sym_end,
  [1809] = 1,
    ACTIONS(447), 1,
      anon_sym_begin,
  [1813] = 1,
    ACTIONS(449), 1,
      anon_sym_SEMI,
  [1817] = 1,
    ACTIONS(451), 1,
      anon_sym_SEMI,
  [1821] = 1,
    ACTIONS(453), 1,
      sym_package_name,
  [1825] = 1,
    ACTIONS(455), 1,
      anon_sym_SEMI,
  [1829] = 1,
    ACTIONS(457), 1,
      anon_sym_COLON,
  [1833] = 1,
    ACTIONS(459), 1,
      anon_sym_end,
  [1837] = 1,
    ACTIONS(461), 1,
      anon_sym_end,
  [1841] = 1,
    ACTIONS(463), 1,
      anon_sym_end,
  [1845] = 1,
    ACTIONS(465), 1,
      anon_sym_end,
  [1849] = 1,
    ACTIONS(467), 1,
      sym_identifier,
  [1853] = 1,
    ACTIONS(469), 1,
      sym_identifier,
  [1857] = 1,
    ACTIONS(471), 1,
      sym_package_name,
  [1861] = 1,
    ACTIONS(473), 1,
      sym_package_name,
  [1865] = 1,
    ACTIONS(475), 1,
      anon_sym_end,
  [1869] = 1,
    ACTIONS(477), 1,
      anon_sym_begin,
  [1873] = 1,
    ACTIONS(479), 1,
      sym_identifier,
  [1877] = 1,
    ACTIONS(481), 1,
      anon_sym_end,
  [1881] = 1,
    ACTIONS(483), 1,
      anon_sym_begin,
  [1885] = 1,
    ACTIONS(289), 1,
      anon_sym_is,
  [1889] = 1,
    ACTIONS(485), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 140,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 209,
  [SMALL_STATE(11)] = 220,
  [SMALL_STATE(12)] = 231,
  [SMALL_STATE(13)] = 242,
  [SMALL_STATE(14)] = 253,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 275,
  [SMALL_STATE(17)] = 298,
  [SMALL_STATE(18)] = 313,
  [SMALL_STATE(19)] = 336,
  [SMALL_STATE(20)] = 347,
  [SMALL_STATE(21)] = 358,
  [SMALL_STATE(22)] = 381,
  [SMALL_STATE(23)] = 404,
  [SMALL_STATE(24)] = 427,
  [SMALL_STATE(25)] = 450,
  [SMALL_STATE(26)] = 473,
  [SMALL_STATE(27)] = 496,
  [SMALL_STATE(28)] = 519,
  [SMALL_STATE(29)] = 542,
  [SMALL_STATE(30)] = 565,
  [SMALL_STATE(31)] = 588,
  [SMALL_STATE(32)] = 611,
  [SMALL_STATE(33)] = 634,
  [SMALL_STATE(34)] = 657,
  [SMALL_STATE(35)] = 667,
  [SMALL_STATE(36)] = 677,
  [SMALL_STATE(37)] = 697,
  [SMALL_STATE(38)] = 707,
  [SMALL_STATE(39)] = 727,
  [SMALL_STATE(40)] = 747,
  [SMALL_STATE(41)] = 757,
  [SMALL_STATE(42)] = 767,
  [SMALL_STATE(43)] = 777,
  [SMALL_STATE(44)] = 787,
  [SMALL_STATE(45)] = 797,
  [SMALL_STATE(46)] = 807,
  [SMALL_STATE(47)] = 825,
  [SMALL_STATE(48)] = 835,
  [SMALL_STATE(49)] = 845,
  [SMALL_STATE(50)] = 855,
  [SMALL_STATE(51)] = 875,
  [SMALL_STATE(52)] = 885,
  [SMALL_STATE(53)] = 895,
  [SMALL_STATE(54)] = 905,
  [SMALL_STATE(55)] = 925,
  [SMALL_STATE(56)] = 935,
  [SMALL_STATE(57)] = 955,
  [SMALL_STATE(58)] = 965,
  [SMALL_STATE(59)] = 975,
  [SMALL_STATE(60)] = 985,
  [SMALL_STATE(61)] = 995,
  [SMALL_STATE(62)] = 1005,
  [SMALL_STATE(63)] = 1015,
  [SMALL_STATE(64)] = 1025,
  [SMALL_STATE(65)] = 1035,
  [SMALL_STATE(66)] = 1055,
  [SMALL_STATE(67)] = 1065,
  [SMALL_STATE(68)] = 1083,
  [SMALL_STATE(69)] = 1101,
  [SMALL_STATE(70)] = 1111,
  [SMALL_STATE(71)] = 1121,
  [SMALL_STATE(72)] = 1141,
  [SMALL_STATE(73)] = 1160,
  [SMALL_STATE(74)] = 1177,
  [SMALL_STATE(75)] = 1187,
  [SMALL_STATE(76)] = 1201,
  [SMALL_STATE(77)] = 1211,
  [SMALL_STATE(78)] = 1223,
  [SMALL_STATE(79)] = 1236,
  [SMALL_STATE(80)] = 1243,
  [SMALL_STATE(81)] = 1256,
  [SMALL_STATE(82)] = 1267,
  [SMALL_STATE(83)] = 1273,
  [SMALL_STATE(84)] = 1283,
  [SMALL_STATE(85)] = 1289,
  [SMALL_STATE(86)] = 1297,
  [SMALL_STATE(87)] = 1303,
  [SMALL_STATE(88)] = 1313,
  [SMALL_STATE(89)] = 1323,
  [SMALL_STATE(90)] = 1329,
  [SMALL_STATE(91)] = 1335,
  [SMALL_STATE(92)] = 1341,
  [SMALL_STATE(93)] = 1347,
  [SMALL_STATE(94)] = 1353,
  [SMALL_STATE(95)] = 1363,
  [SMALL_STATE(96)] = 1373,
  [SMALL_STATE(97)] = 1383,
  [SMALL_STATE(98)] = 1389,
  [SMALL_STATE(99)] = 1397,
  [SMALL_STATE(100)] = 1403,
  [SMALL_STATE(101)] = 1413,
  [SMALL_STATE(102)] = 1419,
  [SMALL_STATE(103)] = 1425,
  [SMALL_STATE(104)] = 1431,
  [SMALL_STATE(105)] = 1436,
  [SMALL_STATE(106)] = 1443,
  [SMALL_STATE(107)] = 1450,
  [SMALL_STATE(108)] = 1457,
  [SMALL_STATE(109)] = 1464,
  [SMALL_STATE(110)] = 1471,
  [SMALL_STATE(111)] = 1478,
  [SMALL_STATE(112)] = 1485,
  [SMALL_STATE(113)] = 1492,
  [SMALL_STATE(114)] = 1499,
  [SMALL_STATE(115)] = 1506,
  [SMALL_STATE(116)] = 1513,
  [SMALL_STATE(117)] = 1518,
  [SMALL_STATE(118)] = 1525,
  [SMALL_STATE(119)] = 1532,
  [SMALL_STATE(120)] = 1537,
  [SMALL_STATE(121)] = 1544,
  [SMALL_STATE(122)] = 1551,
  [SMALL_STATE(123)] = 1558,
  [SMALL_STATE(124)] = 1565,
  [SMALL_STATE(125)] = 1572,
  [SMALL_STATE(126)] = 1579,
  [SMALL_STATE(127)] = 1586,
  [SMALL_STATE(128)] = 1593,
  [SMALL_STATE(129)] = 1597,
  [SMALL_STATE(130)] = 1601,
  [SMALL_STATE(131)] = 1605,
  [SMALL_STATE(132)] = 1609,
  [SMALL_STATE(133)] = 1613,
  [SMALL_STATE(134)] = 1617,
  [SMALL_STATE(135)] = 1621,
  [SMALL_STATE(136)] = 1625,
  [SMALL_STATE(137)] = 1629,
  [SMALL_STATE(138)] = 1633,
  [SMALL_STATE(139)] = 1637,
  [SMALL_STATE(140)] = 1641,
  [SMALL_STATE(141)] = 1645,
  [SMALL_STATE(142)] = 1649,
  [SMALL_STATE(143)] = 1653,
  [SMALL_STATE(144)] = 1657,
  [SMALL_STATE(145)] = 1661,
  [SMALL_STATE(146)] = 1665,
  [SMALL_STATE(147)] = 1669,
  [SMALL_STATE(148)] = 1673,
  [SMALL_STATE(149)] = 1677,
  [SMALL_STATE(150)] = 1681,
  [SMALL_STATE(151)] = 1685,
  [SMALL_STATE(152)] = 1689,
  [SMALL_STATE(153)] = 1693,
  [SMALL_STATE(154)] = 1697,
  [SMALL_STATE(155)] = 1701,
  [SMALL_STATE(156)] = 1705,
  [SMALL_STATE(157)] = 1709,
  [SMALL_STATE(158)] = 1713,
  [SMALL_STATE(159)] = 1717,
  [SMALL_STATE(160)] = 1721,
  [SMALL_STATE(161)] = 1725,
  [SMALL_STATE(162)] = 1729,
  [SMALL_STATE(163)] = 1733,
  [SMALL_STATE(164)] = 1737,
  [SMALL_STATE(165)] = 1741,
  [SMALL_STATE(166)] = 1745,
  [SMALL_STATE(167)] = 1749,
  [SMALL_STATE(168)] = 1753,
  [SMALL_STATE(169)] = 1757,
  [SMALL_STATE(170)] = 1761,
  [SMALL_STATE(171)] = 1765,
  [SMALL_STATE(172)] = 1769,
  [SMALL_STATE(173)] = 1773,
  [SMALL_STATE(174)] = 1777,
  [SMALL_STATE(175)] = 1781,
  [SMALL_STATE(176)] = 1785,
  [SMALL_STATE(177)] = 1789,
  [SMALL_STATE(178)] = 1793,
  [SMALL_STATE(179)] = 1797,
  [SMALL_STATE(180)] = 1801,
  [SMALL_STATE(181)] = 1805,
  [SMALL_STATE(182)] = 1809,
  [SMALL_STATE(183)] = 1813,
  [SMALL_STATE(184)] = 1817,
  [SMALL_STATE(185)] = 1821,
  [SMALL_STATE(186)] = 1825,
  [SMALL_STATE(187)] = 1829,
  [SMALL_STATE(188)] = 1833,
  [SMALL_STATE(189)] = 1837,
  [SMALL_STATE(190)] = 1841,
  [SMALL_STATE(191)] = 1845,
  [SMALL_STATE(192)] = 1849,
  [SMALL_STATE(193)] = 1853,
  [SMALL_STATE(194)] = 1857,
  [SMALL_STATE(195)] = 1861,
  [SMALL_STATE(196)] = 1865,
  [SMALL_STATE(197)] = 1869,
  [SMALL_STATE(198)] = 1873,
  [SMALL_STATE(199)] = 1877,
  [SMALL_STATE(200)] = 1881,
  [SMALL_STATE(201)] = 1885,
  [SMALL_STATE(202)] = 1889,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(75),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(73),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(161),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 24),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 23),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 22),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 16),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 15),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 14),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 7, .production_id = 9),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 10, .production_id = 31),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 28),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 35),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 36),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 34),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 33),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 32),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 30),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 29),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 27),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 26),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 25),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 4, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 20),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 19),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_specification, 5, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 18),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 17),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 12),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_clause, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 3, .production_id = 1),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(159),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(158),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_specification, 6, .production_id = 6),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_initialization, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_initialization, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, .production_id = 7),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3, .production_id = 8),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 7, .production_id = 9),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(111),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 14),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 7),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 22),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 15),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 16),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 10),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 23),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 24),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 10, .production_id = 31),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_clause, 2, .production_id = 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 4, .production_id = 11),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 4, .production_id = 13),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 5, .production_id = 21),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [399] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 10),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
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
