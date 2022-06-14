#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 174
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 30

enum {
  anon_sym_with = 1,
  anon_sym_SEMI = 2,
  anon_sym_use = 3,
  anon_sym_procedure = 4,
  anon_sym_is = 5,
  anon_sym_begin = 6,
  anon_sym_end = 7,
  anon_sym_function = 8,
  anon_sym_return = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_COLON = 12,
  anon_sym_COLON_EQ = 13,
  anon_sym_COMMA = 14,
  anon_sym_declare = 15,
  sym_null_statement = 16,
  anon_sym_bool = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  sym_package_name = 20,
  sym_identifier = 21,
  sym_integer_literal = 22,
  sym_real_literal = 23,
  sym_source_file = 24,
  sym__definition = 25,
  sym_with_statement = 26,
  sym_use_clause = 27,
  sym_procedure_definition = 28,
  sym_function_definition = 29,
  sym__return_clause = 30,
  sym__declarations = 31,
  sym_parameter_list = 32,
  sym_variable_declaration = 33,
  sym_variable_initialization = 34,
  sym_expressions = 35,
  sym__expression_statement = 36,
  sym_expression = 37,
  sym_return_statement = 38,
  sym_declare_block = 39,
  sym_declaration = 40,
  sym_value = 41,
  sym_numeric_literal = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym__declarations_repeat1 = 44,
  aux_sym_expressions_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
      if (eof) ADVANCE(50);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'w') ADVANCE(21);
      if (lookahead == '{') ADVANCE(71);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_null_statement);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_package_name);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_real_literal);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
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
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
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
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
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
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 49},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 49},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(165),
    [sym__definition] = STATE(2),
    [sym_with_statement] = STATE(2),
    [sym_use_clause] = STATE(2),
    [sym_procedure_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_with] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_procedure] = ACTIONS(9),
    [anon_sym_function] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_with,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_procedure,
    ACTIONS(11), 1,
      anon_sym_function,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 6,
      sym__definition,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [24] = 6,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_with,
    ACTIONS(20), 1,
      anon_sym_use,
    ACTIONS(23), 1,
      anon_sym_procedure,
    ACTIONS(26), 1,
      anon_sym_function,
    STATE(3), 6,
      sym__definition,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [48] = 7,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(34), 1,
      anon_sym_declare,
    ACTIONS(37), 1,
      sym_null_statement,
    STATE(141), 1,
      sym_expression,
    STATE(4), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [72] = 7,
    ACTIONS(40), 1,
      anon_sym_end,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(141), 1,
      sym_expression,
    STATE(4), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [96] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    ACTIONS(48), 1,
      anon_sym_end,
    STATE(141), 1,
      sym_expression,
    STATE(5), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [120] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(141), 1,
      sym_expression,
    STATE(160), 1,
      sym_expressions,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [143] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(141), 1,
      sym_expression,
    STATE(161), 1,
      sym_expressions,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [166] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(141), 1,
      sym_expression,
    STATE(153), 1,
      sym_expressions,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [189] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(141), 1,
      sym_expression,
    STATE(159), 1,
      sym_expressions,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [212] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(141), 1,
      sym_expression,
    STATE(150), 1,
      sym_expressions,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [235] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(123), 1,
      sym_expressions,
    STATE(141), 1,
      sym_expression,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [258] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(116), 1,
      sym_expressions,
    STATE(141), 1,
      sym_expression,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [281] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(127), 1,
      sym_expressions,
    STATE(141), 1,
      sym_expression,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [304] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(141), 1,
      sym_expression,
    STATE(152), 1,
      sym_expressions,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [327] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(141), 1,
      sym_expression,
    STATE(162), 1,
      sym_expressions,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [350] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(137), 1,
      sym_expressions,
    STATE(141), 1,
      sym_expression,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [373] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(103), 1,
      sym_expressions,
    STATE(141), 1,
      sym_expression,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [396] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(119), 1,
      sym_expressions,
    STATE(141), 1,
      sym_expression,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [419] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(113), 1,
      sym_expressions,
    STATE(141), 1,
      sym_expression,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [442] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(125), 1,
      sym_expressions,
    STATE(141), 1,
      sym_expression,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [465] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(141), 1,
      sym_expression,
    STATE(143), 1,
      sym_expressions,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [488] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(121), 1,
      sym_expressions,
    STATE(141), 1,
      sym_expression,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [511] = 7,
    ACTIONS(42), 1,
      anon_sym_return,
    ACTIONS(44), 1,
      anon_sym_declare,
    ACTIONS(46), 1,
      sym_null_statement,
    STATE(6), 1,
      sym__expression_statement,
    STATE(120), 1,
      sym_expressions,
    STATE(141), 1,
      sym_expression,
    STATE(144), 2,
      sym_return_statement,
      sym_declare_block,
  [534] = 6,
    ACTIONS(50), 1,
      anon_sym_procedure,
    ACTIONS(52), 1,
      anon_sym_begin,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(26), 1,
      sym_declaration,
    STATE(132), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [554] = 5,
    ACTIONS(50), 1,
      anon_sym_procedure,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_begin,
    STATE(34), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [572] = 6,
    ACTIONS(50), 1,
      anon_sym_procedure,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_begin,
    STATE(26), 1,
      sym_declaration,
    STATE(170), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [592] = 6,
    ACTIONS(50), 1,
      anon_sym_procedure,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_begin,
    STATE(26), 1,
      sym_declaration,
    STATE(138), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [612] = 6,
    ACTIONS(50), 1,
      anon_sym_procedure,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_begin,
    STATE(26), 1,
      sym_declaration,
    STATE(147), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [632] = 6,
    ACTIONS(50), 1,
      anon_sym_procedure,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_begin,
    STATE(26), 1,
      sym_declaration,
    STATE(117), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [652] = 6,
    ACTIONS(50), 1,
      anon_sym_procedure,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_begin,
    STATE(26), 1,
      sym_declaration,
    STATE(134), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [672] = 5,
    ACTIONS(68), 1,
      anon_sym_procedure,
    ACTIONS(71), 1,
      anon_sym_begin,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(32), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [690] = 6,
    ACTIONS(50), 1,
      anon_sym_procedure,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_begin,
    STATE(26), 1,
      sym_declaration,
    STATE(171), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [710] = 5,
    ACTIONS(50), 1,
      anon_sym_procedure,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_begin,
    STATE(32), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [728] = 6,
    ACTIONS(50), 1,
      anon_sym_procedure,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_begin,
    STATE(26), 1,
      sym_declaration,
    STATE(168), 1,
      sym__declarations,
    STATE(84), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [748] = 1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [757] = 1,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [766] = 1,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [775] = 5,
    ACTIONS(88), 1,
      anon_sym_procedure,
    ACTIONS(90), 1,
      anon_sym_begin,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(129), 1,
      sym_declaration,
    STATE(135), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [792] = 1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [801] = 1,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [810] = 1,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [819] = 1,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [828] = 1,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
      anon_sym_function,
  [837] = 1,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [845] = 5,
    ACTIONS(106), 1,
      anon_sym_is,
    ACTIONS(108), 1,
      anon_sym_return,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_parameter_list,
    STATE(104), 1,
      sym__return_clause,
  [861] = 1,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [869] = 1,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [877] = 1,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [885] = 1,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [893] = 1,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [901] = 1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [909] = 1,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [917] = 4,
    ACTIONS(126), 1,
      sym_identifier,
    STATE(130), 1,
      sym_value,
    STATE(131), 1,
      sym_numeric_literal,
    ACTIONS(128), 2,
      sym_integer_literal,
      sym_real_literal,
  [931] = 1,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [939] = 1,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [947] = 1,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [955] = 1,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [963] = 3,
    ACTIONS(140), 1,
      anon_sym_COLON_EQ,
    STATE(80), 1,
      sym_variable_initialization,
    ACTIONS(138), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [975] = 1,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [983] = 1,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [991] = 1,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [999] = 1,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1007] = 1,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1015] = 1,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_function,
  [1023] = 2,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    ACTIONS(156), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1032] = 1,
    ACTIONS(158), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_declare,
      sym_null_statement,
  [1039] = 3,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_is,
    STATE(172), 1,
      sym_parameter_list,
  [1049] = 3,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_is,
    STATE(107), 1,
      sym_parameter_list,
  [1059] = 3,
    ACTIONS(164), 1,
      anon_sym_begin,
    ACTIONS(166), 1,
      anon_sym_COLON_EQ,
    STATE(140), 1,
      sym_variable_initialization,
  [1069] = 1,
    ACTIONS(168), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1075] = 2,
    STATE(142), 1,
      sym_numeric_literal,
    ACTIONS(170), 2,
      sym_integer_literal,
      sym_real_literal,
  [1083] = 1,
    ACTIONS(172), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1089] = 1,
    ACTIONS(174), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1095] = 1,
    ACTIONS(176), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1101] = 1,
    ACTIONS(178), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1107] = 3,
    ACTIONS(108), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      anon_sym_is,
    STATE(145), 1,
      sym__return_clause,
  [1117] = 1,
    ACTIONS(182), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1123] = 2,
    STATE(78), 1,
      sym_numeric_literal,
    ACTIONS(128), 2,
      sym_integer_literal,
      sym_real_literal,
  [1131] = 1,
    ACTIONS(184), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1137] = 1,
    ACTIONS(186), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1143] = 1,
    ACTIONS(188), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1149] = 1,
    ACTIONS(190), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1155] = 1,
    ACTIONS(192), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [1161] = 2,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      sym_identifier,
  [1168] = 2,
    ACTIONS(198), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      sym_identifier,
  [1175] = 2,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      sym_identifier,
  [1182] = 2,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      sym_identifier,
  [1189] = 2,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      sym_identifier,
  [1196] = 2,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(216), 1,
      sym_identifier,
  [1203] = 2,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    ACTIONS(220), 1,
      sym_identifier,
  [1210] = 2,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(224), 1,
      sym_identifier,
  [1217] = 2,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      sym_identifier,
  [1224] = 2,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      sym_identifier,
  [1231] = 2,
    ACTIONS(234), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      sym_identifier,
  [1238] = 1,
    ACTIONS(238), 2,
      anon_sym_is,
      anon_sym_return,
  [1243] = 2,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    ACTIONS(242), 1,
      sym_identifier,
  [1250] = 2,
    ACTIONS(244), 1,
      anon_sym_SEMI,
    ACTIONS(246), 1,
      sym_identifier,
  [1257] = 2,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    ACTIONS(250), 1,
      sym_identifier,
  [1264] = 2,
    ACTIONS(252), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      sym_identifier,
  [1271] = 2,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      sym_identifier,
  [1278] = 1,
    ACTIONS(260), 1,
      anon_sym_SEMI,
  [1282] = 1,
    ACTIONS(262), 1,
      anon_sym_end,
  [1286] = 1,
    ACTIONS(264), 1,
      anon_sym_is,
  [1290] = 1,
    ACTIONS(266), 1,
      sym_identifier,
  [1294] = 1,
    ACTIONS(268), 1,
      anon_sym_SEMI,
  [1298] = 1,
    ACTIONS(270), 1,
      anon_sym_is,
  [1302] = 1,
    ACTIONS(272), 1,
      anon_sym_SEMI,
  [1306] = 1,
    ACTIONS(274), 1,
      anon_sym_SEMI,
  [1310] = 1,
    ACTIONS(276), 1,
      anon_sym_SEMI,
  [1314] = 1,
    ACTIONS(278), 1,
      anon_sym_SEMI,
  [1318] = 1,
    ACTIONS(280), 1,
      anon_sym_COLON,
  [1322] = 1,
    ACTIONS(282), 1,
      anon_sym_end,
  [1326] = 1,
    ACTIONS(284), 1,
      anon_sym_SEMI,
  [1330] = 1,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
  [1334] = 1,
    ACTIONS(288), 1,
      anon_sym_end,
  [1338] = 1,
    ACTIONS(290), 1,
      anon_sym_begin,
  [1342] = 1,
    ACTIONS(292), 1,
      anon_sym_SEMI,
  [1346] = 1,
    ACTIONS(294), 1,
      anon_sym_end,
  [1350] = 1,
    ACTIONS(296), 1,
      anon_sym_end,
  [1354] = 1,
    ACTIONS(298), 1,
      anon_sym_end,
  [1358] = 1,
    ACTIONS(300), 1,
      anon_sym_SEMI,
  [1362] = 1,
    ACTIONS(302), 1,
      anon_sym_end,
  [1366] = 1,
    ACTIONS(304), 1,
      anon_sym_SEMI,
  [1370] = 1,
    ACTIONS(306), 1,
      anon_sym_end,
  [1374] = 1,
    ACTIONS(308), 1,
      anon_sym_SEMI,
  [1378] = 1,
    ACTIONS(310), 1,
      anon_sym_end,
  [1382] = 1,
    ACTIONS(312), 1,
      anon_sym_SEMI,
  [1386] = 1,
    ACTIONS(314), 1,
      anon_sym_begin,
  [1390] = 1,
    ACTIONS(316), 1,
      anon_sym_SEMI,
  [1394] = 1,
    ACTIONS(318), 1,
      anon_sym_SEMI,
  [1398] = 1,
    ACTIONS(320), 1,
      anon_sym_begin,
  [1402] = 1,
    ACTIONS(322), 1,
      anon_sym_SEMI,
  [1406] = 1,
    ACTIONS(324), 1,
      anon_sym_begin,
  [1410] = 1,
    ACTIONS(326), 1,
      anon_sym_begin,
  [1414] = 1,
    ACTIONS(154), 1,
      anon_sym_begin,
  [1418] = 1,
    ACTIONS(328), 1,
      anon_sym_end,
  [1422] = 1,
    ACTIONS(330), 1,
      anon_sym_begin,
  [1426] = 1,
    ACTIONS(332), 1,
      sym_identifier,
  [1430] = 1,
    ACTIONS(334), 1,
      anon_sym_begin,
  [1434] = 1,
    ACTIONS(336), 1,
      anon_sym_SEMI,
  [1438] = 1,
    ACTIONS(338), 1,
      anon_sym_begin,
  [1442] = 1,
    ACTIONS(340), 1,
      anon_sym_end,
  [1446] = 1,
    ACTIONS(342), 1,
      anon_sym_SEMI,
  [1450] = 1,
    ACTIONS(344), 1,
      anon_sym_is,
  [1454] = 1,
    ACTIONS(346), 1,
      anon_sym_is,
  [1458] = 1,
    ACTIONS(348), 1,
      anon_sym_begin,
  [1462] = 1,
    ACTIONS(350), 1,
      sym_package_name,
  [1466] = 1,
    ACTIONS(352), 1,
      sym_identifier,
  [1470] = 1,
    ACTIONS(354), 1,
      anon_sym_end,
  [1474] = 1,
    ACTIONS(356), 1,
      anon_sym_SEMI,
  [1478] = 1,
    ACTIONS(358), 1,
      anon_sym_end,
  [1482] = 1,
    ACTIONS(360), 1,
      anon_sym_end,
  [1486] = 1,
    ACTIONS(362), 1,
      anon_sym_SEMI,
  [1490] = 1,
    ACTIONS(364), 1,
      anon_sym_SEMI,
  [1494] = 1,
    ACTIONS(366), 1,
      anon_sym_SEMI,
  [1498] = 1,
    ACTIONS(368), 1,
      anon_sym_SEMI,
  [1502] = 1,
    ACTIONS(370), 1,
      anon_sym_COLON,
  [1506] = 1,
    ACTIONS(372), 1,
      anon_sym_end,
  [1510] = 1,
    ACTIONS(374), 1,
      anon_sym_end,
  [1514] = 1,
    ACTIONS(376), 1,
      anon_sym_end,
  [1518] = 1,
    ACTIONS(378), 1,
      anon_sym_end,
  [1522] = 1,
    ACTIONS(380), 1,
      anon_sym_SEMI,
  [1526] = 1,
    ACTIONS(382), 1,
      anon_sym_SEMI,
  [1530] = 1,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
  [1534] = 1,
    ACTIONS(386), 1,
      sym_identifier,
  [1538] = 1,
    ACTIONS(388), 1,
      sym_identifier,
  [1542] = 1,
    ACTIONS(390), 1,
      anon_sym_begin,
  [1546] = 1,
    ACTIONS(392), 1,
      sym_package_name,
  [1550] = 1,
    ACTIONS(394), 1,
      anon_sym_begin,
  [1554] = 1,
    ACTIONS(396), 1,
      anon_sym_begin,
  [1558] = 1,
    ACTIONS(398), 1,
      anon_sym_is,
  [1562] = 1,
    ACTIONS(400), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 166,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 212,
  [SMALL_STATE(12)] = 235,
  [SMALL_STATE(13)] = 258,
  [SMALL_STATE(14)] = 281,
  [SMALL_STATE(15)] = 304,
  [SMALL_STATE(16)] = 327,
  [SMALL_STATE(17)] = 350,
  [SMALL_STATE(18)] = 373,
  [SMALL_STATE(19)] = 396,
  [SMALL_STATE(20)] = 419,
  [SMALL_STATE(21)] = 442,
  [SMALL_STATE(22)] = 465,
  [SMALL_STATE(23)] = 488,
  [SMALL_STATE(24)] = 511,
  [SMALL_STATE(25)] = 534,
  [SMALL_STATE(26)] = 554,
  [SMALL_STATE(27)] = 572,
  [SMALL_STATE(28)] = 592,
  [SMALL_STATE(29)] = 612,
  [SMALL_STATE(30)] = 632,
  [SMALL_STATE(31)] = 652,
  [SMALL_STATE(32)] = 672,
  [SMALL_STATE(33)] = 690,
  [SMALL_STATE(34)] = 710,
  [SMALL_STATE(35)] = 728,
  [SMALL_STATE(36)] = 748,
  [SMALL_STATE(37)] = 757,
  [SMALL_STATE(38)] = 766,
  [SMALL_STATE(39)] = 775,
  [SMALL_STATE(40)] = 792,
  [SMALL_STATE(41)] = 801,
  [SMALL_STATE(42)] = 810,
  [SMALL_STATE(43)] = 819,
  [SMALL_STATE(44)] = 828,
  [SMALL_STATE(45)] = 837,
  [SMALL_STATE(46)] = 845,
  [SMALL_STATE(47)] = 861,
  [SMALL_STATE(48)] = 869,
  [SMALL_STATE(49)] = 877,
  [SMALL_STATE(50)] = 885,
  [SMALL_STATE(51)] = 893,
  [SMALL_STATE(52)] = 901,
  [SMALL_STATE(53)] = 909,
  [SMALL_STATE(54)] = 917,
  [SMALL_STATE(55)] = 931,
  [SMALL_STATE(56)] = 939,
  [SMALL_STATE(57)] = 947,
  [SMALL_STATE(58)] = 955,
  [SMALL_STATE(59)] = 963,
  [SMALL_STATE(60)] = 975,
  [SMALL_STATE(61)] = 983,
  [SMALL_STATE(62)] = 991,
  [SMALL_STATE(63)] = 999,
  [SMALL_STATE(64)] = 1007,
  [SMALL_STATE(65)] = 1015,
  [SMALL_STATE(66)] = 1023,
  [SMALL_STATE(67)] = 1032,
  [SMALL_STATE(68)] = 1039,
  [SMALL_STATE(69)] = 1049,
  [SMALL_STATE(70)] = 1059,
  [SMALL_STATE(71)] = 1069,
  [SMALL_STATE(72)] = 1075,
  [SMALL_STATE(73)] = 1083,
  [SMALL_STATE(74)] = 1089,
  [SMALL_STATE(75)] = 1095,
  [SMALL_STATE(76)] = 1101,
  [SMALL_STATE(77)] = 1107,
  [SMALL_STATE(78)] = 1117,
  [SMALL_STATE(79)] = 1123,
  [SMALL_STATE(80)] = 1131,
  [SMALL_STATE(81)] = 1137,
  [SMALL_STATE(82)] = 1143,
  [SMALL_STATE(83)] = 1149,
  [SMALL_STATE(84)] = 1155,
  [SMALL_STATE(85)] = 1161,
  [SMALL_STATE(86)] = 1168,
  [SMALL_STATE(87)] = 1175,
  [SMALL_STATE(88)] = 1182,
  [SMALL_STATE(89)] = 1189,
  [SMALL_STATE(90)] = 1196,
  [SMALL_STATE(91)] = 1203,
  [SMALL_STATE(92)] = 1210,
  [SMALL_STATE(93)] = 1217,
  [SMALL_STATE(94)] = 1224,
  [SMALL_STATE(95)] = 1231,
  [SMALL_STATE(96)] = 1238,
  [SMALL_STATE(97)] = 1243,
  [SMALL_STATE(98)] = 1250,
  [SMALL_STATE(99)] = 1257,
  [SMALL_STATE(100)] = 1264,
  [SMALL_STATE(101)] = 1271,
  [SMALL_STATE(102)] = 1278,
  [SMALL_STATE(103)] = 1282,
  [SMALL_STATE(104)] = 1286,
  [SMALL_STATE(105)] = 1290,
  [SMALL_STATE(106)] = 1294,
  [SMALL_STATE(107)] = 1298,
  [SMALL_STATE(108)] = 1302,
  [SMALL_STATE(109)] = 1306,
  [SMALL_STATE(110)] = 1310,
  [SMALL_STATE(111)] = 1314,
  [SMALL_STATE(112)] = 1318,
  [SMALL_STATE(113)] = 1322,
  [SMALL_STATE(114)] = 1326,
  [SMALL_STATE(115)] = 1330,
  [SMALL_STATE(116)] = 1334,
  [SMALL_STATE(117)] = 1338,
  [SMALL_STATE(118)] = 1342,
  [SMALL_STATE(119)] = 1346,
  [SMALL_STATE(120)] = 1350,
  [SMALL_STATE(121)] = 1354,
  [SMALL_STATE(122)] = 1358,
  [SMALL_STATE(123)] = 1362,
  [SMALL_STATE(124)] = 1366,
  [SMALL_STATE(125)] = 1370,
  [SMALL_STATE(126)] = 1374,
  [SMALL_STATE(127)] = 1378,
  [SMALL_STATE(128)] = 1382,
  [SMALL_STATE(129)] = 1386,
  [SMALL_STATE(130)] = 1390,
  [SMALL_STATE(131)] = 1394,
  [SMALL_STATE(132)] = 1398,
  [SMALL_STATE(133)] = 1402,
  [SMALL_STATE(134)] = 1406,
  [SMALL_STATE(135)] = 1410,
  [SMALL_STATE(136)] = 1414,
  [SMALL_STATE(137)] = 1418,
  [SMALL_STATE(138)] = 1422,
  [SMALL_STATE(139)] = 1426,
  [SMALL_STATE(140)] = 1430,
  [SMALL_STATE(141)] = 1434,
  [SMALL_STATE(142)] = 1438,
  [SMALL_STATE(143)] = 1442,
  [SMALL_STATE(144)] = 1446,
  [SMALL_STATE(145)] = 1450,
  [SMALL_STATE(146)] = 1454,
  [SMALL_STATE(147)] = 1458,
  [SMALL_STATE(148)] = 1462,
  [SMALL_STATE(149)] = 1466,
  [SMALL_STATE(150)] = 1470,
  [SMALL_STATE(151)] = 1474,
  [SMALL_STATE(152)] = 1478,
  [SMALL_STATE(153)] = 1482,
  [SMALL_STATE(154)] = 1486,
  [SMALL_STATE(155)] = 1490,
  [SMALL_STATE(156)] = 1494,
  [SMALL_STATE(157)] = 1498,
  [SMALL_STATE(158)] = 1502,
  [SMALL_STATE(159)] = 1506,
  [SMALL_STATE(160)] = 1510,
  [SMALL_STATE(161)] = 1514,
  [SMALL_STATE(162)] = 1518,
  [SMALL_STATE(163)] = 1522,
  [SMALL_STATE(164)] = 1526,
  [SMALL_STATE(165)] = 1530,
  [SMALL_STATE(166)] = 1534,
  [SMALL_STATE(167)] = 1538,
  [SMALL_STATE(168)] = 1542,
  [SMALL_STATE(169)] = 1546,
  [SMALL_STATE(170)] = 1550,
  [SMALL_STATE(171)] = 1554,
  [SMALL_STATE(172)] = 1558,
  [SMALL_STATE(173)] = 1562,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(54),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(39),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(144),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(173),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(112),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 7),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 8),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 9),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 15),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 16),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 17),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 7, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 10, .production_id = 24),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 25),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 11),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 10),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 12),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_clause, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 18),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 19),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 20),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 21),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 22),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 29),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 28),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 27),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, .production_id = 26),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 13),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, .production_id = 23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 7, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 7),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 8),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 9),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 15),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_initialization, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 16),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 17),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 10, .production_id = 24),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 5, .production_id = 14),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 4, .production_id = 6),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_initialization, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_clause, 2, .production_id = 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [384] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
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
