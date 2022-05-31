#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

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
  anon_sym_bool = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_return = 13,
  sym_package_name = 14,
  sym_identifier = 15,
  sym_number = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym_with_statement = 19,
  sym_use_clause = 20,
  sym_procedure_definition = 21,
  aux_sym_source_file_repeat1 = 22,
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      if (eof) ADVANCE(30);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(1);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_package_name);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
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
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
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
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
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
  [40] = 1,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
  [47] = 1,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
  [54] = 1,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      anon_sym_with,
      anon_sym_use,
      anon_sym_procedure,
  [61] = 1,
    ACTIONS(30), 1,
      sym_package_name,
  [65] = 1,
    ACTIONS(32), 1,
      sym_package_name,
  [69] = 1,
    ACTIONS(34), 1,
      sym_identifier,
  [73] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
  [77] = 1,
    ACTIONS(38), 1,
      anon_sym_SEMI,
  [81] = 1,
    ACTIONS(40), 1,
      anon_sym_SEMI,
  [85] = 1,
    ACTIONS(42), 1,
      anon_sym_is,
  [89] = 1,
    ACTIONS(44), 1,
      anon_sym_begin,
  [93] = 1,
    ACTIONS(46), 1,
      anon_sym_end,
  [97] = 1,
    ACTIONS(48), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 61,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 69,
  [SMALL_STATE(10)] = 73,
  [SMALL_STATE(11)] = 77,
  [SMALL_STATE(12)] = 81,
  [SMALL_STATE(13)] = 85,
  [SMALL_STATE(14)] = 89,
  [SMALL_STATE(15)] = 93,
  [SMALL_STATE(16)] = 97,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_clause, 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 6),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [36] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
