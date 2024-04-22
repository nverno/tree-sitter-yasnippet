#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_ident = 1,
  anon_sym_POUND = 2,
  anon_sym_DASH_DASH = 3,
  aux_sym_local_definition_token1 = 4,
  anon_sym_COLON = 5,
  aux_sym_local_definition_token2 = 6,
  anon_sym_DASH_STAR_DASH = 7,
  aux_sym_local_variables_token1 = 8,
  aux_sym_comment_token1 = 9,
  anon_sym_key = 10,
  anon_sym_name = 11,
  anon_sym_condition = 12,
  anon_sym_contributor = 13,
  anon_sym_binding = 14,
  anon_sym_expand_DASHenv = 15,
  anon_sym_uuid = 16,
  anon_sym_group = 17,
  anon_sym_type = 18,
  sym_value = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_DOLLAR = 22,
  anon_sym_DOLLAR_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_DOLLAR_LPAREN = 25,
  sym_escape_sequence = 26,
  aux_sym_string_content_token1 = 27,
  anon_sym_DQUOTE = 28,
  anon_sym_DQUOTE2 = 29,
  sym_number = 30,
  aux_sym_text_token1 = 31,
  sym_source_file = 32,
  sym_header = 33,
  sym_header_end = 34,
  sym_local_definition = 35,
  sym_local_variables = 36,
  sym_comment = 37,
  sym_directive = 38,
  sym_key = 39,
  sym_snippet = 40,
  sym__expression = 41,
  sym_parenthesized_expression = 42,
  sym_field = 43,
  sym__simple_field = 44,
  sym__field = 45,
  sym_mirror = 46,
  sym_elisp_code = 47,
  sym_string_content = 48,
  sym_string = 49,
  sym_text = 50,
  aux_sym_header_repeat1 = 51,
  aux_sym_local_variables_repeat1 = 52,
  aux_sym_local_variables_repeat2 = 53,
  aux_sym_comment_repeat1 = 54,
  aux_sym_snippet_repeat1 = 55,
  aux_sym_parenthesized_expression_repeat1 = 56,
  aux_sym_string_content_repeat1 = 57,
  aux_sym_string_repeat1 = 58,
  aux_sym_text_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [anon_sym_POUND] = "#",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_local_definition_token1] = "variable",
  [anon_sym_COLON] = ":",
  [aux_sym_local_definition_token2] = "value",
  [anon_sym_DASH_STAR_DASH] = "-*-",
  [aux_sym_local_variables_token1] = "local_variables_token1",
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym_header_end] = "header_end",
  [sym_local_definition] = "local_definition",
  [sym_local_variables] = "local_variables",
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
  [sym_elisp_code] = "elisp_code",
  [sym_string_content] = "string_content",
  [sym_string] = "string",
  [sym_text] = "text",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_local_variables_repeat1] = "local_variables_repeat1",
  [aux_sym_local_variables_repeat2] = "local_variables_repeat2",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_snippet_repeat1] = "snippet_repeat1",
  [aux_sym_parenthesized_expression_repeat1] = "parenthesized_expression_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_local_definition_token1] = aux_sym_local_definition_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_local_definition_token2] = sym_value,
  [anon_sym_DASH_STAR_DASH] = anon_sym_DASH_STAR_DASH,
  [aux_sym_local_variables_token1] = aux_sym_local_variables_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [sym_header_end] = sym_header_end,
  [sym_local_definition] = sym_local_definition,
  [sym_local_variables] = sym_local_variables,
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
  [sym_elisp_code] = sym_elisp_code,
  [sym_string_content] = sym_string_content,
  [sym_string] = sym_string,
  [sym_text] = sym_text,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_local_variables_repeat1] = aux_sym_local_variables_repeat1,
  [aux_sym_local_variables_repeat2] = aux_sym_local_variables_repeat2,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_snippet_repeat1] = aux_sym_snippet_repeat1,
  [aux_sym_parenthesized_expression_repeat1] = aux_sym_parenthesized_expression_repeat1,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_local_definition_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_local_definition_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_STAR_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_local_variables_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [sym_header_end] = {
    .visible = true,
    .named = true,
  },
  [sym_local_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variables] = {
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
  [sym_elisp_code] = {
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
  [aux_sym_local_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_local_variables_repeat2] = {
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
};

enum ts_field_identifiers {
  field_code = 1,
  field_index = 2,
  field_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_code] = "code",
  [field_index] = "index",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_index, 0, .inherited = true},
  [1] =
    {field_index, 1},
  [2] =
    {field_name, 1},
    {field_value, 3},
  [4] =
    {field_name, 0},
    {field_value, 2},
  [6] =
    {field_code, 3},
    {field_index, 1},
  [8] =
    {field_code, 4},
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 16,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 20,
  [25] = 25,
  [26] = 26,
  [27] = 15,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 16,
  [33] = 23,
  [34] = 18,
  [35] = 35,
  [36] = 36,
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
  [54] = 36,
  [55] = 35,
  [56] = 36,
  [57] = 57,
  [58] = 58,
  [59] = 35,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 39,
  [64] = 64,
  [65] = 50,
  [66] = 66,
  [67] = 51,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 47,
  [72] = 42,
  [73] = 73,
  [74] = 70,
  [75] = 75,
  [76] = 76,
  [77] = 50,
  [78] = 52,
  [79] = 68,
  [80] = 51,
  [81] = 39,
  [82] = 37,
  [83] = 38,
  [84] = 40,
  [85] = 45,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 101,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '"', 126,
        '#', 66,
        '$', 116,
        '(', 114,
        ')', 115,
        '-', 12,
        ':', 73,
        ';', 78,
        '\\', 11,
        'b', 28,
        'c', 42,
        'e', 57,
        'g', 48,
        'k', 23,
        'n', 16,
        't', 59,
        'u', 53,
        '}', 119,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == 'k') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == 'k') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == 'k') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(135);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(135);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(135);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(135);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(122);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(121);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 57:
      if (lookahead == 'x') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 60:
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 62:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '"', 125,
        '#', 66,
        '$', 116,
        '(', 114,
        ')', 115,
        '-', 12,
        ':', 73,
        ';', 78,
        'b', 28,
        'c', 42,
        'e', 57,
        'g', 48,
        'k', 23,
        'n', 16,
        't', 59,
        'u', 53,
        '}', 119,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_local_definition_token2);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_local_definition_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH_STAR_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH_STAR_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_local_variables_token1);
      if (lookahead == ';') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '#', 66,
        '-', 84,
        'b', 88,
        'c', 89,
        'e', 92,
        'g', 90,
        'k', 87,
        'n', 86,
        't', 93,
        'u', 91,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '#', 66,
        '-', 85,
        'b', 88,
        'c', 89,
        'e', 92,
        'g', 90,
        'k', 87,
        'n', 86,
        't', 93,
        'u', 91,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(79);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '#', 66,
        'b', 88,
        'c', 89,
        'e', 92,
        'g', 90,
        'k', 87,
        'n', 86,
        't', 93,
        'u', 91,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(79);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(79);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(13);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_contributor);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_binding);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_binding);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_expand_DASHenv);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_expand_DASHenv);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '{') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '(' ||
          lookahead == '{') ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '$') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(135);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(135);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(135);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(135);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '$') ADVANCE(122);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(121);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '(') ADVANCE(120);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 63},
  [3] = {.lex_state = 63},
  [4] = {.lex_state = 63},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 63},
  [36] = {.lex_state = 63},
  [37] = {.lex_state = 63},
  [38] = {.lex_state = 63},
  [39] = {.lex_state = 63},
  [40] = {.lex_state = 63},
  [41] = {.lex_state = 63},
  [42] = {.lex_state = 63},
  [43] = {.lex_state = 63},
  [44] = {.lex_state = 63},
  [45] = {.lex_state = 63},
  [46] = {.lex_state = 63},
  [47] = {.lex_state = 63},
  [48] = {.lex_state = 63},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 63},
  [51] = {.lex_state = 63},
  [52] = {.lex_state = 63},
  [53] = {.lex_state = 63},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 60},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_STAR_DASH] = ACTIONS(1),
    [aux_sym_local_variables_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(98),
    [sym_header] = STATE(2),
    [sym_local_variables] = STATE(86),
    [sym_comment] = STATE(64),
    [sym_directive] = STATE(64),
    [aux_sym_header_repeat1] = STATE(64),
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
    STATE(36), 1,
      aux_sym_text_repeat1,
    STATE(37), 1,
      sym__simple_field,
    STATE(38), 1,
      sym__field,
    STATE(102), 1,
      sym_snippet,
    STATE(3), 5,
      sym_field,
      sym_mirror,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [44] = 12,
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
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_escape_sequence,
    ACTIONS(25), 1,
      sym_number,
    STATE(36), 1,
      aux_sym_text_repeat1,
    STATE(37), 1,
      sym__simple_field,
    STATE(38), 1,
      sym__field,
    STATE(4), 5,
      sym_field,
      sym_mirror,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [85] = 12,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(38), 1,
      sym_escape_sequence,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      sym_number,
    ACTIONS(47), 1,
      aux_sym_text_token1,
    STATE(36), 1,
      aux_sym_text_repeat1,
    STATE(37), 1,
      sym__simple_field,
    STATE(38), 1,
      sym__field,
    STATE(4), 5,
      sym_field,
      sym_mirror,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [126] = 6,
    ACTIONS(50), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      aux_sym_comment_repeat1,
    STATE(105), 1,
      sym_key,
    ACTIONS(56), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [153] = 6,
    ACTIONS(50), 1,
      anon_sym_POUND,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    ACTIONS(58), 1,
      anon_sym_DASH_DASH,
    STATE(89), 1,
      aux_sym_comment_repeat1,
    STATE(105), 1,
      sym_key,
    ACTIONS(56), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [180] = 5,
    ACTIONS(50), 1,
      anon_sym_POUND,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      aux_sym_comment_repeat1,
    STATE(105), 1,
      sym_key,
    ACTIONS(56), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [204] = 8,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      sym_number,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(34), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [233] = 8,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(13), 1,
      sym_elisp_code,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(11), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [262] = 8,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      sym_number,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(18), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [291] = 8,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(74), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_elisp_code,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(17), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [320] = 8,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_text_token1,
    STATE(54), 1,
      aux_sym_text_repeat1,
    STATE(26), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [349] = 7,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(28), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [375] = 7,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      aux_sym_text_token1,
    STATE(54), 1,
      aux_sym_text_repeat1,
    STATE(14), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [401] = 7,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_text_token1,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_text_repeat1,
    STATE(14), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [427] = 9,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(116), 1,
      sym_escape_sequence,
    ACTIONS(118), 1,
      aux_sym_string_content_token1,
    ACTIONS(120), 1,
      anon_sym_DQUOTE2,
    STATE(61), 1,
      aux_sym_string_content_repeat1,
    STATE(82), 1,
      sym__simple_field,
    STATE(83), 1,
      sym__field,
    STATE(24), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [457] = 7,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      aux_sym_text_token1,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(17), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [483] = 7,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(17), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [509] = 9,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(118), 1,
      aux_sym_string_content_token1,
    ACTIONS(136), 1,
      sym_escape_sequence,
    ACTIONS(138), 1,
      anon_sym_DQUOTE2,
    STATE(61), 1,
      aux_sym_string_content_repeat1,
    STATE(82), 1,
      sym__simple_field,
    STATE(83), 1,
      sym__field,
    STATE(20), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [539] = 9,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(118), 1,
      aux_sym_string_content_token1,
    ACTIONS(140), 1,
      sym_escape_sequence,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    STATE(61), 1,
      aux_sym_string_content_repeat1,
    STATE(82), 1,
      sym__simple_field,
    STATE(83), 1,
      sym__field,
    STATE(22), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [569] = 9,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(118), 1,
      aux_sym_string_content_token1,
    ACTIONS(140), 1,
      sym_escape_sequence,
    ACTIONS(144), 1,
      anon_sym_DQUOTE2,
    STATE(61), 1,
      aux_sym_string_content_repeat1,
    STATE(82), 1,
      sym__simple_field,
    STATE(83), 1,
      sym__field,
    STATE(22), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [599] = 9,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(149), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(152), 1,
      sym_escape_sequence,
    ACTIONS(155), 1,
      aux_sym_string_content_token1,
    ACTIONS(158), 1,
      anon_sym_DQUOTE2,
    STATE(61), 1,
      aux_sym_string_content_repeat1,
    STATE(82), 1,
      sym__simple_field,
    STATE(83), 1,
      sym__field,
    STATE(22), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [629] = 7,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_text_token1,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_text_repeat1,
    STATE(27), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [655] = 9,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(118), 1,
      aux_sym_string_content_token1,
    ACTIONS(140), 1,
      sym_escape_sequence,
    ACTIONS(162), 1,
      anon_sym_DQUOTE2,
    STATE(61), 1,
      aux_sym_string_content_repeat1,
    STATE(82), 1,
      sym__simple_field,
    STATE(83), 1,
      sym__field,
    STATE(22), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [685] = 7,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(31), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [711] = 7,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_text_token1,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_text_repeat1,
    STATE(14), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [737] = 7,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_text_token1,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_text_repeat1,
    STATE(14), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [763] = 7,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(17), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [789] = 7,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(30), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [815] = 7,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(17), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [841] = 7,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(17), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [867] = 9,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(118), 1,
      aux_sym_string_content_token1,
    ACTIONS(178), 1,
      sym_escape_sequence,
    ACTIONS(180), 1,
      anon_sym_DQUOTE2,
    STATE(61), 1,
      aux_sym_string_content_repeat1,
    STATE(82), 1,
      sym__simple_field,
    STATE(83), 1,
      sym__field,
    STATE(21), 3,
      sym_field,
      sym_string_content,
      aux_sym_string_repeat1,
  [897] = 7,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_text_token1,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_text_repeat1,
    STATE(15), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [923] = 7,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_text_token1,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_text_repeat1,
    STATE(17), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [949] = 4,
    ACTIONS(190), 1,
      aux_sym_text_token1,
    STATE(35), 1,
      aux_sym_text_repeat1,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(188), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
  [967] = 4,
    ACTIONS(195), 1,
      aux_sym_text_token1,
    STATE(35), 1,
      aux_sym_text_repeat1,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(86), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
  [985] = 2,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(199), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [998] = 2,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(199), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1011] = 2,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(86), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1024] = 2,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(203), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1037] = 2,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(207), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1050] = 2,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(211), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1063] = 2,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(215), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1076] = 2,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(219), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1089] = 2,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(223), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1102] = 2,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(227), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1115] = 2,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(231), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1128] = 2,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(235), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1141] = 2,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(239), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1154] = 2,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(243), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1167] = 2,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(247), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1180] = 2,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(251), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1193] = 2,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(255), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1206] = 3,
    ACTIONS(257), 1,
      aux_sym_text_token1,
    STATE(59), 1,
      aux_sym_text_repeat1,
    ACTIONS(86), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [1219] = 3,
    ACTIONS(259), 1,
      aux_sym_text_token1,
    STATE(55), 1,
      aux_sym_text_repeat1,
    ACTIONS(188), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [1232] = 3,
    ACTIONS(262), 1,
      aux_sym_text_token1,
    STATE(55), 1,
      aux_sym_text_repeat1,
    ACTIONS(86), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [1245] = 4,
    ACTIONS(268), 1,
      aux_sym_string_content_token1,
    STATE(57), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(264), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
  [1260] = 5,
    ACTIONS(271), 1,
      aux_sym_local_definition_token1,
    ACTIONS(273), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(275), 1,
      aux_sym_local_variables_token1,
    STATE(88), 1,
      aux_sym_local_variables_repeat2,
    STATE(73), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [1277] = 3,
    ACTIONS(277), 1,
      aux_sym_text_token1,
    STATE(59), 1,
      aux_sym_text_repeat1,
    ACTIONS(188), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [1290] = 5,
    ACTIONS(271), 1,
      aux_sym_local_definition_token1,
    ACTIONS(275), 1,
      aux_sym_local_variables_token1,
    ACTIONS(280), 1,
      anon_sym_DASH_STAR_DASH,
    STATE(93), 1,
      aux_sym_local_variables_repeat2,
    STATE(58), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [1307] = 4,
    ACTIONS(286), 1,
      aux_sym_string_content_token1,
    STATE(57), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(282), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(284), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
  [1322] = 3,
    ACTIONS(271), 1,
      aux_sym_local_definition_token1,
    ACTIONS(288), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(75), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [1334] = 1,
    ACTIONS(86), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1342] = 3,
    ACTIONS(290), 1,
      anon_sym_POUND,
    STATE(53), 1,
      sym_header_end,
    STATE(87), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [1354] = 1,
    ACTIONS(243), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1362] = 3,
    ACTIONS(290), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_header_end,
    STATE(87), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [1374] = 1,
    ACTIONS(247), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1382] = 1,
    ACTIONS(292), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1390] = 1,
    ACTIONS(294), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1398] = 1,
    ACTIONS(296), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1406] = 2,
    ACTIONS(229), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(231), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1416] = 2,
    ACTIONS(209), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(211), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1426] = 3,
    ACTIONS(298), 1,
      aux_sym_local_definition_token1,
    ACTIONS(301), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(73), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [1438] = 1,
    ACTIONS(296), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1446] = 3,
    ACTIONS(271), 1,
      aux_sym_local_definition_token1,
    ACTIONS(303), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(73), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [1458] = 1,
    ACTIONS(305), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1466] = 1,
    ACTIONS(243), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1474] = 2,
    ACTIONS(249), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(251), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1484] = 1,
    ACTIONS(292), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1492] = 1,
    ACTIONS(247), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1500] = 1,
    ACTIONS(86), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1508] = 2,
    ACTIONS(197), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(199), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1518] = 2,
    ACTIONS(197), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(199), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1528] = 2,
    ACTIONS(201), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(203), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1538] = 2,
    ACTIONS(221), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE2,
    ACTIONS(223), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_string_content_token1,
  [1548] = 2,
    ACTIONS(307), 1,
      anon_sym_POUND,
    STATE(66), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [1557] = 2,
    ACTIONS(309), 1,
      anon_sym_POUND,
    STATE(87), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [1566] = 3,
    ACTIONS(312), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(314), 1,
      aux_sym_local_variables_token1,
    STATE(92), 1,
      aux_sym_local_variables_repeat2,
  [1576] = 3,
    ACTIONS(316), 1,
      anon_sym_POUND,
    ACTIONS(318), 1,
      aux_sym_comment_token1,
    STATE(90), 1,
      aux_sym_comment_repeat1,
  [1586] = 3,
    ACTIONS(320), 1,
      anon_sym_POUND,
    ACTIONS(322), 1,
      aux_sym_comment_token1,
    STATE(90), 1,
      aux_sym_comment_repeat1,
  [1596] = 1,
    ACTIONS(325), 3,
      aux_sym_local_definition_token1,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
  [1602] = 3,
    ACTIONS(327), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(329), 1,
      aux_sym_local_variables_token1,
    STATE(92), 1,
      aux_sym_local_variables_repeat2,
  [1612] = 3,
    ACTIONS(314), 1,
      aux_sym_local_variables_token1,
    ACTIONS(332), 1,
      anon_sym_DASH_STAR_DASH,
    STATE(92), 1,
      aux_sym_local_variables_repeat2,
  [1622] = 1,
    ACTIONS(334), 1,
      anon_sym_POUND,
  [1626] = 1,
    ACTIONS(336), 1,
      anon_sym_COLON,
  [1630] = 1,
    ACTIONS(338), 1,
      aux_sym_local_definition_token2,
  [1634] = 1,
    ACTIONS(340), 1,
      anon_sym_POUND,
  [1638] = 1,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
  [1642] = 1,
    ACTIONS(344), 1,
      anon_sym_POUND,
  [1646] = 1,
    ACTIONS(346), 1,
      sym_value,
  [1650] = 1,
    ACTIONS(348), 1,
      sym_number,
  [1654] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [1658] = 1,
    ACTIONS(352), 1,
      sym_number,
  [1662] = 1,
    ACTIONS(354), 1,
      anon_sym_COLON,
  [1666] = 1,
    ACTIONS(356), 1,
      anon_sym_COLON,
  [1670] = 1,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [1674] = 1,
    ACTIONS(360), 1,
      anon_sym_COLON,
  [1678] = 1,
    ACTIONS(362), 1,
      anon_sym_POUND,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 85,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 233,
  [SMALL_STATE(10)] = 262,
  [SMALL_STATE(11)] = 291,
  [SMALL_STATE(12)] = 320,
  [SMALL_STATE(13)] = 349,
  [SMALL_STATE(14)] = 375,
  [SMALL_STATE(15)] = 401,
  [SMALL_STATE(16)] = 427,
  [SMALL_STATE(17)] = 457,
  [SMALL_STATE(18)] = 483,
  [SMALL_STATE(19)] = 509,
  [SMALL_STATE(20)] = 539,
  [SMALL_STATE(21)] = 569,
  [SMALL_STATE(22)] = 599,
  [SMALL_STATE(23)] = 629,
  [SMALL_STATE(24)] = 655,
  [SMALL_STATE(25)] = 685,
  [SMALL_STATE(26)] = 711,
  [SMALL_STATE(27)] = 737,
  [SMALL_STATE(28)] = 763,
  [SMALL_STATE(29)] = 789,
  [SMALL_STATE(30)] = 815,
  [SMALL_STATE(31)] = 841,
  [SMALL_STATE(32)] = 867,
  [SMALL_STATE(33)] = 897,
  [SMALL_STATE(34)] = 923,
  [SMALL_STATE(35)] = 949,
  [SMALL_STATE(36)] = 967,
  [SMALL_STATE(37)] = 985,
  [SMALL_STATE(38)] = 998,
  [SMALL_STATE(39)] = 1011,
  [SMALL_STATE(40)] = 1024,
  [SMALL_STATE(41)] = 1037,
  [SMALL_STATE(42)] = 1050,
  [SMALL_STATE(43)] = 1063,
  [SMALL_STATE(44)] = 1076,
  [SMALL_STATE(45)] = 1089,
  [SMALL_STATE(46)] = 1102,
  [SMALL_STATE(47)] = 1115,
  [SMALL_STATE(48)] = 1128,
  [SMALL_STATE(49)] = 1141,
  [SMALL_STATE(50)] = 1154,
  [SMALL_STATE(51)] = 1167,
  [SMALL_STATE(52)] = 1180,
  [SMALL_STATE(53)] = 1193,
  [SMALL_STATE(54)] = 1206,
  [SMALL_STATE(55)] = 1219,
  [SMALL_STATE(56)] = 1232,
  [SMALL_STATE(57)] = 1245,
  [SMALL_STATE(58)] = 1260,
  [SMALL_STATE(59)] = 1277,
  [SMALL_STATE(60)] = 1290,
  [SMALL_STATE(61)] = 1307,
  [SMALL_STATE(62)] = 1322,
  [SMALL_STATE(63)] = 1334,
  [SMALL_STATE(64)] = 1342,
  [SMALL_STATE(65)] = 1354,
  [SMALL_STATE(66)] = 1362,
  [SMALL_STATE(67)] = 1374,
  [SMALL_STATE(68)] = 1382,
  [SMALL_STATE(69)] = 1390,
  [SMALL_STATE(70)] = 1398,
  [SMALL_STATE(71)] = 1406,
  [SMALL_STATE(72)] = 1416,
  [SMALL_STATE(73)] = 1426,
  [SMALL_STATE(74)] = 1438,
  [SMALL_STATE(75)] = 1446,
  [SMALL_STATE(76)] = 1458,
  [SMALL_STATE(77)] = 1466,
  [SMALL_STATE(78)] = 1474,
  [SMALL_STATE(79)] = 1484,
  [SMALL_STATE(80)] = 1492,
  [SMALL_STATE(81)] = 1500,
  [SMALL_STATE(82)] = 1508,
  [SMALL_STATE(83)] = 1518,
  [SMALL_STATE(84)] = 1528,
  [SMALL_STATE(85)] = 1538,
  [SMALL_STATE(86)] = 1548,
  [SMALL_STATE(87)] = 1557,
  [SMALL_STATE(88)] = 1566,
  [SMALL_STATE(89)] = 1576,
  [SMALL_STATE(90)] = 1586,
  [SMALL_STATE(91)] = 1596,
  [SMALL_STATE(92)] = 1602,
  [SMALL_STATE(93)] = 1612,
  [SMALL_STATE(94)] = 1622,
  [SMALL_STATE(95)] = 1626,
  [SMALL_STATE(96)] = 1630,
  [SMALL_STATE(97)] = 1634,
  [SMALL_STATE(98)] = 1638,
  [SMALL_STATE(99)] = 1642,
  [SMALL_STATE(100)] = 1646,
  [SMALL_STATE(101)] = 1650,
  [SMALL_STATE(102)] = 1654,
  [SMALL_STATE(103)] = 1658,
  [SMALL_STATE(104)] = 1662,
  [SMALL_STATE(105)] = 1666,
  [SMALL_STATE(106)] = 1670,
  [SMALL_STATE(107)] = 1674,
  [SMALL_STATE(108)] = 1678,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, 0, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, 0, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 6, 0, 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 6, 0, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 4, 0, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 4, 0, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_end, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_end, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_field, 2, 0, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_field, 2, 0, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 6, 0, 6),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 6, 0, 6),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 5, 0, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 5, 0, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 7, 0, 6),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 7, 0, 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 5, 0, 5),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 5, 0, 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat2, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elisp_code, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat1, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elisp_code, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_definition, 3, 0, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0), SHIFT_REPEAT(62),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 4, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 5, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 3, 0, 0),
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
