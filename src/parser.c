#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_DOLLAR = 18,
  anon_sym_DOLLAR_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_DOLLAR_LPAREN = 21,
  sym_escape_sequence = 22,
  aux_sym_string_content_token1 = 23,
  anon_sym_DQUOTE = 24,
  anon_sym_DQUOTE2 = 25,
  sym_number = 26,
  aux_sym_text_token1 = 27,
  sym_source_file = 28,
  sym_header = 29,
  sym_comment = 30,
  sym_directive = 31,
  sym_key = 32,
  sym_snippet = 33,
  sym__expression = 34,
  sym_parenthesized_expression = 35,
  sym_field = 36,
  sym__simple_field = 37,
  sym__field = 38,
  sym_mirror = 39,
  sym_string_content = 40,
  sym_string = 41,
  sym_text = 42,
  aux_sym_header_repeat1 = 43,
  aux_sym_comment_repeat1 = 44,
  aux_sym_snippet_repeat1 = 45,
  aux_sym_parenthesized_expression_repeat1 = 46,
  aux_sym_string_content_repeat1 = 47,
  aux_sym_string_repeat1 = 48,
  aux_sym_text_repeat1 = 49,
  alias_sym_elisp_code = 50,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR_LPAREN] = "$(",
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
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_field] = "field",
  [sym__simple_field] = "_simple_field",
  [sym__field] = "_field",
  [sym_mirror] = "mirror",
  [sym_string_content] = "string_content",
  [sym_string] = "string",
  [sym_text] = "text",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_snippet_repeat1] = "snippet_repeat1",
  [aux_sym_parenthesized_expression_repeat1] = "parenthesized_expression_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [alias_sym_elisp_code] = "elisp_code",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
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
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_field] = sym_field,
  [sym__simple_field] = sym__simple_field,
  [sym__field] = sym__field,
  [sym_mirror] = sym_mirror,
  [sym_string_content] = sym_string_content,
  [sym_string] = sym_string,
  [sym_text] = sym_text,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_snippet_repeat1] = aux_sym_snippet_repeat1,
  [aux_sym_parenthesized_expression_repeat1] = aux_sym_parenthesized_expression_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [alias_sym_elisp_code] = alias_sym_elisp_code,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DOLLAR_LPAREN] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
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
  [aux_sym_parenthesized_expression_repeat1] = {
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
  [alias_sym_elisp_code] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_code = 1,
  field_index = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_code] = "code",
  [field_index] = "index",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 4},
  [5] = {.index = 9, .length = 3},
  [6] = {.index = 12, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_index, 0, .inherited = true},
  [1] =
    {field_index, 1},
  [2] =
    {field_code, 3},
    {field_code, 4},
    {field_index, 1},
  [5] =
    {field_code, 3},
    {field_code, 4},
    {field_code, 5},
    {field_index, 1},
  [9] =
    {field_code, 4},
    {field_code, 5},
    {field_index, 1},
  [12] =
    {field_code, 4},
    {field_code, 5},
    {field_code, 6},
    {field_index, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [4] = alias_sym_elisp_code,
  },
  [6] = {
    [5] = alias_sym_elisp_code,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_parenthesized_expression_repeat1, 2,
    aux_sym_parenthesized_expression_repeat1,
    alias_sym_elisp_code,
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 12,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 24,
  [30] = 30,
  [31] = 24,
  [32] = 32,
  [33] = 14,
  [34] = 34,
  [35] = 35,
  [36] = 32,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 40,
  [62] = 39,
  [63] = 63,
  [64] = 40,
  [65] = 39,
  [66] = 43,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 48,
  [71] = 49,
  [72] = 55,
  [73] = 53,
  [74] = 57,
  [75] = 41,
  [76] = 76,
  [77] = 53,
  [78] = 76,
  [79] = 69,
  [80] = 45,
  [81] = 67,
  [82] = 48,
  [83] = 83,
  [84] = 50,
  [85] = 51,
  [86] = 43,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 93,
  [97] = 97,
  [98] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 40,
        '#', 20,
        '$', 30,
        '(', 28,
        ')', 29,
        ':', 25,
        '\\', 10,
        '}', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '#') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 14:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '}') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_POUND_DASH_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(34);
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
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '(' ||
          lookahead == '{') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '$') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(35);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '(') ADVANCE(34);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
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
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym_header] = STATE(2),
    [sym_comment] = STATE(68),
    [sym_directive] = STATE(68),
    [aux_sym_header_repeat1] = STATE(68),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      sym_escape_sequence,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    STATE(40), 1,
      aux_sym_text_repeat1,
    STATE(49), 1,
      sym__simple_field,
    STATE(55), 1,
      sym__field,
    STATE(94), 1,
      sym_snippet,
    STATE(4), 5,
      sym_field,
      sym_mirror,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [44] = 12,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(26), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(32), 1,
      sym_escape_sequence,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      sym_number,
    ACTIONS(41), 1,
      aux_sym_text_token1,
    STATE(40), 1,
      aux_sym_text_repeat1,
    STATE(49), 1,
      sym__simple_field,
    STATE(55), 1,
      sym__field,
    STATE(3), 5,
      sym_field,
      sym_mirror,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [85] = 12,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_escape_sequence,
    ACTIONS(48), 1,
      sym_number,
    STATE(40), 1,
      aux_sym_text_repeat1,
    STATE(49), 1,
      sym__simple_field,
    STATE(55), 1,
      sym__field,
    STATE(3), 5,
      sym_field,
      sym_mirror,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [126] = 5,
    ACTIONS(52), 1,
      aux_sym_comment_token1,
    STATE(88), 1,
      aux_sym_comment_repeat1,
    STATE(97), 1,
      sym_key,
    ACTIONS(50), 2,
      anon_sym_POUND_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(54), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [151] = 9,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      sym_number,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    STATE(27), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [182] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_text_token1,
    STATE(38), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(64), 1,
      aux_sym_text_repeat1,
    STATE(76), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [213] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_text_token1,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(64), 1,
      aux_sym_text_repeat1,
    STATE(76), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [244] = 9,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      sym_number,
    STATE(28), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [275] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_text_token1,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(64), 1,
      aux_sym_text_repeat1,
    STATE(76), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [303] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [331] = 9,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(94), 1,
      sym_escape_sequence,
    ACTIONS(96), 1,
      aux_sym_string_content_token1,
    ACTIONS(98), 1,
      anon_sym_DQUOTE2,
    STATE(60), 1,
      aux_sym_string_content_repeat1,
    STATE(71), 1,
      sym__simple_field,
    STATE(72), 1,
      sym__field,
    STATE(29), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [361] = 9,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      aux_sym_string_content_token1,
    ACTIONS(100), 1,
      sym_escape_sequence,
    ACTIONS(102), 1,
      anon_sym_DQUOTE2,
    STATE(60), 1,
      aux_sym_string_content_repeat1,
    STATE(71), 1,
      sym__simple_field,
    STATE(72), 1,
      sym__field,
    STATE(31), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [391] = 8,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_text_token1,
    STATE(14), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(64), 1,
      aux_sym_text_repeat1,
    STATE(76), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [419] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [447] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [475] = 9,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      aux_sym_string_content_token1,
    ACTIONS(122), 1,
      sym_escape_sequence,
    ACTIONS(124), 1,
      anon_sym_DQUOTE2,
    STATE(60), 1,
      aux_sym_string_content_repeat1,
    STATE(71), 1,
      sym__simple_field,
    STATE(72), 1,
      sym__field,
    STATE(24), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [505] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [533] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [561] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(132), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(33), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [589] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [617] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [645] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_text_token1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(64), 1,
      aux_sym_text_repeat1,
    STATE(76), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [673] = 9,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      aux_sym_string_content_token1,
    ACTIONS(140), 1,
      sym_escape_sequence,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    STATE(60), 1,
      aux_sym_string_content_repeat1,
    STATE(71), 1,
      sym__simple_field,
    STATE(72), 1,
      sym__field,
    STATE(34), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [703] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_text_token1,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(64), 1,
      aux_sym_text_repeat1,
    STATE(76), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [731] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [759] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [787] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [815] = 9,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      aux_sym_string_content_token1,
    ACTIONS(140), 1,
      sym_escape_sequence,
    ACTIONS(152), 1,
      anon_sym_DQUOTE2,
    STATE(60), 1,
      aux_sym_string_content_repeat1,
    STATE(71), 1,
      sym__simple_field,
    STATE(72), 1,
      sym__field,
    STATE(34), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [845] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [873] = 9,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      aux_sym_string_content_token1,
    ACTIONS(140), 1,
      sym_escape_sequence,
    ACTIONS(156), 1,
      anon_sym_DQUOTE2,
    STATE(60), 1,
      aux_sym_string_content_repeat1,
    STATE(71), 1,
      sym__simple_field,
    STATE(72), 1,
      sym__field,
    STATE(34), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [903] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_text_token1,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(64), 1,
      aux_sym_text_repeat1,
    STATE(76), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [931] = 8,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_text_token1,
    STATE(33), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [959] = 9,
    ACTIONS(172), 1,
      anon_sym_DOLLAR,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(178), 1,
      sym_escape_sequence,
    ACTIONS(181), 1,
      aux_sym_string_content_token1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE2,
    STATE(60), 1,
      aux_sym_string_content_repeat1,
    STATE(71), 1,
      sym__simple_field,
    STATE(72), 1,
      sym__field,
    STATE(34), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [989] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [1017] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_text_token1,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(64), 1,
      aux_sym_text_repeat1,
    STATE(76), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [1045] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_text_token1,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(20), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(61), 1,
      aux_sym_text_repeat1,
    STATE(78), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [1073] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_text_token1,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(64), 1,
      aux_sym_text_repeat1,
    STATE(76), 4,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
  [1101] = 4,
    ACTIONS(200), 1,
      aux_sym_text_token1,
    STATE(39), 1,
      aux_sym_text_repeat1,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(198), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
  [1119] = 4,
    ACTIONS(205), 1,
      aux_sym_text_token1,
    STATE(39), 1,
      aux_sym_text_repeat1,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(72), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
  [1137] = 2,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(209), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1150] = 2,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(213), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1163] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(72), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1176] = 2,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(217), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1189] = 2,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(221), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1202] = 2,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(225), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1215] = 2,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(229), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1228] = 2,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(233), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1241] = 2,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(237), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1254] = 2,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(241), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1267] = 2,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(245), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1280] = 2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(249), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1293] = 2,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(253), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1306] = 2,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(257), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1319] = 2,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(237), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1332] = 2,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(261), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1345] = 2,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(265), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1358] = 2,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(269), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1371] = 2,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(273), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1384] = 4,
    ACTIONS(279), 1,
      aux_sym_string_content_token1,
    STATE(63), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(275), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(277), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
  [1399] = 3,
    ACTIONS(281), 1,
      aux_sym_text_token1,
    STATE(62), 1,
      aux_sym_text_repeat1,
    ACTIONS(72), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [1412] = 3,
    ACTIONS(283), 1,
      aux_sym_text_token1,
    STATE(62), 1,
      aux_sym_text_repeat1,
    ACTIONS(198), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [1425] = 4,
    ACTIONS(290), 1,
      aux_sym_string_content_token1,
    STATE(63), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(286), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(288), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
  [1440] = 3,
    ACTIONS(293), 1,
      aux_sym_text_token1,
    STATE(65), 1,
      aux_sym_text_repeat1,
    ACTIONS(72), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [1453] = 3,
    ACTIONS(295), 1,
      aux_sym_text_token1,
    STATE(65), 1,
      aux_sym_text_repeat1,
    ACTIONS(198), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [1466] = 1,
    ACTIONS(72), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1474] = 1,
    ACTIONS(298), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1482] = 3,
    ACTIONS(300), 1,
      anon_sym_POUND_DASH_DASH,
    ACTIONS(302), 1,
      anon_sym_POUND,
    STATE(83), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [1494] = 1,
    ACTIONS(304), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1502] = 1,
    ACTIONS(233), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1510] = 2,
    ACTIONS(235), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(237), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1520] = 2,
    ACTIONS(235), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(237), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1530] = 1,
    ACTIONS(253), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1538] = 2,
    ACTIONS(263), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(265), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1548] = 2,
    ACTIONS(207), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(209), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1558] = 1,
    ACTIONS(306), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1566] = 1,
    ACTIONS(253), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1574] = 1,
    ACTIONS(306), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1582] = 1,
    ACTIONS(304), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1590] = 2,
    ACTIONS(219), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(221), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1600] = 1,
    ACTIONS(298), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1608] = 1,
    ACTIONS(233), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1616] = 3,
    ACTIONS(308), 1,
      anon_sym_POUND_DASH_DASH,
    ACTIONS(310), 1,
      anon_sym_POUND,
    STATE(83), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [1628] = 2,
    ACTIONS(239), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(241), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1638] = 2,
    ACTIONS(243), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(245), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1648] = 1,
    ACTIONS(72), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1656] = 3,
    ACTIONS(315), 1,
      aux_sym_comment_token1,
    STATE(87), 1,
      aux_sym_comment_repeat1,
    ACTIONS(313), 2,
      anon_sym_POUND_DASH_DASH,
      anon_sym_POUND,
  [1667] = 3,
    ACTIONS(320), 1,
      aux_sym_comment_token1,
    STATE(87), 1,
      aux_sym_comment_repeat1,
    ACTIONS(318), 2,
      anon_sym_POUND_DASH_DASH,
      anon_sym_POUND,
  [1678] = 2,
    ACTIONS(322), 1,
      anon_sym_POUND_DASH_DASH,
    ACTIONS(324), 1,
      anon_sym_POUND,
  [1685] = 1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
  [1689] = 1,
    ACTIONS(328), 1,
      anon_sym_COLON,
  [1693] = 1,
    ACTIONS(330), 1,
      anon_sym_COLON,
  [1697] = 1,
    ACTIONS(332), 1,
      sym_number,
  [1701] = 1,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
  [1705] = 1,
    ACTIONS(336), 1,
      sym_value,
  [1709] = 1,
    ACTIONS(338), 1,
      sym_number,
  [1713] = 1,
    ACTIONS(340), 1,
      anon_sym_COLON,
  [1717] = 1,
    ACTIONS(342), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 85,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 275,
  [SMALL_STATE(11)] = 303,
  [SMALL_STATE(12)] = 331,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 391,
  [SMALL_STATE(15)] = 419,
  [SMALL_STATE(16)] = 447,
  [SMALL_STATE(17)] = 475,
  [SMALL_STATE(18)] = 505,
  [SMALL_STATE(19)] = 533,
  [SMALL_STATE(20)] = 561,
  [SMALL_STATE(21)] = 589,
  [SMALL_STATE(22)] = 617,
  [SMALL_STATE(23)] = 645,
  [SMALL_STATE(24)] = 673,
  [SMALL_STATE(25)] = 703,
  [SMALL_STATE(26)] = 731,
  [SMALL_STATE(27)] = 759,
  [SMALL_STATE(28)] = 787,
  [SMALL_STATE(29)] = 815,
  [SMALL_STATE(30)] = 845,
  [SMALL_STATE(31)] = 873,
  [SMALL_STATE(32)] = 903,
  [SMALL_STATE(33)] = 931,
  [SMALL_STATE(34)] = 959,
  [SMALL_STATE(35)] = 989,
  [SMALL_STATE(36)] = 1017,
  [SMALL_STATE(37)] = 1045,
  [SMALL_STATE(38)] = 1073,
  [SMALL_STATE(39)] = 1101,
  [SMALL_STATE(40)] = 1119,
  [SMALL_STATE(41)] = 1137,
  [SMALL_STATE(42)] = 1150,
  [SMALL_STATE(43)] = 1163,
  [SMALL_STATE(44)] = 1176,
  [SMALL_STATE(45)] = 1189,
  [SMALL_STATE(46)] = 1202,
  [SMALL_STATE(47)] = 1215,
  [SMALL_STATE(48)] = 1228,
  [SMALL_STATE(49)] = 1241,
  [SMALL_STATE(50)] = 1254,
  [SMALL_STATE(51)] = 1267,
  [SMALL_STATE(52)] = 1280,
  [SMALL_STATE(53)] = 1293,
  [SMALL_STATE(54)] = 1306,
  [SMALL_STATE(55)] = 1319,
  [SMALL_STATE(56)] = 1332,
  [SMALL_STATE(57)] = 1345,
  [SMALL_STATE(58)] = 1358,
  [SMALL_STATE(59)] = 1371,
  [SMALL_STATE(60)] = 1384,
  [SMALL_STATE(61)] = 1399,
  [SMALL_STATE(62)] = 1412,
  [SMALL_STATE(63)] = 1425,
  [SMALL_STATE(64)] = 1440,
  [SMALL_STATE(65)] = 1453,
  [SMALL_STATE(66)] = 1466,
  [SMALL_STATE(67)] = 1474,
  [SMALL_STATE(68)] = 1482,
  [SMALL_STATE(69)] = 1494,
  [SMALL_STATE(70)] = 1502,
  [SMALL_STATE(71)] = 1510,
  [SMALL_STATE(72)] = 1520,
  [SMALL_STATE(73)] = 1530,
  [SMALL_STATE(74)] = 1538,
  [SMALL_STATE(75)] = 1548,
  [SMALL_STATE(76)] = 1558,
  [SMALL_STATE(77)] = 1566,
  [SMALL_STATE(78)] = 1574,
  [SMALL_STATE(79)] = 1582,
  [SMALL_STATE(80)] = 1590,
  [SMALL_STATE(81)] = 1600,
  [SMALL_STATE(82)] = 1608,
  [SMALL_STATE(83)] = 1616,
  [SMALL_STATE(84)] = 1628,
  [SMALL_STATE(85)] = 1638,
  [SMALL_STATE(86)] = 1648,
  [SMALL_STATE(87)] = 1656,
  [SMALL_STATE(88)] = 1667,
  [SMALL_STATE(89)] = 1678,
  [SMALL_STATE(90)] = 1685,
  [SMALL_STATE(91)] = 1689,
  [SMALL_STATE(92)] = 1693,
  [SMALL_STATE(93)] = 1697,
  [SMALL_STATE(94)] = 1701,
  [SMALL_STATE(95)] = 1705,
  [SMALL_STATE(96)] = 1709,
  [SMALL_STATE(97)] = 1713,
  [SMALL_STATE(98)] = 1717,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 6, 0, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 6, 0, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 8, 0, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 8, 0, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 8, 0, 6),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 8, 0, 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, 0, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, 0, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 4, 0, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 4, 0, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 5, 0, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 5, 0, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 7, 0, 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 7, 0, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 8, 0, 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 8, 0, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 7, 0, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 7, 0, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_field, 2, 0, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_field, 2, 0, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 9, 0, 6),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 9, 0, 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 7, 0, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 7, 0, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
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
