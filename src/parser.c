#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_def = 3,
  sym_identifier = 4,
  sym_int = 5,
  sym_float = 6,
  sym_str = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_LT = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_GT = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_or = 20,
  anon_sym_and = 21,
  anon_sym_CARET = 22,
  anon_sym_not = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  sym_source_file = 26,
  sym_statement = 27,
  sym__inner_statement = 28,
  sym_def = 29,
  sym_primitive = 30,
  sym_bool = 31,
  sym__binary_inner_expression = 32,
  sym_binary_expression = 33,
  sym_unary_expression = 34,
  sym_expression = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_expression_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_def] = "def",
  [sym_identifier] = "identifier",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_str] = "str",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_CARET] = "^",
  [anon_sym_not] = "not",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym__inner_statement] = "_inner_statement",
  [sym_def] = "def",
  [sym_primitive] = "primitive",
  [sym_bool] = "bool",
  [sym__binary_inner_expression] = "_binary_inner_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_def] = anon_sym_def,
  [sym_identifier] = sym_identifier,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_str] = sym_str,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym__inner_statement] = sym__inner_statement,
  [sym_def] = sym_def,
  [sym_primitive] = sym_primitive,
  [sym_bool] = sym_bool,
  [sym__binary_inner_expression] = sym__binary_inner_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_expression] = sym_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym__binary_inner_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
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
      if (eof) ADVANCE(24);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
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
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym_statement] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
  [2] = {
    [anon_sym_RBRACK] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_int] = ACTIONS(9),
    [sym_float] = ACTIONS(7),
    [sym_str] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_EQ] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_GT_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_BANG_EQ] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(9),
    [anon_sym_and] = ACTIONS(9),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
  },
  [3] = {
    [anon_sym_RBRACK] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_int] = ACTIONS(13),
    [sym_float] = ACTIONS(11),
    [sym_str] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
  },
  [4] = {
    [anon_sym_RBRACK] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_int] = ACTIONS(17),
    [sym_float] = ACTIONS(15),
    [sym_str] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_BANG_EQ] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
  },
  [5] = {
    [anon_sym_RBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_int] = ACTIONS(21),
    [sym_float] = ACTIONS(19),
    [sym_str] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
  },
  [6] = {
    [sym_identifier] = ACTIONS(23),
    [sym_int] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [sym_str] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_int,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_primitive,
    STATE(4), 1,
      sym_bool,
    STATE(6), 1,
      sym_expression,
    STATE(30), 1,
      sym__binary_inner_expression,
    STATE(32), 1,
      aux_sym_expression_repeat1,
    ACTIONS(35), 2,
      sym_float,
      sym_str,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_not,
    STATE(20), 2,
      sym_binary_expression,
      sym_unary_expression,
  [44] = 13,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_int,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_primitive,
    STATE(4), 1,
      sym_bool,
    STATE(6), 1,
      sym_expression,
    STATE(30), 1,
      sym__binary_inner_expression,
    STATE(33), 1,
      aux_sym_expression_repeat1,
    ACTIONS(35), 2,
      sym_float,
      sym_str,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_not,
    STATE(21), 2,
      sym_binary_expression,
      sym_unary_expression,
  [88] = 13,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_int,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_primitive,
    STATE(4), 1,
      sym_bool,
    STATE(6), 1,
      sym_expression,
    STATE(30), 1,
      sym__binary_inner_expression,
    STATE(31), 1,
      aux_sym_expression_repeat1,
    ACTIONS(35), 2,
      sym_float,
      sym_str,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_not,
    STATE(18), 2,
      sym_binary_expression,
      sym_unary_expression,
  [132] = 10,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_int,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_primitive,
    STATE(23), 1,
      sym_bool,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(49), 2,
      sym_float,
      sym_str,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym__binary_inner_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_expression,
  [169] = 10,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_int,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_primitive,
    STATE(23), 1,
      sym_bool,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(49), 2,
      sym_float,
      sym_str,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym__binary_inner_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_expression,
  [206] = 10,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_int,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_primitive,
    STATE(23), 1,
      sym_bool,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(49), 2,
      sym_float,
      sym_str,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 4,
      sym__binary_inner_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_expression,
  [243] = 10,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_int,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_primitive,
    STATE(23), 1,
      sym_bool,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(49), 2,
      sym_float,
      sym_str,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 4,
      sym__binary_inner_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_expression,
  [280] = 10,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_int,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_primitive,
    STATE(23), 1,
      sym_bool,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(49), 2,
      sym_float,
      sym_str,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym__binary_inner_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_expression,
  [317] = 10,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_int,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_primitive,
    STATE(23), 1,
      sym_bool,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(49), 2,
      sym_float,
      sym_str,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 4,
      sym__binary_inner_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_expression,
  [354] = 2,
    ACTIONS(13), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [373] = 2,
    ACTIONS(9), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [392] = 3,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_CARET,
  [413] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [432] = 3,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_CARET,
  [453] = 3,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_CARET,
  [474] = 2,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [493] = 2,
    ACTIONS(17), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [512] = 4,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [535] = 3,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [556] = 5,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 7,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [581] = 7,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(79), 1,
      anon_sym_and,
    ACTIONS(65), 2,
      anon_sym_or,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [610] = 6,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
    ACTIONS(77), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [637] = 3,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [658] = 7,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(79), 1,
      anon_sym_and,
    ACTIONS(81), 1,
      anon_sym_or,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [686] = 9,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym_int,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_primitive,
    STATE(38), 1,
      sym_bool,
    ACTIONS(87), 2,
      sym_float,
      sym_str,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_expression,
      aux_sym_expression_repeat1,
  [717] = 9,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym_int,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_primitive,
    STATE(38), 1,
      sym_bool,
    ACTIONS(87), 2,
      sym_float,
      sym_str,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_expression,
      aux_sym_expression_repeat1,
  [748] = 9,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym_int,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_primitive,
    STATE(38), 1,
      sym_bool,
    ACTIONS(87), 2,
      sym_float,
      sym_str,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_expression,
      aux_sym_expression_repeat1,
  [779] = 9,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(96), 1,
      sym_int,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_primitive,
    STATE(38), 1,
      sym_bool,
    ACTIONS(99), 2,
      sym_float,
      sym_str,
    ACTIONS(102), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_expression,
      aux_sym_expression_repeat1,
  [810] = 8,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_int,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_primitive,
    STATE(4), 1,
      sym_bool,
    STATE(47), 1,
      sym_expression,
    ACTIONS(35), 2,
      sym_float,
      sym_str,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
  [837] = 8,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_int,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_primitive,
    STATE(19), 1,
      sym_expression,
    STATE(23), 1,
      sym_bool,
    ACTIONS(49), 2,
      sym_float,
      sym_str,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
  [864] = 2,
    ACTIONS(7), 4,
      sym_float,
      sym_str,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(9), 4,
      sym_identifier,
      sym_int,
      anon_sym_true,
      anon_sym_false,
  [877] = 2,
    ACTIONS(15), 4,
      sym_float,
      sym_str,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(17), 4,
      sym_identifier,
      sym_int,
      anon_sym_true,
      anon_sym_false,
  [890] = 2,
    ACTIONS(19), 4,
      sym_float,
      sym_str,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(21), 4,
      sym_identifier,
      sym_int,
      anon_sym_true,
      anon_sym_false,
  [903] = 2,
    ACTIONS(11), 4,
      sym_float,
      sym_str,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(13), 4,
      sym_identifier,
      sym_int,
      anon_sym_true,
      anon_sym_false,
  [916] = 3,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    STATE(41), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [927] = 3,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(41), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [938] = 2,
    ACTIONS(117), 1,
      anon_sym_def,
    STATE(45), 2,
      sym__inner_statement,
      sym_def,
  [946] = 1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [951] = 1,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
  [955] = 1,
    ACTIONS(123), 1,
      sym_identifier,
  [959] = 1,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
  [963] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 206,
  [SMALL_STATE(13)] = 243,
  [SMALL_STATE(14)] = 280,
  [SMALL_STATE(15)] = 317,
  [SMALL_STATE(16)] = 354,
  [SMALL_STATE(17)] = 373,
  [SMALL_STATE(18)] = 392,
  [SMALL_STATE(19)] = 413,
  [SMALL_STATE(20)] = 432,
  [SMALL_STATE(21)] = 453,
  [SMALL_STATE(22)] = 474,
  [SMALL_STATE(23)] = 493,
  [SMALL_STATE(24)] = 512,
  [SMALL_STATE(25)] = 535,
  [SMALL_STATE(26)] = 556,
  [SMALL_STATE(27)] = 581,
  [SMALL_STATE(28)] = 610,
  [SMALL_STATE(29)] = 637,
  [SMALL_STATE(30)] = 658,
  [SMALL_STATE(31)] = 686,
  [SMALL_STATE(32)] = 717,
  [SMALL_STATE(33)] = 748,
  [SMALL_STATE(34)] = 779,
  [SMALL_STATE(35)] = 810,
  [SMALL_STATE(36)] = 837,
  [SMALL_STATE(37)] = 864,
  [SMALL_STATE(38)] = 877,
  [SMALL_STATE(39)] = 890,
  [SMALL_STATE(40)] = 903,
  [SMALL_STATE(41)] = 916,
  [SMALL_STATE(42)] = 927,
  [SMALL_STATE(43)] = 938,
  [SMALL_STATE(44)] = 946,
  [SMALL_STATE(45)] = 951,
  [SMALL_STATE(46)] = 955,
  [SMALL_STATE(47)] = 959,
  [SMALL_STATE(48)] = 963,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary_inner_expression, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_inner_expression, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(37),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(38),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(38),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(39),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(7),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_saft(void) {
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
