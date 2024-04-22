#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_ident = 1,
  anon_sym_POUND_DASH_DASH = 2,
  anon_sym_POUND = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_COLON = 5,
  anon_sym_key = 6,
  anon_sym_name = 7,
  anon_sym_condition = 8,
  anon_sym_contributor = 9,
  anon_sym_binding = 10,
  anon_sym_expand_DASHenv = 11,
  anon_sym_uuid = 12,
  anon_sym_group = 13,
  anon_sym_type = 14,
  sym_value = 15,
  anon_sym_DOLLAR = 16,
  anon_sym_DOLLAR_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_COLON2 = 19,
  anon_sym_DOLLAR_LPAREN = 20,
  anon_sym_RPAREN = 21,
  aux_sym__expression_token1 = 22,
  anon_sym_LPAREN = 23,
  sym_escape_sequence = 24,
  aux_sym_string_content_token1 = 25,
  anon_sym_DQUOTE = 26,
  anon_sym_DQUOTE2 = 27,
  sym_number = 28,
  aux_sym_text_token1 = 29,
  sym_source_file = 30,
  sym_header = 31,
  sym_comment = 32,
  sym_directive = 33,
  sym_key = 34,
  sym_snippet = 35,
  sym_field = 36,
  sym__simple_field = 37,
  sym__field = 38,
  sym_mirror = 39,
  sym__expression = 40,
  sym_parenthesized_expression = 41,
  sym_code = 42,
  sym_string_content = 43,
  sym_string = 44,
  sym_text = 45,
  aux_sym_header_repeat1 = 46,
  aux_sym_comment_repeat1 = 47,
  aux_sym_snippet_repeat1 = 48,
  aux_sym_code_repeat1 = 49,
  aux_sym_string_content_repeat1 = 50,
  aux_sym_string_repeat1 = 51,
  aux_sym_text_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [anon_sym_POUND_DASH_DASH] = "header_end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_key] = "key",
  [anon_sym_name] = "name",
  [anon_sym_condition] = "condition",
  [anon_sym_contributor] = "contributor",
  [anon_sym_binding] = "binding",
  [anon_sym_expand_DASHenv] = "expand-env",
  [anon_sym_uuid] = "uuid",
  [anon_sym_group] = "group",
  [anon_sym_type] = "type",
  [sym_value] = "value",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON2] = ":",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__expression_token1] = "text",
  [anon_sym_LPAREN] = "(",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_string_content_token1] = "string_content_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym_number] = "number",
  [aux_sym_text_token1] = "text_token1",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_key] = "key",
  [sym_snippet] = "snippet",
  [sym_field] = "field",
  [sym__simple_field] = "_simple_field",
  [sym__field] = "_field",
  [sym_mirror] = "mirror",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_code] = "code",
  [sym_string_content] = "string_content",
  [sym_string] = "string",
  [sym_text] = "text",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_snippet_repeat1] = "snippet_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [anon_sym_POUND_DASH_DASH] = anon_sym_POUND_DASH_DASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_condition] = anon_sym_condition,
  [anon_sym_contributor] = anon_sym_contributor,
  [anon_sym_binding] = anon_sym_binding,
  [anon_sym_expand_DASHenv] = anon_sym_expand_DASHenv,
  [anon_sym_uuid] = anon_sym_uuid,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_type] = anon_sym_type,
  [sym_value] = sym_value,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__expression_token1] = sym_text,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_number] = sym_number,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_key] = sym_key,
  [sym_snippet] = sym_snippet,
  [sym_field] = sym_field,
  [sym__simple_field] = sym__simple_field,
  [sym__field] = sym__field,
  [sym_mirror] = sym_mirror,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_code] = sym_code,
  [sym_string_content] = sym_string_content,
  [sym_string] = sym_string,
  [sym_text] = sym_text,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_snippet_repeat1] = aux_sym_snippet_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_DASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contributor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expand_DASHenv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_snippet] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_field] = {
    .visible = false,
    .named = true,
  },
  [sym__field] = {
    .visible = false,
    .named = true,
  },
  [sym_mirror] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_snippet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_index = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_index] = "index",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_index, 0, .inherited = true},
  [1] =
    {field_index, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 7,
  [10] = 10,
  [11] = 7,
  [12] = 6,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 22,
  [37] = 26,
  [38] = 33,
  [39] = 18,
  [40] = 19,
  [41] = 24,
  [42] = 42,
  [43] = 43,
  [44] = 23,
  [45] = 25,
  [46] = 46,
  [47] = 16,
  [48] = 14,
  [49] = 25,
  [50] = 50,
  [51] = 23,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 46,
  [59] = 59,
  [60] = 60,
  [61] = 53,
  [62] = 62,
  [63] = 54,
  [64] = 64,
  [65] = 62,
  [66] = 56,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '"', 45,
        '#', 22,
        '$', 30,
        '(', 39,
        ')', 36,
        ':', 34,
        '\\', 9,
        '}', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '#') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == ':') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 16:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == ':') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND_DASH_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(23);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '{') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '(' ||
          lookahead == '{') ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '$') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'b', 1,
        'c', 2,
        'e', 3,
        'g', 4,
        'k', 5,
        'n', 6,
        't', 7,
        'u', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_binding);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_expand_DASHenv);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_contributor);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_POUND_DASH_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_contributor] = ACTIONS(1),
    [anon_sym_binding] = ACTIONS(1),
    [anon_sym_expand_DASHenv] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(68),
    [sym_header] = STATE(2),
    [sym_comment] = STATE(34),
    [sym_directive] = STATE(34),
    [aux_sym_header_repeat1] = STATE(34),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(11), 1,
      sym_escape_sequence,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_text_token1,
    STATE(14), 1,
      aux_sym_text_repeat1,
    STATE(18), 1,
      sym__simple_field,
    STATE(19), 1,
      sym__field,
    STATE(57), 1,
      sym_snippet,
    STATE(3), 5,
      sym_field,
      sym_mirror,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [41] = 11,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_text_token1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(23), 1,
      sym_number,
    STATE(14), 1,
      aux_sym_text_repeat1,
    STATE(18), 1,
      sym__simple_field,
    STATE(19), 1,
      sym__field,
    STATE(4), 5,
      sym_field,
      sym_mirror,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [79] = 11,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(30), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      sym_escape_sequence,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(42), 1,
      aux_sym_text_token1,
    STATE(14), 1,
      aux_sym_text_repeat1,
    STATE(18), 1,
      sym__simple_field,
    STATE(19), 1,
      sym__field,
    STATE(4), 5,
      sym_field,
      sym_mirror,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [117] = 5,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      aux_sym_comment_repeat1,
    STATE(64), 1,
      sym_key,
    ACTIONS(45), 2,
      anon_sym_POUND_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(49), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [142] = 9,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      sym_escape_sequence,
    ACTIONS(57), 1,
      aux_sym_string_content_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE2,
    STATE(31), 1,
      aux_sym_string_content_repeat1,
    STATE(39), 1,
      sym__simple_field,
    STATE(40), 1,
      sym__field,
    STATE(10), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [172] = 9,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      aux_sym_string_content_token1,
    ACTIONS(61), 1,
      sym_escape_sequence,
    ACTIONS(63), 1,
      anon_sym_DQUOTE2,
    STATE(31), 1,
      aux_sym_string_content_repeat1,
    STATE(39), 1,
      sym__simple_field,
    STATE(40), 1,
      sym__field,
    STATE(6), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [202] = 9,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      sym_escape_sequence,
    ACTIONS(57), 1,
      aux_sym_string_content_token1,
    ACTIONS(65), 1,
      anon_sym_DQUOTE2,
    STATE(31), 1,
      aux_sym_string_content_repeat1,
    STATE(39), 1,
      sym__simple_field,
    STATE(40), 1,
      sym__field,
    STATE(10), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [232] = 9,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      aux_sym_string_content_token1,
    ACTIONS(67), 1,
      sym_escape_sequence,
    ACTIONS(69), 1,
      anon_sym_DQUOTE2,
    STATE(31), 1,
      aux_sym_string_content_repeat1,
    STATE(39), 1,
      sym__simple_field,
    STATE(40), 1,
      sym__field,
    STATE(8), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [262] = 9,
    ACTIONS(71), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(77), 1,
      sym_escape_sequence,
    ACTIONS(80), 1,
      aux_sym_string_content_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE2,
    STATE(31), 1,
      aux_sym_string_content_repeat1,
    STATE(39), 1,
      sym__simple_field,
    STATE(40), 1,
      sym__field,
    STATE(10), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [292] = 9,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      aux_sym_string_content_token1,
    ACTIONS(85), 1,
      sym_escape_sequence,
    ACTIONS(87), 1,
      anon_sym_DQUOTE2,
    STATE(31), 1,
      aux_sym_string_content_repeat1,
    STATE(39), 1,
      sym__simple_field,
    STATE(40), 1,
      sym__field,
    STATE(12), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [322] = 9,
    ACTIONS(51), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      sym_escape_sequence,
    ACTIONS(57), 1,
      aux_sym_string_content_token1,
    ACTIONS(89), 1,
      anon_sym_DQUOTE2,
    STATE(31), 1,
      aux_sym_string_content_repeat1,
    STATE(39), 1,
      sym__simple_field,
    STATE(40), 1,
      sym__field,
    STATE(10), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [352] = 5,
    ACTIONS(91), 1,
      aux_sym__expression_token1,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_code,
    STATE(15), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      aux_sym_code_repeat1,
  [371] = 4,
    ACTIONS(101), 1,
      aux_sym_text_token1,
    STATE(16), 1,
      aux_sym_text_repeat1,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(99), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
  [388] = 5,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      aux_sym__expression_token1,
    STATE(17), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      aux_sym_code_repeat1,
  [407] = 4,
    ACTIONS(111), 1,
      aux_sym_text_token1,
    STATE(16), 1,
      aux_sym_text_repeat1,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(109), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
  [424] = 5,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    ACTIONS(116), 1,
      aux_sym__expression_token1,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    STATE(17), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      aux_sym_code_repeat1,
  [443] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(127), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [455] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(127), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [467] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(131), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [479] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(135), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [491] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(139), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [503] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(143), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [515] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(147), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [527] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(151), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [539] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(155), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [551] = 4,
    ACTIONS(161), 1,
      aux_sym_string_content_token1,
    STATE(27), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(157), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(159), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
  [566] = 4,
    ACTIONS(164), 1,
      aux_sym__expression_token1,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    STATE(56), 3,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
  [581] = 4,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      aux_sym__expression_token1,
    STATE(66), 3,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
  [596] = 5,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      sym_number,
    ACTIONS(174), 1,
      aux_sym_text_token1,
    STATE(48), 1,
      aux_sym_text_repeat1,
    STATE(63), 2,
      sym_string,
      sym_text,
  [613] = 4,
    ACTIONS(180), 1,
      aux_sym_string_content_token1,
    STATE(27), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(176), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(178), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
  [628] = 5,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      aux_sym_text_token1,
    ACTIONS(182), 1,
      sym_number,
    STATE(48), 1,
      aux_sym_text_repeat1,
    STATE(54), 2,
      sym_string,
      sym_text,
  [645] = 4,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      aux_sym_text_token1,
    STATE(48), 1,
      aux_sym_text_repeat1,
    STATE(65), 2,
      sym_string,
      sym_text,
  [659] = 3,
    ACTIONS(184), 1,
      anon_sym_POUND_DASH_DASH,
    ACTIONS(186), 1,
      anon_sym_POUND,
    STATE(35), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [671] = 3,
    ACTIONS(188), 1,
      anon_sym_POUND_DASH_DASH,
    ACTIONS(190), 1,
      anon_sym_POUND,
    STATE(35), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [683] = 2,
    ACTIONS(137), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(139), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [693] = 2,
    ACTIONS(153), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(155), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [703] = 4,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      aux_sym_text_token1,
    STATE(48), 1,
      aux_sym_text_repeat1,
    STATE(62), 2,
      sym_string,
      sym_text,
  [717] = 2,
    ACTIONS(125), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(127), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [727] = 2,
    ACTIONS(125), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(127), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [737] = 2,
    ACTIONS(145), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(147), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [747] = 3,
    ACTIONS(195), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      aux_sym_comment_repeat1,
    ACTIONS(193), 2,
      anon_sym_POUND_DASH_DASH,
      anon_sym_POUND,
  [758] = 3,
    ACTIONS(199), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      aux_sym_comment_repeat1,
    ACTIONS(197), 2,
      anon_sym_POUND_DASH_DASH,
      anon_sym_POUND,
  [769] = 2,
    ACTIONS(141), 1,
      aux_sym__expression_token1,
    ACTIONS(143), 3,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [778] = 2,
    ACTIONS(149), 1,
      aux_sym__expression_token1,
    ACTIONS(151), 3,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [787] = 2,
    ACTIONS(204), 1,
      aux_sym__expression_token1,
    ACTIONS(202), 3,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [796] = 3,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      aux_sym_text_token1,
    STATE(47), 1,
      aux_sym_text_repeat1,
  [806] = 3,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 1,
      aux_sym_text_token1,
    STATE(47), 1,
      aux_sym_text_repeat1,
  [816] = 1,
    ACTIONS(149), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [821] = 2,
    ACTIONS(211), 1,
      anon_sym_POUND_DASH_DASH,
    ACTIONS(213), 1,
      anon_sym_POUND,
  [828] = 1,
    ACTIONS(141), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [833] = 2,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(217), 1,
      anon_sym_COLON2,
  [840] = 1,
    ACTIONS(219), 1,
      sym_number,
  [844] = 1,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
  [848] = 1,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
  [852] = 1,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
  [856] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [860] = 1,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
  [864] = 1,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
  [868] = 1,
    ACTIONS(231), 1,
      sym_value,
  [872] = 1,
    ACTIONS(233), 1,
      sym_number,
  [876] = 1,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
  [880] = 1,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
  [884] = 1,
    ACTIONS(239), 1,
      anon_sym_COLON,
  [888] = 1,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
  [892] = 1,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
  [896] = 1,
    ACTIONS(245), 1,
      anon_sym_COLON,
  [900] = 1,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
  [904] = 1,
    ACTIONS(249), 1,
      anon_sym_COLON,
  [908] = 1,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 232,
  [SMALL_STATE(10)] = 262,
  [SMALL_STATE(11)] = 292,
  [SMALL_STATE(12)] = 322,
  [SMALL_STATE(13)] = 352,
  [SMALL_STATE(14)] = 371,
  [SMALL_STATE(15)] = 388,
  [SMALL_STATE(16)] = 407,
  [SMALL_STATE(17)] = 424,
  [SMALL_STATE(18)] = 443,
  [SMALL_STATE(19)] = 455,
  [SMALL_STATE(20)] = 467,
  [SMALL_STATE(21)] = 479,
  [SMALL_STATE(22)] = 491,
  [SMALL_STATE(23)] = 503,
  [SMALL_STATE(24)] = 515,
  [SMALL_STATE(25)] = 527,
  [SMALL_STATE(26)] = 539,
  [SMALL_STATE(27)] = 551,
  [SMALL_STATE(28)] = 566,
  [SMALL_STATE(29)] = 581,
  [SMALL_STATE(30)] = 596,
  [SMALL_STATE(31)] = 613,
  [SMALL_STATE(32)] = 628,
  [SMALL_STATE(33)] = 645,
  [SMALL_STATE(34)] = 659,
  [SMALL_STATE(35)] = 671,
  [SMALL_STATE(36)] = 683,
  [SMALL_STATE(37)] = 693,
  [SMALL_STATE(38)] = 703,
  [SMALL_STATE(39)] = 717,
  [SMALL_STATE(40)] = 727,
  [SMALL_STATE(41)] = 737,
  [SMALL_STATE(42)] = 747,
  [SMALL_STATE(43)] = 758,
  [SMALL_STATE(44)] = 769,
  [SMALL_STATE(45)] = 778,
  [SMALL_STATE(46)] = 787,
  [SMALL_STATE(47)] = 796,
  [SMALL_STATE(48)] = 806,
  [SMALL_STATE(49)] = 816,
  [SMALL_STATE(50)] = 821,
  [SMALL_STATE(51)] = 828,
  [SMALL_STATE(52)] = 833,
  [SMALL_STATE(53)] = 840,
  [SMALL_STATE(54)] = 844,
  [SMALL_STATE(55)] = 848,
  [SMALL_STATE(56)] = 852,
  [SMALL_STATE(57)] = 856,
  [SMALL_STATE(58)] = 860,
  [SMALL_STATE(59)] = 864,
  [SMALL_STATE(60)] = 868,
  [SMALL_STATE(61)] = 872,
  [SMALL_STATE(62)] = 876,
  [SMALL_STATE(63)] = 880,
  [SMALL_STATE(64)] = 884,
  [SMALL_STATE(65)] = 888,
  [SMALL_STATE(66)] = 892,
  [SMALL_STATE(67)] = 896,
  [SMALL_STATE(68)] = 900,
  [SMALL_STATE(69)] = 904,
  [SMALL_STATE(70)] = 908,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 7, 0, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 7, 0, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 5, 0, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 5, 0, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_field, 2, 0, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_field, 2, 0, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_yasnippet(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_ident,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
