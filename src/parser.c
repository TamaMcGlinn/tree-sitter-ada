#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_with = 1,
  anon_sym_SEMI = 2,
  anon_sym_use = 3,
  anon_sym_procedure = 4,
  anon_sym_is = 5,
  anon_sym_begin = 6,
  anon_sym_end = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COLON = 10,
  anon_sym_COLON_EQ = 11,
  anon_sym_COMMA = 12,
  anon_sym_declare = 13,
  sym_null_statement = 14,
  anon_sym_bool = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_return = 18,
  sym_package_name = 19,
  sym_identifier = 20,
  sym_number = 21,
  sym_source_file = 22,
  sym__definition = 23,
  sym_with_statement = 24,
  sym_use_clause = 25,
  sym_procedure_definition = 26,
  sym__declarations = 27,
  sym_parameter_list = 28,
  sym_variable_declaration = 29,
  sym_variable_initialization = 30,
  sym_expressions = 31,
  sym__expression_statement = 32,
  sym_expression = 33,
  sym_declare_block = 34,
  sym_declaration = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym__declarations_repeat1 = 37,
  aux_sym_expressions_repeat1 = 38,
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
  [anon_sym_return] = "return",
  [sym_package_name] = "package_name",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_with_statement] = "with_statement",
  [sym_use_clause] = "use_clause",
  [sym_procedure_definition] = "procedure_definition",
  [sym__declarations] = "_declarations",
  [sym_parameter_list] = "parameter_list",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_initialization] = "variable_initialization",
  [sym_expressions] = "expressions",
  [sym__expression_statement] = "_expression_statement",
  [sym_expression] = "expression",
  [sym_declare_block] = "declare_block",
  [sym_declaration] = "declaration",
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
  [anon_sym_return] = anon_sym_return,
  [sym_package_name] = sym_package_name,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_with_statement] = sym_with_statement,
  [sym_use_clause] = sym_use_clause,
  [sym_procedure_definition] = sym_procedure_definition,
  [sym__declarations] = sym__declarations,
  [sym_parameter_list] = sym_parameter_list,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_initialization] = sym_variable_initialization,
  [sym_expressions] = sym_expressions,
  [sym__expression_statement] = sym__expression_statement,
  [sym_expression] = sym_expression,
  [sym_declare_block] = sym_declare_block,
  [sym_declaration] = sym_declaration,
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
  [anon_sym_return] = {
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
  [sym_number] = {
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
  [sym_declare_block] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
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
  field_initial_value = 4,
  field_name = 5,
  field_parameter_list = 6,
  field_procedure_body = 7,
  field_type = 8,
  field_variable_name = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_declarations] = "declarations",
  [field_end_name] = "end_name",
  [field_expressions] = "expressions",
  [field_initial_value] = "initial_value",
  [field_name] = "name",
  [field_parameter_list] = "parameter_list",
  [field_procedure_body] = "procedure_body",
  [field_type] = "type",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 2},
  [6] = {.index = 11, .length = 4},
  [7] = {.index = 15, .length = 4},
  [8] = {.index = 19, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 2},
    {field_variable_name, 0},
  [2] =
    {field_initial_value, 3},
    {field_type, 2},
    {field_variable_name, 0},
  [5] =
    {field_expressions, 2},
  [6] =
    {field_end_name, 6},
    {field_name, 1},
    {field_procedure_body, 4},
  [9] =
    {field_declarations, 1},
    {field_expressions, 3},
  [11] =
    {field_declarations, 3},
    {field_end_name, 7},
    {field_name, 1},
    {field_procedure_body, 5},
  [15] =
    {field_end_name, 7},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 5},
  [19] =
    {field_declarations, 4},
    {field_end_name, 8},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_procedure_body, 6},
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
      if (eof) ADVANCE(43);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(21);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_null_statement);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_package_name);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 42},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 42},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 3},
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
    [anon_sym_return] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(91),
    [sym__definition] = STATE(2),
    [sym_with_statement] = STATE(2),
    [sym_use_clause] = STATE(2),
    [sym_procedure_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_with] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_procedure] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_with,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_procedure,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 5,
      sym__definition,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      aux_sym_source_file_repeat1,
  [20] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_with,
    ACTIONS(18), 1,
      anon_sym_use,
    ACTIONS(21), 1,
      anon_sym_procedure,
    STATE(3), 5,
      sym__definition,
      sym_with_statement,
      sym_use_clause,
      sym_procedure_definition,
      aux_sym_source_file_repeat1,
  [40] = 5,
    ACTIONS(24), 1,
      anon_sym_procedure,
    ACTIONS(26), 1,
      anon_sym_begin,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(7), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(40), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [58] = 6,
    ACTIONS(24), 1,
      anon_sym_procedure,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_begin,
    STATE(4), 1,
      sym_declaration,
    STATE(94), 1,
      sym__declarations,
    STATE(40), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [78] = 6,
    ACTIONS(24), 1,
      anon_sym_procedure,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_begin,
    STATE(4), 1,
      sym_declaration,
    STATE(92), 1,
      sym__declarations,
    STATE(40), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [98] = 5,
    ACTIONS(24), 1,
      anon_sym_procedure,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_begin,
    STATE(11), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(40), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [116] = 6,
    ACTIONS(36), 1,
      anon_sym_end,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
    STATE(9), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
  [136] = 6,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    ACTIONS(42), 1,
      anon_sym_end,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
    STATE(12), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
  [156] = 6,
    ACTIONS(24), 1,
      anon_sym_procedure,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(44), 1,
      anon_sym_begin,
    STATE(4), 1,
      sym_declaration,
    STATE(60), 1,
      sym__declarations,
    STATE(40), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [176] = 5,
    ACTIONS(46), 1,
      anon_sym_procedure,
    ACTIONS(49), 1,
      anon_sym_begin,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(11), 2,
      sym_declaration,
      aux_sym__declarations_repeat1,
    STATE(40), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [194] = 6,
    ACTIONS(54), 1,
      anon_sym_end,
    ACTIONS(56), 1,
      anon_sym_declare,
    ACTIONS(59), 1,
      sym_null_statement,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
    STATE(12), 2,
      sym__expression_statement,
      aux_sym_expressions_repeat1,
  [214] = 6,
    ACTIONS(24), 1,
      anon_sym_procedure,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_begin,
    STATE(4), 1,
      sym_declaration,
    STATE(44), 1,
      sym__declarations,
    STATE(40), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [234] = 6,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(8), 1,
      sym__expression_statement,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
    STATE(83), 1,
      sym_expressions,
  [253] = 6,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(8), 1,
      sym__expression_statement,
    STATE(63), 1,
      sym_expression,
    STATE(65), 1,
      sym_expressions,
    STATE(67), 1,
      sym_declare_block,
  [272] = 6,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(8), 1,
      sym__expression_statement,
    STATE(51), 1,
      sym_expressions,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
  [291] = 6,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(8), 1,
      sym__expression_statement,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
    STATE(84), 1,
      sym_expressions,
  [310] = 5,
    ACTIONS(64), 1,
      anon_sym_procedure,
    ACTIONS(66), 1,
      anon_sym_begin,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(55), 1,
      sym_declaration,
    STATE(64), 2,
      sym_procedure_definition,
      sym_variable_declaration,
  [327] = 6,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(8), 1,
      sym__expression_statement,
    STATE(53), 1,
      sym_expressions,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
  [346] = 6,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(8), 1,
      sym__expression_statement,
    STATE(47), 1,
      sym_expressions,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
  [365] = 6,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(8), 1,
      sym__expression_statement,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
    STATE(85), 1,
      sym_expressions,
  [384] = 6,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(8), 1,
      sym__expression_statement,
    STATE(45), 1,
      sym_expressions,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
  [403] = 6,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(8), 1,
      sym__expression_statement,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
    STATE(86), 1,
      sym_expressions,
  [422] = 6,
    ACTIONS(38), 1,
      anon_sym_declare,
    ACTIONS(40), 1,
      sym_null_statement,
    STATE(8), 1,
      sym__expression_statement,
    STATE(46), 1,
      sym_expressions,
    STATE(63), 1,
      sym_expression,
    STATE(67), 1,
      sym_declare_block,
  [441] = 3,
    ACTIONS(72), 1,
      anon_sym_COLON_EQ,
    STATE(39), 1,
      sym_variable_initialization,
    ACTIONS(70), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [453] = 1,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
  [461] = 1,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
  [469] = 1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
  [477] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
      anon_sym_begin,
  [485] = 1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
  [492] = 1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
  [499] = 1,
    ACTIONS(86), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [505] = 1,
    ACTIONS(88), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [511] = 3,
    ACTIONS(90), 1,
      anon_sym_begin,
    ACTIONS(92), 1,
      anon_sym_COLON_EQ,
    STATE(66), 1,
      sym_variable_initialization,
  [521] = 3,
    ACTIONS(94), 1,
      anon_sym_is,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_parameter_list,
  [531] = 1,
    ACTIONS(98), 3,
      anon_sym_end,
      anon_sym_declare,
      sym_null_statement,
  [537] = 3,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_is,
    STATE(96), 1,
      sym_parameter_list,
  [547] = 1,
    ACTIONS(102), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [553] = 1,
    ACTIONS(104), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [559] = 1,
    ACTIONS(106), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [565] = 1,
    ACTIONS(108), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [571] = 1,
    ACTIONS(110), 3,
      anon_sym_procedure,
      anon_sym_begin,
      sym_identifier,
  [577] = 1,
    ACTIONS(112), 1,
      sym_number,
  [581] = 1,
    ACTIONS(114), 1,
      anon_sym_begin,
  [585] = 1,
    ACTIONS(116), 1,
      anon_sym_end,
  [589] = 1,
    ACTIONS(118), 1,
      anon_sym_end,
  [593] = 1,
    ACTIONS(120), 1,
      anon_sym_end,
  [597] = 1,
    ACTIONS(122), 1,
      anon_sym_SEMI,
  [601] = 1,
    ACTIONS(124), 1,
      sym_identifier,
  [605] = 1,
    ACTIONS(126), 1,
      sym_identifier,
  [609] = 1,
    ACTIONS(128), 1,
      anon_sym_end,
  [613] = 1,
    ACTIONS(130), 1,
      anon_sym_SEMI,
  [617] = 1,
    ACTIONS(132), 1,
      anon_sym_end,
  [621] = 1,
    ACTIONS(134), 1,
      sym_package_name,
  [625] = 1,
    ACTIONS(136), 1,
      anon_sym_begin,
  [629] = 1,
    ACTIONS(138), 1,
      anon_sym_SEMI,
  [633] = 1,
    ACTIONS(140), 1,
      anon_sym_SEMI,
  [637] = 1,
    ACTIONS(142), 1,
      sym_identifier,
  [641] = 1,
    ACTIONS(144), 1,
      anon_sym_SEMI,
  [645] = 1,
    ACTIONS(146), 1,
      anon_sym_begin,
  [649] = 1,
    ACTIONS(148), 1,
      sym_identifier,
  [653] = 1,
    ACTIONS(150), 1,
      anon_sym_SEMI,
  [657] = 1,
    ACTIONS(152), 1,
      anon_sym_SEMI,
  [661] = 1,
    ACTIONS(154), 1,
      anon_sym_begin,
  [665] = 1,
    ACTIONS(156), 1,
      anon_sym_end,
  [669] = 1,
    ACTIONS(158), 1,
      anon_sym_begin,
  [673] = 1,
    ACTIONS(160), 1,
      anon_sym_SEMI,
  [677] = 1,
    ACTIONS(162), 1,
      anon_sym_begin,
  [681] = 1,
    ACTIONS(164), 1,
      anon_sym_is,
  [685] = 1,
    ACTIONS(166), 1,
      sym_identifier,
  [689] = 1,
    ACTIONS(168), 1,
      anon_sym_COLON,
  [693] = 1,
    ACTIONS(170), 1,
      sym_identifier,
  [697] = 1,
    ACTIONS(172), 1,
      anon_sym_SEMI,
  [701] = 1,
    ACTIONS(174), 1,
      sym_number,
  [705] = 1,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [709] = 1,
    ACTIONS(178), 1,
      anon_sym_SEMI,
  [713] = 1,
    ACTIONS(180), 1,
      anon_sym_SEMI,
  [717] = 1,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [721] = 1,
    ACTIONS(184), 1,
      sym_identifier,
  [725] = 1,
    ACTIONS(186), 1,
      sym_identifier,
  [729] = 1,
    ACTIONS(188), 1,
      sym_identifier,
  [733] = 1,
    ACTIONS(190), 1,
      sym_identifier,
  [737] = 1,
    ACTIONS(192), 1,
      anon_sym_end,
  [741] = 1,
    ACTIONS(194), 1,
      anon_sym_end,
  [745] = 1,
    ACTIONS(196), 1,
      anon_sym_end,
  [749] = 1,
    ACTIONS(198), 1,
      anon_sym_end,
  [753] = 1,
    ACTIONS(200), 1,
      anon_sym_is,
  [757] = 1,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
  [761] = 1,
    ACTIONS(204), 1,
      anon_sym_SEMI,
  [765] = 1,
    ACTIONS(206), 1,
      anon_sym_SEMI,
  [769] = 1,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [773] = 1,
    ACTIONS(210), 1,
      anon_sym_begin,
  [777] = 1,
    ACTIONS(212), 1,
      sym_identifier,
  [781] = 1,
    ACTIONS(214), 1,
      anon_sym_begin,
  [785] = 1,
    ACTIONS(216), 1,
      sym_package_name,
  [789] = 1,
    ACTIONS(218), 1,
      anon_sym_is,
  [793] = 1,
    ACTIONS(220), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 98,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 253,
  [SMALL_STATE(16)] = 272,
  [SMALL_STATE(17)] = 291,
  [SMALL_STATE(18)] = 310,
  [SMALL_STATE(19)] = 327,
  [SMALL_STATE(20)] = 346,
  [SMALL_STATE(21)] = 365,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 403,
  [SMALL_STATE(24)] = 422,
  [SMALL_STATE(25)] = 441,
  [SMALL_STATE(26)] = 453,
  [SMALL_STATE(27)] = 461,
  [SMALL_STATE(28)] = 469,
  [SMALL_STATE(29)] = 477,
  [SMALL_STATE(30)] = 485,
  [SMALL_STATE(31)] = 492,
  [SMALL_STATE(32)] = 499,
  [SMALL_STATE(33)] = 505,
  [SMALL_STATE(34)] = 511,
  [SMALL_STATE(35)] = 521,
  [SMALL_STATE(36)] = 531,
  [SMALL_STATE(37)] = 537,
  [SMALL_STATE(38)] = 547,
  [SMALL_STATE(39)] = 553,
  [SMALL_STATE(40)] = 559,
  [SMALL_STATE(41)] = 565,
  [SMALL_STATE(42)] = 571,
  [SMALL_STATE(43)] = 577,
  [SMALL_STATE(44)] = 581,
  [SMALL_STATE(45)] = 585,
  [SMALL_STATE(46)] = 589,
  [SMALL_STATE(47)] = 593,
  [SMALL_STATE(48)] = 597,
  [SMALL_STATE(49)] = 601,
  [SMALL_STATE(50)] = 605,
  [SMALL_STATE(51)] = 609,
  [SMALL_STATE(52)] = 613,
  [SMALL_STATE(53)] = 617,
  [SMALL_STATE(54)] = 621,
  [SMALL_STATE(55)] = 625,
  [SMALL_STATE(56)] = 629,
  [SMALL_STATE(57)] = 633,
  [SMALL_STATE(58)] = 637,
  [SMALL_STATE(59)] = 641,
  [SMALL_STATE(60)] = 645,
  [SMALL_STATE(61)] = 649,
  [SMALL_STATE(62)] = 653,
  [SMALL_STATE(63)] = 657,
  [SMALL_STATE(64)] = 661,
  [SMALL_STATE(65)] = 665,
  [SMALL_STATE(66)] = 669,
  [SMALL_STATE(67)] = 673,
  [SMALL_STATE(68)] = 677,
  [SMALL_STATE(69)] = 681,
  [SMALL_STATE(70)] = 685,
  [SMALL_STATE(71)] = 689,
  [SMALL_STATE(72)] = 693,
  [SMALL_STATE(73)] = 697,
  [SMALL_STATE(74)] = 701,
  [SMALL_STATE(75)] = 705,
  [SMALL_STATE(76)] = 709,
  [SMALL_STATE(77)] = 713,
  [SMALL_STATE(78)] = 717,
  [SMALL_STATE(79)] = 721,
  [SMALL_STATE(80)] = 725,
  [SMALL_STATE(81)] = 729,
  [SMALL_STATE(82)] = 733,
  [SMALL_STATE(83)] = 737,
  [SMALL_STATE(84)] = 741,
  [SMALL_STATE(85)] = 745,
  [SMALL_STATE(86)] = 749,
  [SMALL_STATE(87)] = 753,
  [SMALL_STATE(88)] = 757,
  [SMALL_STATE(89)] = 761,
  [SMALL_STATE(90)] = 765,
  [SMALL_STATE(91)] = 769,
  [SMALL_STATE(92)] = 773,
  [SMALL_STATE(93)] = 777,
  [SMALL_STATE(94)] = 781,
  [SMALL_STATE(95)] = 785,
  [SMALL_STATE(96)] = 789,
  [SMALL_STATE(97)] = 793,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(97),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(71),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2), SHIFT_REPEAT(67),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 8, .production_id = 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 10, .production_id = 8),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 7),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 9, .production_id = 6),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_clause, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 8, .production_id = 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_initialization, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 9, .production_id = 7),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 10, .production_id = 8),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 4, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_block, 5, .production_id = 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_initialization, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
