#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 176
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 30

enum {
  anon_sym_DASH_DASH = 1,
  sym_comment_body = 2,
  anon_sym_with = 3,
  anon_sym_SEMI = 4,
  anon_sym_use = 5,
  anon_sym_procedure = 6,
  anon_sym_is = 7,
  anon_sym_begin = 8,
  anon_sym_end = 9,
  anon_sym_function = 10,
  anon_sym_return = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_COLON = 14,
  anon_sym_COLON_EQ = 15,
  anon_sym_COMMA = 16,
  anon_sym_declare = 17,
  sym_null_statement = 18,
  anon_sym_bool = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  sym_package_name = 22,
  sym_identifier = 23,
  sym_integer_literal = 24,
  sym_real_literal = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym_comment = 28,
  sym_with_statement = 29,
  sym_use_clause = 30,
  sym_procedure_definition = 31,
  sym_function_definition = 32,
  sym__return_clause = 33,
  sym__declarations = 34,
  sym_parameter_list = 35,
  sym_variable_declaration = 36,
  sym_variable_initialization = 37,
  sym_expressions = 38,
  sym__expression_statement = 39,
  sym_expression = 40,
  sym_return_statement = 41,
  sym_declare_block = 42,
  sym_declaration = 43,
  sym_value = 44,
  sym_numeric_literal = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym__declarations_repeat1 = 47,
  aux_sym_expressions_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH] = "--",
  [sym_comment_body] = "comment_body",
  [anon_sym_with] = "with",
  [anon_sym_SEMI] = ";",
  [anon_sym_use] = "use",
  [anon_sym_procedure] = "procedure",
  [anon_sym_is] = "is",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
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
  [sym_comment] = "comment",
  [sym_with_statement] = "with_statement",
  [sym_use_clause] = "use_clause",
  [sym_procedure_definition] = "procedure_definition",
  [sym_function_definition] = "function_definition",
  [sym__return_clause] = "_return_clause",
  [sym__declarations] = "_declarations",
  [sym_parameter_list] = "parameter_list",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_initialization] = "variable_initialization",
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
  [aux_sym_expressions_repeat1] = "expressions_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [sym_comment_body] = sym_comment_body,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_procedure] = anon_sym_procedure,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
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
  [sym_comment] = sym_comment,
  [sym_with_statement] = sym_with_statement,
  [sym_use_clause] = sym_use_clause,
  [sym_procedure_definition] = sym_procedure_definition,
  [sym_function_definition] = sym_function_definition,
  [sym__return_clause] = sym__return_clause,
  [sym__declarations] = sym__declarations,
  [sym_parameter_list] = sym_parameter_list,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_initialization] = sym_variable_initialization,
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
  [aux_sym_expressions_repeat1] = aux_sym_expressions_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_SEMI] = {
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
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
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
  [sym_function_definition] = {
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
  [aux_sym_expressions_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_declarations = 1,
  field_end_name = 2,
  field_expressions = 3,
  field_function_body = 4,
  field_initial_value = 5,
  field_name = 6,
  field_parameter_list = 7,
  field_procedure_body = 8,
  field_return_type = 9,
  field_type = 10,
  field_variable_name = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_declarations] = "declarations",
  [field_end_name] = "end_name",
  [field_expressions] = "expressions",
  [field_function_body] = "function_body",
  [field_initial_value] = "initial_value",
  [field_name] = "name",
  [field_parameter_list] = "parameter_list",
  [field_procedure_body] = "procedure_body",
  [field_return_type] = "return_type",
  [field_type] = "type",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 3},
  [9] = {.index = 17, .length = 3},
  [10] = {.index = 20, .length = 3},
  [11] = {.index = 23, .length = 3},
  [12] = {.index = 26, .length = 3},
  [13] = {.index = 29, .length = 3},
  [14] = {.index = 32, .length = 2},
  [15] = {.index = 34, .length = 4},
  [16] = {.index = 38, .length = 4},
  [17] = {.index = 42, .length = 4},
  [18] = {.index = 46, .length = 4},
  [19] = {.index = 50, .length = 4},
  [20] = {.index = 54, .length = 4},
  [21] = {.index = 58, .length = 4},
  [22] = {.index = 62, .length = 4},
  [23] = {.index = 66, .length = 4},
  [24] = {.index = 70, .length = 5},
  [25] = {.index = 75, .length = 5},
  [26] = {.index = 80, .length = 5},
  [27] = {.index = 85, .length = 5},
  [28] = {.index = 90, .length = 5},
  [29] = {.index = 95, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_return_type, 1},
  [1] =
    {field_type, 2},
    {field_variable_name, 0},
  [3] =
    {field_name, 1},
    {field_procedure_body, 4},
  [5] =
    {field_initial_value, 3},
    {field_type, 2},
    {field_variable_name, 0},
  [8] =
    {field_function_body, 4},
    {field_name, 1},
  [10] =
    {field_expressions, 2},
  [11] =
    {field_end_name, 6},
    {field_name, 1},
    {field_procedure_body, 4},
  [14] =
    {field_declarations, 3},
    {field_name, 1},
    {field_procedure_body, 5},
  [17] =
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 5},
  [20] =
    {field_end_name, 6},
    {field_function_body, 4},
    {field_name, 1},
  [23] =
    {field_declarations, 3},
    {field_function_body, 5},
    {field_name, 1},
  [26] =
    {field_function_body, 5},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [29] =
    {field_function_body, 5},
    {field_name, 1},
    {field_parameter_list, 2},
  [32] =
    {field_declarations, 1},
    {field_expressions, 3},
  [34] =
    {field_declarations, 3},
    {field_end_name, 7},
    {field_name, 1},
    {field_procedure_body, 5},
  [38] =
    {field_end_name, 7},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 5},
  [42] =
    {field_declarations, 4},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 6},
  [46] =
    {field_declarations, 3},
    {field_end_name, 7},
    {field_function_body, 5},
    {field_name, 1},
  [50] =
    {field_end_name, 7},
    {field_function_body, 5},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [54] =
    {field_declarations, 4},
    {field_function_body, 6},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [58] =
    {field_end_name, 7},
    {field_function_body, 5},
    {field_name, 1},
    {field_parameter_list, 2},
  [62] =
    {field_declarations, 4},
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
  [66] =
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 3, .inherited = true},
  [70] =
    {field_declarations, 4},
    {field_end_name, 8},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 6},
  [75] =
    {field_declarations, 4},
    {field_end_name, 8},
    {field_function_body, 6},
    {field_name, 1},
    {field_return_type, 2, .inherited = true},
  [80] =
    {field_declarations, 4},
    {field_end_name, 8},
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
  [85] =
    {field_end_name, 8},
    {field_function_body, 6},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 3, .inherited = true},
  [90] =
    {field_declarations, 5},
    {field_function_body, 7},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 3, .inherited = true},
  [95] =
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
      if (eof) ADVANCE(52);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_null_statement);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_package_name);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_real_literal);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
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
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 51},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
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
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 50},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 50},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_procedure] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(167),
    [sym__definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_with_statement] = STATE(2),
    [sym_use_clause] = STATE(2),
    [sym_procedure_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DASH_DASH] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_procedure] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
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
    STATE(3), 7,
      sym__definition,
      sym_comment,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [28] = 7,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH,
    ACTIONS(22), 1,
      anon_sym_with,
    ACTIONS(25), 1,
      anon_sym_use,
    ACTIONS(28), 1,
      anon_sym_procedure,
    ACTIONS(31), 1,
      anon_sym_function,
    STATE(3), 7,
      sym__definition,
      sym_comment,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [56] = 7,
    ACTIONS(34), 1,
      anon_sym_end,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(145), 1,
      sym_expression,
    STATE(6), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [80] = 7,
    ACTIONS(42), 1,
      anon_sym_end,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(47), 1,
      anon_sym_declare,
    ACTIONS(50), 1,
      sym_null_statement,
    STATE(145), 1,
      sym_expression,
    STATE(5), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [104] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    ACTIONS(53), 1,
      anon_sym_end,
    STATE(145), 1,
      sym_expression,
    STATE(5), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [128] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(139), 1,
      sym_expressions,
    STATE(145), 1,
      sym_expression,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [151] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(122), 1,
      sym_expressions,
    STATE(145), 1,
      sym_expression,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [174] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(145), 1,
      sym_expression,
    STATE(163), 1,
      sym_expressions,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [197] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(145), 1,
      sym_expression,
    STATE(162), 1,
      sym_expressions,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [220] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(145), 1,
      sym_expression,
    STATE(161), 1,
      sym_expressions,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [243] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(127), 1,
      sym_expressions,
    STATE(145), 1,
      sym_expression,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [266] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(145), 1,
      sym_expression,
    STATE(154), 1,
      sym_expressions,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [289] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(118), 1,
      sym_expressions,
    STATE(145), 1,
      sym_expression,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [312] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(129), 1,
      sym_expressions,
    STATE(145), 1,
      sym_expression,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [335] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(145), 1,
      sym_expression,
    STATE(155), 1,
      sym_expressions,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [358] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(145), 1,
      sym_expression,
    STATE(164), 1,
      sym_expressions,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [381] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(121), 1,
      sym_expressions,
    STATE(145), 1,
      sym_expression,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [404] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(140), 1,
      sym_expressions,
    STATE(145), 1,
      sym_expression,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [427] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(145), 1,
      sym_expression,
    STATE(158), 1,
      sym_expressions,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [450] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(115), 1,
      sym_expressions,
    STATE(145), 1,
      sym_expression,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [473] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(125), 1,
      sym_expressions,
    STATE(145), 1,
      sym_expression,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [496] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(123), 1,
      sym_expressions,
    STATE(145), 1,
      sym_expression,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [519] = 7,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(4), 1,
      sym__expression_statement,
    STATE(145), 1,
      sym_expression,
    STATE(146), 1,
      sym_expressions,
    STATE(147), 2,
      sym_return_statement,
      sym_declare_block,
  [542] = 6,
    ACTIONS(55), 1,
      anon_sym_procedure,
    ACTIONS(57), 1,
      anon_sym_begin,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(28), 1,
      sym_declaration,
    STATE(173), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [562] = 3,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_comment_body,
    ACTIONS(63), 5,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [576] = 6,
    ACTIONS(55), 1,
      anon_sym_procedure,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_begin,
    STATE(28), 1,
      sym_declaration,
    STATE(170), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [596] = 5,
    ACTIONS(55), 1,
      anon_sym_procedure,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_begin,
    STATE(33), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [614] = 1,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [624] = 6,
    ACTIONS(55), 1,
      anon_sym_procedure,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_begin,
    STATE(28), 1,
      sym_declaration,
    STATE(141), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [644] = 6,
    ACTIONS(55), 1,
      anon_sym_procedure,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_begin,
    STATE(28), 1,
      sym_declaration,
    STATE(150), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [664] = 1,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [674] = 5,
    ACTIONS(55), 1,
      anon_sym_procedure,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_begin,
    STATE(37), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [692] = 6,
    ACTIONS(55), 1,
      anon_sym_procedure,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_begin,
    STATE(28), 1,
      sym_declaration,
    STATE(105), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [712] = 6,
    ACTIONS(55), 1,
      anon_sym_procedure,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_begin,
    STATE(28), 1,
      sym_declaration,
    STATE(136), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [732] = 6,
    ACTIONS(55), 1,
      anon_sym_procedure,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_begin,
    STATE(28), 1,
      sym_declaration,
    STATE(119), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [752] = 5,
    ACTIONS(87), 1,
      anon_sym_procedure,
    ACTIONS(90), 1,
      anon_sym_begin,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(37), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [770] = 1,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [780] = 1,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [790] = 1,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [800] = 6,
    ACTIONS(55), 1,
      anon_sym_procedure,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_begin,
    STATE(28), 1,
      sym_declaration,
    STATE(172), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [820] = 1,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [830] = 1,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [840] = 1,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [850] = 1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [859] = 1,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [868] = 1,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [877] = 1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [886] = 1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [895] = 1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [904] = 1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [913] = 1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [922] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [931] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [940] = 1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [949] = 5,
    ACTIONS(131), 1,
      anon_sym_procedure,
    ACTIONS(133), 1,
      anon_sym_begin,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(131), 1,
      sym_declaration,
    STATE(137), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [966] = 1,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [975] = 1,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [984] = 1,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [993] = 1,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1002] = 1,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1011] = 1,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1020] = 1,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1029] = 1,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1038] = 3,
    ACTIONS(155), 1,
      anon_sym_COLON_EQ,
    STATE(82), 1,
      sym_variable_initialization,
    ACTIONS(153), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1050] = 5,
    ACTIONS(157), 1,
      anon_sym_is,
    ACTIONS(159), 1,
      anon_sym_return,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_parameter_list,
    STATE(104), 1,
      sym__return_clause,
  [1066] = 4,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(133), 1,
      sym_value,
    STATE(134), 1,
      sym_numeric_literal,
    ACTIONS(165), 2,
      sym_integer_literal,
      sym_real_literal,
  [1080] = 1,
    ACTIONS(167), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_declare,
      sym_null_statement,
  [1087] = 2,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(171), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1096] = 3,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_is,
    STATE(107), 1,
      sym_parameter_list,
  [1106] = 2,
    STATE(144), 1,
      sym_numeric_literal,
    ACTIONS(175), 2,
      sym_integer_literal,
      sym_real_literal,
  [1114] = 3,
    ACTIONS(177), 1,
      anon_sym_begin,
    ACTIONS(179), 1,
      anon_sym_COLON_EQ,
    STATE(142), 1,
      sym_variable_initialization,
  [1124] = 1,
    ACTIONS(181), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1130] = 1,
    ACTIONS(183), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1136] = 1,
    ACTIONS(185), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1142] = 1,
    ACTIONS(187), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1148] = 1,
    ACTIONS(189), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1154] = 1,
    ACTIONS(191), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1160] = 1,
    ACTIONS(193), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1166] = 1,
    ACTIONS(195), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1172] = 2,
    STATE(80), 1,
      sym_numeric_literal,
    ACTIONS(165), 2,
      sym_integer_literal,
      sym_real_literal,
  [1180] = 1,
    ACTIONS(197), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1186] = 1,
    ACTIONS(199), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1192] = 1,
    ACTIONS(201), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1198] = 3,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_is,
    STATE(174), 1,
      sym_parameter_list,
  [1208] = 3,
    ACTIONS(159), 1,
      anon_sym_return,
    ACTIONS(205), 1,
      anon_sym_is,
    STATE(148), 1,
      sym__return_clause,
  [1218] = 2,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    ACTIONS(209), 1,
      sym_identifier,
  [1225] = 2,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(213), 1,
      sym_identifier,
  [1232] = 2,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    ACTIONS(217), 1,
      sym_identifier,
  [1239] = 2,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(221), 1,
      sym_identifier,
  [1246] = 1,
    ACTIONS(223), 2,
      anon_sym_is,
      anon_sym_return,
  [1251] = 2,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      sym_identifier,
  [1258] = 2,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      sym_identifier,
  [1265] = 2,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      sym_identifier,
  [1272] = 2,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(239), 1,
      sym_identifier,
  [1279] = 2,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    ACTIONS(243), 1,
      sym_identifier,
  [1286] = 2,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      sym_identifier,
  [1293] = 2,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      sym_identifier,
  [1300] = 2,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      sym_identifier,
  [1307] = 2,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(259), 1,
      sym_identifier,
  [1314] = 2,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(263), 1,
      sym_identifier,
  [1321] = 2,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(267), 1,
      sym_identifier,
  [1328] = 2,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      sym_identifier,
  [1335] = 1,
    ACTIONS(273), 1,
      anon_sym_is,
  [1339] = 1,
    ACTIONS(275), 1,
      anon_sym_begin,
  [1343] = 1,
    ACTIONS(277), 1,
      sym_identifier,
  [1347] = 1,
    ACTIONS(279), 1,
      anon_sym_is,
  [1351] = 1,
    ACTIONS(281), 1,
      anon_sym_SEMI,
  [1355] = 1,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
  [1359] = 1,
    ACTIONS(285), 1,
      anon_sym_SEMI,
  [1363] = 1,
    ACTIONS(287), 1,
      anon_sym_SEMI,
  [1367] = 1,
    ACTIONS(289), 1,
      anon_sym_SEMI,
  [1371] = 1,
    ACTIONS(291), 1,
      anon_sym_SEMI,
  [1375] = 1,
    ACTIONS(293), 1,
      anon_sym_SEMI,
  [1379] = 1,
    ACTIONS(295), 1,
      anon_sym_end,
  [1383] = 1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [1387] = 1,
    ACTIONS(299), 1,
      anon_sym_COLON,
  [1391] = 1,
    ACTIONS(301), 1,
      anon_sym_end,
  [1395] = 1,
    ACTIONS(303), 1,
      anon_sym_begin,
  [1399] = 1,
    ACTIONS(305), 1,
      anon_sym_SEMI,
  [1403] = 1,
    ACTIONS(307), 1,
      anon_sym_end,
  [1407] = 1,
    ACTIONS(309), 1,
      anon_sym_end,
  [1411] = 1,
    ACTIONS(311), 1,
      anon_sym_end,
  [1415] = 1,
    ACTIONS(313), 1,
      anon_sym_SEMI,
  [1419] = 1,
    ACTIONS(315), 1,
      anon_sym_end,
  [1423] = 1,
    ACTIONS(317), 1,
      anon_sym_SEMI,
  [1427] = 1,
    ACTIONS(319), 1,
      anon_sym_end,
  [1431] = 1,
    ACTIONS(321), 1,
      anon_sym_SEMI,
  [1435] = 1,
    ACTIONS(323), 1,
      anon_sym_end,
  [1439] = 1,
    ACTIONS(325), 1,
      anon_sym_SEMI,
  [1443] = 1,
    ACTIONS(327), 1,
      anon_sym_begin,
  [1447] = 1,
    ACTIONS(329), 1,
      anon_sym_SEMI,
  [1451] = 1,
    ACTIONS(331), 1,
      anon_sym_SEMI,
  [1455] = 1,
    ACTIONS(333), 1,
      anon_sym_SEMI,
  [1459] = 1,
    ACTIONS(335), 1,
      anon_sym_SEMI,
  [1463] = 1,
    ACTIONS(337), 1,
      anon_sym_begin,
  [1467] = 1,
    ACTIONS(339), 1,
      anon_sym_begin,
  [1471] = 1,
    ACTIONS(169), 1,
      anon_sym_begin,
  [1475] = 1,
    ACTIONS(341), 1,
      anon_sym_end,
  [1479] = 1,
    ACTIONS(343), 1,
      anon_sym_end,
  [1483] = 1,
    ACTIONS(345), 1,
      anon_sym_begin,
  [1487] = 1,
    ACTIONS(347), 1,
      anon_sym_begin,
  [1491] = 1,
    ACTIONS(349), 1,
      sym_identifier,
  [1495] = 1,
    ACTIONS(351), 1,
      anon_sym_begin,
  [1499] = 1,
    ACTIONS(353), 1,
      anon_sym_SEMI,
  [1503] = 1,
    ACTIONS(355), 1,
      anon_sym_end,
  [1507] = 1,
    ACTIONS(357), 1,
      anon_sym_SEMI,
  [1511] = 1,
    ACTIONS(359), 1,
      anon_sym_is,
  [1515] = 1,
    ACTIONS(361), 1,
      anon_sym_is,
  [1519] = 1,
    ACTIONS(363), 1,
      anon_sym_begin,
  [1523] = 1,
    ACTIONS(365), 1,
      sym_identifier,
  [1527] = 1,
    ACTIONS(367), 1,
      sym_package_name,
  [1531] = 1,
    ACTIONS(369), 1,
      anon_sym_SEMI,
  [1535] = 1,
    ACTIONS(371), 1,
      anon_sym_end,
  [1539] = 1,
    ACTIONS(373), 1,
      anon_sym_end,
  [1543] = 1,
    ACTIONS(375), 1,
      anon_sym_SEMI,
  [1547] = 1,
    ACTIONS(377), 1,
      anon_sym_SEMI,
  [1551] = 1,
    ACTIONS(379), 1,
      anon_sym_end,
  [1555] = 1,
    ACTIONS(381), 1,
      anon_sym_SEMI,
  [1559] = 1,
    ACTIONS(383), 1,
      anon_sym_COLON,
  [1563] = 1,
    ACTIONS(385), 1,
      anon_sym_end,
  [1567] = 1,
    ACTIONS(387), 1,
      anon_sym_end,
  [1571] = 1,
    ACTIONS(389), 1,
      anon_sym_end,
  [1575] = 1,
    ACTIONS(391), 1,
      anon_sym_end,
  [1579] = 1,
    ACTIONS(393), 1,
      anon_sym_SEMI,
  [1583] = 1,
    ACTIONS(395), 1,
      anon_sym_SEMI,
  [1587] = 1,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
  [1591] = 1,
    ACTIONS(399), 1,
      sym_identifier,
  [1595] = 1,
    ACTIONS(401), 1,
      sym_identifier,
  [1599] = 1,
    ACTIONS(403), 1,
      anon_sym_begin,
  [1603] = 1,
    ACTIONS(405), 1,
      sym_package_name,
  [1607] = 1,
    ACTIONS(407), 1,
      anon_sym_begin,
  [1611] = 1,
    ACTIONS(409), 1,
      anon_sym_begin,
  [1615] = 1,
    ACTIONS(411), 1,
      anon_sym_is,
  [1619] = 1,
    ACTIONS(413), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 151,
  [SMALL_STATE(9)] = 174,
  [SMALL_STATE(10)] = 197,
  [SMALL_STATE(11)] = 220,
  [SMALL_STATE(12)] = 243,
  [SMALL_STATE(13)] = 266,
  [SMALL_STATE(14)] = 289,
  [SMALL_STATE(15)] = 312,
  [SMALL_STATE(16)] = 335,
  [SMALL_STATE(17)] = 358,
  [SMALL_STATE(18)] = 381,
  [SMALL_STATE(19)] = 404,
  [SMALL_STATE(20)] = 427,
  [SMALL_STATE(21)] = 450,
  [SMALL_STATE(22)] = 473,
  [SMALL_STATE(23)] = 496,
  [SMALL_STATE(24)] = 519,
  [SMALL_STATE(25)] = 542,
  [SMALL_STATE(26)] = 562,
  [SMALL_STATE(27)] = 576,
  [SMALL_STATE(28)] = 596,
  [SMALL_STATE(29)] = 614,
  [SMALL_STATE(30)] = 624,
  [SMALL_STATE(31)] = 644,
  [SMALL_STATE(32)] = 664,
  [SMALL_STATE(33)] = 674,
  [SMALL_STATE(34)] = 692,
  [SMALL_STATE(35)] = 712,
  [SMALL_STATE(36)] = 732,
  [SMALL_STATE(37)] = 752,
  [SMALL_STATE(38)] = 770,
  [SMALL_STATE(39)] = 780,
  [SMALL_STATE(40)] = 790,
  [SMALL_STATE(41)] = 800,
  [SMALL_STATE(42)] = 820,
  [SMALL_STATE(43)] = 830,
  [SMALL_STATE(44)] = 840,
  [SMALL_STATE(45)] = 850,
  [SMALL_STATE(46)] = 859,
  [SMALL_STATE(47)] = 868,
  [SMALL_STATE(48)] = 877,
  [SMALL_STATE(49)] = 886,
  [SMALL_STATE(50)] = 895,
  [SMALL_STATE(51)] = 904,
  [SMALL_STATE(52)] = 913,
  [SMALL_STATE(53)] = 922,
  [SMALL_STATE(54)] = 931,
  [SMALL_STATE(55)] = 940,
  [SMALL_STATE(56)] = 949,
  [SMALL_STATE(57)] = 966,
  [SMALL_STATE(58)] = 975,
  [SMALL_STATE(59)] = 984,
  [SMALL_STATE(60)] = 993,
  [SMALL_STATE(61)] = 1002,
  [SMALL_STATE(62)] = 1011,
  [SMALL_STATE(63)] = 1020,
  [SMALL_STATE(64)] = 1029,
  [SMALL_STATE(65)] = 1038,
  [SMALL_STATE(66)] = 1050,
  [SMALL_STATE(67)] = 1066,
  [SMALL_STATE(68)] = 1080,
  [SMALL_STATE(69)] = 1087,
  [SMALL_STATE(70)] = 1096,
  [SMALL_STATE(71)] = 1106,
  [SMALL_STATE(72)] = 1114,
  [SMALL_STATE(73)] = 1124,
  [SMALL_STATE(74)] = 1130,
  [SMALL_STATE(75)] = 1136,
  [SMALL_STATE(76)] = 1142,
  [SMALL_STATE(77)] = 1148,
  [SMALL_STATE(78)] = 1154,
  [SMALL_STATE(79)] = 1160,
  [SMALL_STATE(80)] = 1166,
  [SMALL_STATE(81)] = 1172,
  [SMALL_STATE(82)] = 1180,
  [SMALL_STATE(83)] = 1186,
  [SMALL_STATE(84)] = 1192,
  [SMALL_STATE(85)] = 1198,
  [SMALL_STATE(86)] = 1208,
  [SMALL_STATE(87)] = 1218,
  [SMALL_STATE(88)] = 1225,
  [SMALL_STATE(89)] = 1232,
  [SMALL_STATE(90)] = 1239,
  [SMALL_STATE(91)] = 1246,
  [SMALL_STATE(92)] = 1251,
  [SMALL_STATE(93)] = 1258,
  [SMALL_STATE(94)] = 1265,
  [SMALL_STATE(95)] = 1272,
  [SMALL_STATE(96)] = 1279,
  [SMALL_STATE(97)] = 1286,
  [SMALL_STATE(98)] = 1293,
  [SMALL_STATE(99)] = 1300,
  [SMALL_STATE(100)] = 1307,
  [SMALL_STATE(101)] = 1314,
  [SMALL_STATE(102)] = 1321,
  [SMALL_STATE(103)] = 1328,
  [SMALL_STATE(104)] = 1335,
  [SMALL_STATE(105)] = 1339,
  [SMALL_STATE(106)] = 1343,
  [SMALL_STATE(107)] = 1347,
  [SMALL_STATE(108)] = 1351,
  [SMALL_STATE(109)] = 1355,
  [SMALL_STATE(110)] = 1359,
  [SMALL_STATE(111)] = 1363,
  [SMALL_STATE(112)] = 1367,
  [SMALL_STATE(113)] = 1371,
  [SMALL_STATE(114)] = 1375,
  [SMALL_STATE(115)] = 1379,
  [SMALL_STATE(116)] = 1383,
  [SMALL_STATE(117)] = 1387,
  [SMALL_STATE(118)] = 1391,
  [SMALL_STATE(119)] = 1395,
  [SMALL_STATE(120)] = 1399,
  [SMALL_STATE(121)] = 1403,
  [SMALL_STATE(122)] = 1407,
  [SMALL_STATE(123)] = 1411,
  [SMALL_STATE(124)] = 1415,
  [SMALL_STATE(125)] = 1419,
  [SMALL_STATE(126)] = 1423,
  [SMALL_STATE(127)] = 1427,
  [SMALL_STATE(128)] = 1431,
  [SMALL_STATE(129)] = 1435,
  [SMALL_STATE(130)] = 1439,
  [SMALL_STATE(131)] = 1443,
  [SMALL_STATE(132)] = 1447,
  [SMALL_STATE(133)] = 1451,
  [SMALL_STATE(134)] = 1455,
  [SMALL_STATE(135)] = 1459,
  [SMALL_STATE(136)] = 1463,
  [SMALL_STATE(137)] = 1467,
  [SMALL_STATE(138)] = 1471,
  [SMALL_STATE(139)] = 1475,
  [SMALL_STATE(140)] = 1479,
  [SMALL_STATE(141)] = 1483,
  [SMALL_STATE(142)] = 1487,
  [SMALL_STATE(143)] = 1491,
  [SMALL_STATE(144)] = 1495,
  [SMALL_STATE(145)] = 1499,
  [SMALL_STATE(146)] = 1503,
  [SMALL_STATE(147)] = 1507,
  [SMALL_STATE(148)] = 1511,
  [SMALL_STATE(149)] = 1515,
  [SMALL_STATE(150)] = 1519,
  [SMALL_STATE(151)] = 1523,
  [SMALL_STATE(152)] = 1527,
  [SMALL_STATE(153)] = 1531,
  [SMALL_STATE(154)] = 1535,
  [SMALL_STATE(155)] = 1539,
  [SMALL_STATE(156)] = 1543,
  [SMALL_STATE(157)] = 1547,
  [SMALL_STATE(158)] = 1551,
  [SMALL_STATE(159)] = 1555,
  [SMALL_STATE(160)] = 1559,
  [SMALL_STATE(161)] = 1563,
  [SMALL_STATE(162)] = 1567,
  [SMALL_STATE(163)] = 1571,
  [SMALL_STATE(164)] = 1575,
  [SMALL_STATE(165)] = 1579,
  [SMALL_STATE(166)] = 1583,
  [SMALL_STATE(167)] = 1587,
  [SMALL_STATE(168)] = 1591,
  [SMALL_STATE(169)] = 1595,
  [SMALL_STATE(170)] = 1599,
  [SMALL_STATE(171)] = 1603,
  [SMALL_STATE(172)] = 1607,
  [SMALL_STATE(173)] = 1611,
  [SMALL_STATE(174)] = 1615,
  [SMALL_STATE(175)] = 1619,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(67),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(56),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(147),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 10, .production_id = 24),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 7),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(175),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(117),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 8),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 9),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 15),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 16),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 7, .production_id = 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 17),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 26),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 18),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 11),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 10),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 12),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_clause, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 13),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 19),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 20),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 21),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 22),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 23),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 25),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 27),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 29),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 28),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 8),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 9),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 15),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 7, .production_id = 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 16),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 17),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_initialization, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 10, .production_id = 24),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 5, .production_id = 14),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 4, .production_id = 6),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_initialization, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_clause, 2, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
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
