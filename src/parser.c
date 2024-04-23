#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  anon_sym_BSLASH = 25,
  aux_sym_escape_sequence_token1 = 26,
  aux_sym_escape_sequence_token2 = 27,
  aux_sym_string_content_token1 = 28,
  anon_sym_DQUOTE = 29,
  anon_sym_DQUOTE2 = 30,
  sym_number = 31,
  aux_sym_text_token1 = 32,
  sym_source_file = 33,
  sym_header = 34,
  sym_header_end = 35,
  sym_local_definition = 36,
  sym_local_variables = 37,
  sym_comment = 38,
  sym_directive = 39,
  sym_key = 40,
  sym_snippet = 41,
  sym__expression = 42,
  sym__code_expression = 43,
  sym_parenthesized_expression = 44,
  sym_field = 45,
  sym__simple_field = 46,
  sym__field = 47,
  sym_mirror = 48,
  sym_elisp_code = 49,
  sym_escape_sequence = 50,
  sym_string_content = 51,
  sym_string = 52,
  sym_text = 53,
  aux_sym_header_repeat1 = 54,
  aux_sym_local_variables_repeat1 = 55,
  aux_sym_local_variables_repeat2 = 56,
  aux_sym_comment_repeat1 = 57,
  aux_sym_snippet_repeat1 = 58,
  aux_sym_parenthesized_expression_repeat1 = 59,
  aux_sym__field_repeat1 = 60,
  aux_sym_string_content_repeat1 = 61,
  aux_sym_string_repeat1 = 62,
  aux_sym_text_repeat1 = 63,
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
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [aux_sym_escape_sequence_token2] = "escape_sequence_token2",
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
  [sym__code_expression] = "_code_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_field] = "field",
  [sym__simple_field] = "_simple_field",
  [sym__field] = "_field",
  [sym_mirror] = "mirror",
  [sym_elisp_code] = "elisp_code",
  [sym_escape_sequence] = "escape_sequence",
  [sym_string_content] = "string_content",
  [sym_string] = "string",
  [sym_text] = "text",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_local_variables_repeat1] = "local_variables_repeat1",
  [aux_sym_local_variables_repeat2] = "local_variables_repeat2",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_snippet_repeat1] = "snippet_repeat1",
  [aux_sym_parenthesized_expression_repeat1] = "parenthesized_expression_repeat1",
  [aux_sym__field_repeat1] = "_field_repeat1",
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
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [aux_sym_escape_sequence_token2] = aux_sym_escape_sequence_token2,
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
  [sym__code_expression] = sym__code_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_field] = sym_field,
  [sym__simple_field] = sym__simple_field,
  [sym__field] = sym__field,
  [sym_mirror] = sym_mirror,
  [sym_elisp_code] = sym_elisp_code,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_string_content] = sym_string_content,
  [sym_string] = sym_string,
  [sym_text] = sym_text,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_local_variables_repeat1] = aux_sym_local_variables_repeat1,
  [aux_sym_local_variables_repeat2] = aux_sym_local_variables_repeat2,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_snippet_repeat1] = aux_sym_snippet_repeat1,
  [aux_sym_parenthesized_expression_repeat1] = aux_sym_parenthesized_expression_repeat1,
  [aux_sym__field_repeat1] = aux_sym__field_repeat1,
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token2] = {
    .visible = false,
    .named = false,
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
  [sym__code_expression] = {
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
  [sym_escape_sequence] = {
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
  [aux_sym__field_repeat1] = {
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
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 16,
  [19] = 15,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 31,
  [34] = 32,
  [35] = 32,
  [36] = 31,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 39,
  [42] = 42,
  [43] = 39,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 38,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 49,
  [63] = 58,
  [64] = 64,
  [65] = 54,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 58,
  [70] = 64,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 59,
  [75] = 75,
  [76] = 57,
  [77] = 56,
  [78] = 54,
  [79] = 49,
  [80] = 61,
  [81] = 81,
  [82] = 55,
  [83] = 60,
  [84] = 42,
  [85] = 67,
  [86] = 67,
  [87] = 57,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 60,
  [93] = 64,
  [94] = 94,
  [95] = 55,
  [96] = 42,
  [97] = 56,
  [98] = 54,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 107,
  [109] = 107,
  [110] = 107,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 124,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(64);
      ADVANCE_MAP(
        '"', 126,
        '#', 65,
        '$', 116,
        '(', 113,
        ')', 114,
        '-', 12,
        ':', 72,
        ';', 77,
        '\\', 119,
        'b', 28,
        'c', 42,
        'e', 57,
        'g', 48,
        'k', 23,
        'n', 16,
        't', 59,
        'u', 53,
        '{', 122,
        '}', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(89);
      if (lookahead == 'k') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(89);
      if (lookahead == 'k') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(89);
      if (lookahead == 'k') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(105);
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
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
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
      if (lookahead == 'n') ADVANCE(97);
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
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
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
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(99);
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
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'v') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'x') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 60:
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 62:
      if (eof) ADVANCE(64);
      ADVANCE_MAP(
        '"', 125,
        '#', 65,
        '$', 116,
        '(', 113,
        ')', 114,
        '-', 12,
        ':', 72,
        ';', 77,
        '\\', 119,
        'b', 28,
        'c', 42,
        'e', 57,
        'g', 48,
        'k', 23,
        'n', 16,
        't', 59,
        'u', 53,
        '{', 122,
        '}', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      if (eof) ADVANCE(64);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_local_definition_token2);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_local_definition_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH_STAR_DASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH_STAR_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(71);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_local_variables_token1);
      if (lookahead == ';') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '#', 65,
        '-', 84,
        'b', 87,
        'c', 88,
        'e', 91,
        'g', 89,
        'k', 86,
        'n', 85,
        't', 92,
        'u', 90,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '#', 65,
        '-', 83,
        'b', 87,
        'c', 88,
        'e', 91,
        'g', 89,
        'k', 86,
        'n', 85,
        't', 92,
        'u', 90,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(78);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '#', 65,
        'b', 87,
        'c', 88,
        'e', 91,
        'g', 89,
        'k', 86,
        'n', 85,
        't', 92,
        'u', 90,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(78);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(78);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(13);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_contributor);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_binding);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_binding);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_expand_DASHenv);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_expand_DASHenv);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (lookahead == '(' ||
          lookahead == '{') ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '$') ADVANCE(116);
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
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '}') ADVANCE(118);
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
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(119);
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
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(128);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
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
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 63},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 63},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 63},
  [41] = {.lex_state = 63},
  [42] = {.lex_state = 63},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 63},
  [45] = {.lex_state = 63},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 63},
  [48] = {.lex_state = 63},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 63},
  [51] = {.lex_state = 63},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 63},
  [55] = {.lex_state = 63},
  [56] = {.lex_state = 63},
  [57] = {.lex_state = 63},
  [58] = {.lex_state = 63},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 63},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 63},
  [67] = {.lex_state = 63},
  [68] = {.lex_state = 63},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 60},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
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
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_escape_sequence_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(122),
    [sym_header] = STATE(2),
    [sym_local_variables] = STATE(99),
    [sym_comment] = STATE(88),
    [sym_directive] = STATE(88),
    [aux_sym_header_repeat1] = STATE(88),
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
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      aux_sym_text_token1,
    STATE(41), 1,
      aux_sym_text_repeat1,
    STATE(42), 1,
      sym__simple_field,
    STATE(67), 1,
      sym__field,
    STATE(115), 1,
      sym_snippet,
    STATE(8), 6,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [42] = 11,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(19), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [81] = 11,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      sym_number,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(15), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [120] = 11,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    ACTIONS(42), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_number,
    ACTIONS(54), 1,
      aux_sym_text_token1,
    STATE(41), 1,
      aux_sym_text_repeat1,
    STATE(42), 1,
      sym__simple_field,
    STATE(67), 1,
      sym__field,
    STATE(5), 6,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [159] = 11,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_number,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(17), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [198] = 11,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_elisp_code,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(9), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [237] = 11,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_text_token1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_number,
    STATE(41), 1,
      aux_sym_text_repeat1,
    STATE(42), 1,
      sym__simple_field,
    STATE(67), 1,
      sym__field,
    STATE(5), 6,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [276] = 11,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(61), 1,
      anon_sym_DOLLAR,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_elisp_code,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(21), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [315] = 10,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(18), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [351] = 10,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(12), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [387] = 10,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(21), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [423] = 10,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(21), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [459] = 10,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(16), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [495] = 10,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(21), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [531] = 10,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(21), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [567] = 10,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(21), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [603] = 10,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(21), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [639] = 10,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(21), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [675] = 10,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(13), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [711] = 10,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_BSLASH,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      aux_sym_text_token1,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(84), 1,
      sym__simple_field,
    STATE(85), 1,
      sym__field,
    STATE(21), 6,
      sym__expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_repeat1,
  [747] = 9,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(122), 1,
      aux_sym_text_token1,
    STATE(39), 1,
      aux_sym_text_repeat1,
    STATE(28), 6,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [780] = 6,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_DASH_DASH,
    ACTIONS(128), 1,
      aux_sym_comment_token1,
    STATE(106), 1,
      aux_sym_comment_repeat1,
    STATE(118), 1,
      sym_key,
    ACTIONS(130), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [807] = 6,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      aux_sym_comment_token1,
    ACTIONS(132), 1,
      anon_sym_DASH_STAR_DASH,
    STATE(106), 1,
      aux_sym_comment_repeat1,
    STATE(118), 1,
      sym_key,
    ACTIONS(130), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [834] = 9,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(122), 1,
      aux_sym_text_token1,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_text_repeat1,
    STATE(28), 6,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [867] = 9,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      aux_sym_text_token1,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      sym_number,
    STATE(39), 1,
      aux_sym_text_repeat1,
    STATE(25), 6,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [900] = 9,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      aux_sym_text_token1,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      sym_number,
    STATE(39), 1,
      aux_sym_text_repeat1,
    STATE(22), 6,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [933] = 9,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_BSLASH,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      sym_number,
    ACTIONS(161), 1,
      aux_sym_text_token1,
    STATE(39), 1,
      aux_sym_text_repeat1,
    STATE(28), 6,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [966] = 5,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      aux_sym_comment_token1,
    STATE(106), 1,
      aux_sym_comment_repeat1,
    STATE(118), 1,
      sym_key,
    ACTIONS(130), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [990] = 9,
    ACTIONS(164), 1,
      anon_sym_DOLLAR,
    ACTIONS(167), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(170), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      aux_sym_string_content_token1,
    ACTIONS(176), 1,
      anon_sym_DQUOTE2,
    STATE(81), 1,
      aux_sym_string_content_repeat1,
    STATE(86), 1,
      sym__field,
    STATE(96), 1,
      sym__simple_field,
    STATE(30), 4,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1021] = 9,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      aux_sym_string_content_token1,
    ACTIONS(186), 1,
      anon_sym_DQUOTE2,
    STATE(81), 1,
      aux_sym_string_content_repeat1,
    STATE(86), 1,
      sym__field,
    STATE(96), 1,
      sym__simple_field,
    STATE(34), 4,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1052] = 9,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      aux_sym_string_content_token1,
    ACTIONS(188), 1,
      anon_sym_DQUOTE2,
    STATE(81), 1,
      aux_sym_string_content_repeat1,
    STATE(86), 1,
      sym__field,
    STATE(96), 1,
      sym__simple_field,
    STATE(30), 4,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1083] = 9,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      aux_sym_string_content_token1,
    ACTIONS(190), 1,
      anon_sym_DQUOTE2,
    STATE(81), 1,
      aux_sym_string_content_repeat1,
    STATE(86), 1,
      sym__field,
    STATE(96), 1,
      sym__simple_field,
    STATE(35), 4,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1114] = 9,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      aux_sym_string_content_token1,
    ACTIONS(192), 1,
      anon_sym_DQUOTE2,
    STATE(81), 1,
      aux_sym_string_content_repeat1,
    STATE(86), 1,
      sym__field,
    STATE(96), 1,
      sym__simple_field,
    STATE(30), 4,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1145] = 9,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      aux_sym_string_content_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE2,
    STATE(81), 1,
      aux_sym_string_content_repeat1,
    STATE(86), 1,
      sym__field,
    STATE(96), 1,
      sym__simple_field,
    STATE(30), 4,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1176] = 9,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      aux_sym_string_content_token1,
    ACTIONS(196), 1,
      anon_sym_DQUOTE2,
    STATE(81), 1,
      aux_sym_string_content_repeat1,
    STATE(86), 1,
      sym__field,
    STATE(96), 1,
      sym__simple_field,
    STATE(32), 4,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1207] = 4,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      sym_number,
    STATE(73), 1,
      sym_parenthesized_expression,
    ACTIONS(200), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1225] = 3,
    ACTIONS(206), 1,
      aux_sym_text_token1,
    STATE(38), 1,
      aux_sym_text_repeat1,
    ACTIONS(204), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
  [1240] = 3,
    ACTIONS(209), 1,
      aux_sym_text_token1,
    STATE(38), 1,
      aux_sym_text_repeat1,
    ACTIONS(200), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
  [1255] = 4,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      aux_sym_text_token1,
    STATE(40), 1,
      aux_sym_text_repeat1,
    ACTIONS(204), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
  [1272] = 4,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      aux_sym_text_token1,
    STATE(40), 1,
      aux_sym_text_repeat1,
    ACTIONS(200), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
  [1289] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1301] = 3,
    ACTIONS(224), 1,
      aux_sym_text_token1,
    STATE(52), 1,
      aux_sym_text_repeat1,
    ACTIONS(200), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1315] = 2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1327] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1339] = 2,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(200), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1351] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1363] = 3,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      sym_number,
    ACTIONS(200), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1377] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1389] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1401] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1413] = 3,
    ACTIONS(252), 1,
      aux_sym_text_token1,
    STATE(52), 1,
      aux_sym_text_repeat1,
    ACTIONS(204), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1427] = 1,
    ACTIONS(200), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1437] = 2,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1449] = 2,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1461] = 2,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1473] = 2,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1485] = 2,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1497] = 1,
    ACTIONS(275), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1507] = 2,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1519] = 1,
    ACTIONS(281), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1529] = 1,
    ACTIONS(242), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1539] = 1,
    ACTIONS(273), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1549] = 2,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1561] = 1,
    ACTIONS(257), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1571] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1583] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1595] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_text_token1,
  [1607] = 1,
    ACTIONS(273), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1616] = 1,
    ACTIONS(285), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1625] = 5,
    ACTIONS(295), 1,
      aux_sym_local_definition_token1,
    ACTIONS(297), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(299), 1,
      aux_sym_local_variables_token1,
    STATE(102), 1,
      aux_sym_local_variables_repeat2,
    STATE(72), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [1642] = 5,
    ACTIONS(295), 1,
      aux_sym_local_definition_token1,
    ACTIONS(299), 1,
      aux_sym_local_variables_token1,
    ACTIONS(301), 1,
      anon_sym_DASH_STAR_DASH,
    STATE(104), 1,
      aux_sym_local_variables_repeat2,
    STATE(90), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [1659] = 1,
    ACTIONS(303), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1668] = 1,
    ACTIONS(275), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1677] = 4,
    ACTIONS(307), 1,
      aux_sym_string_content_token1,
    ACTIONS(310), 1,
      anon_sym_DQUOTE2,
    STATE(75), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(305), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
  [1692] = 1,
    ACTIONS(269), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1701] = 1,
    ACTIONS(265), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1710] = 1,
    ACTIONS(257), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1719] = 1,
    ACTIONS(242), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1728] = 1,
    ACTIONS(281), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1737] = 4,
    ACTIONS(314), 1,
      aux_sym_string_content_token1,
    ACTIONS(316), 1,
      anon_sym_DQUOTE2,
    STATE(75), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(312), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
  [1752] = 1,
    ACTIONS(261), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1761] = 1,
    ACTIONS(279), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1770] = 1,
    ACTIONS(222), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1779] = 1,
    ACTIONS(222), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1788] = 2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE2,
    ACTIONS(222), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
  [1798] = 2,
    ACTIONS(267), 1,
      anon_sym_DQUOTE2,
    ACTIONS(269), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
  [1808] = 3,
    ACTIONS(318), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym_header_end,
    STATE(100), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [1820] = 3,
    ACTIONS(318), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_header_end,
    STATE(100), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [1832] = 3,
    ACTIONS(320), 1,
      aux_sym_local_definition_token1,
    ACTIONS(323), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(90), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [1844] = 3,
    ACTIONS(295), 1,
      aux_sym_local_definition_token1,
    ACTIONS(325), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(90), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [1856] = 2,
    ACTIONS(277), 1,
      anon_sym_DQUOTE2,
    ACTIONS(279), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
  [1866] = 2,
    ACTIONS(283), 1,
      anon_sym_DQUOTE2,
    ACTIONS(285), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
  [1876] = 3,
    ACTIONS(295), 1,
      aux_sym_local_definition_token1,
    ACTIONS(327), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(91), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [1888] = 2,
    ACTIONS(259), 1,
      anon_sym_DQUOTE2,
    ACTIONS(261), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
  [1898] = 2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE2,
    ACTIONS(222), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
  [1908] = 2,
    ACTIONS(263), 1,
      anon_sym_DQUOTE2,
    ACTIONS(265), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
  [1918] = 2,
    ACTIONS(255), 1,
      anon_sym_DQUOTE2,
    ACTIONS(257), 4,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
  [1928] = 2,
    ACTIONS(329), 1,
      anon_sym_POUND,
    STATE(89), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [1937] = 2,
    ACTIONS(331), 1,
      anon_sym_POUND,
    STATE(100), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [1946] = 1,
    ACTIONS(334), 3,
      aux_sym_local_definition_token1,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
  [1952] = 3,
    ACTIONS(336), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(338), 1,
      aux_sym_local_variables_token1,
    STATE(103), 1,
      aux_sym_local_variables_repeat2,
  [1962] = 3,
    ACTIONS(340), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(342), 1,
      aux_sym_local_variables_token1,
    STATE(103), 1,
      aux_sym_local_variables_repeat2,
  [1972] = 3,
    ACTIONS(338), 1,
      aux_sym_local_variables_token1,
    ACTIONS(345), 1,
      anon_sym_DASH_STAR_DASH,
    STATE(103), 1,
      aux_sym_local_variables_repeat2,
  [1982] = 3,
    ACTIONS(347), 1,
      anon_sym_POUND,
    ACTIONS(349), 1,
      aux_sym_comment_token1,
    STATE(105), 1,
      aux_sym_comment_repeat1,
  [1992] = 3,
    ACTIONS(352), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      aux_sym_comment_token1,
    STATE(105), 1,
      aux_sym_comment_repeat1,
  [2002] = 1,
    ACTIONS(356), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2007] = 1,
    ACTIONS(358), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2012] = 1,
    ACTIONS(360), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2017] = 1,
    ACTIONS(362), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2022] = 1,
    ACTIONS(364), 1,
      anon_sym_COLON,
  [2026] = 1,
    ACTIONS(366), 1,
      anon_sym_COLON,
  [2030] = 1,
    ACTIONS(368), 1,
      aux_sym_local_definition_token2,
  [2034] = 1,
    ACTIONS(370), 1,
      anon_sym_POUND,
  [2038] = 1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
  [2042] = 1,
    ACTIONS(374), 1,
      sym_value,
  [2046] = 1,
    ACTIONS(376), 1,
      anon_sym_POUND,
  [2050] = 1,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [2054] = 1,
    ACTIONS(380), 1,
      anon_sym_COLON,
  [2058] = 1,
    ACTIONS(382), 1,
      sym_number,
  [2062] = 1,
    ACTIONS(384), 1,
      anon_sym_POUND,
  [2066] = 1,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
  [2070] = 1,
    ACTIONS(388), 1,
      anon_sym_POUND,
  [2074] = 1,
    ACTIONS(390), 1,
      anon_sym_COLON,
  [2078] = 1,
    ACTIONS(392), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 159,
  [SMALL_STATE(7)] = 198,
  [SMALL_STATE(8)] = 237,
  [SMALL_STATE(9)] = 276,
  [SMALL_STATE(10)] = 315,
  [SMALL_STATE(11)] = 351,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 459,
  [SMALL_STATE(15)] = 495,
  [SMALL_STATE(16)] = 531,
  [SMALL_STATE(17)] = 567,
  [SMALL_STATE(18)] = 603,
  [SMALL_STATE(19)] = 639,
  [SMALL_STATE(20)] = 675,
  [SMALL_STATE(21)] = 711,
  [SMALL_STATE(22)] = 747,
  [SMALL_STATE(23)] = 780,
  [SMALL_STATE(24)] = 807,
  [SMALL_STATE(25)] = 834,
  [SMALL_STATE(26)] = 867,
  [SMALL_STATE(27)] = 900,
  [SMALL_STATE(28)] = 933,
  [SMALL_STATE(29)] = 966,
  [SMALL_STATE(30)] = 990,
  [SMALL_STATE(31)] = 1021,
  [SMALL_STATE(32)] = 1052,
  [SMALL_STATE(33)] = 1083,
  [SMALL_STATE(34)] = 1114,
  [SMALL_STATE(35)] = 1145,
  [SMALL_STATE(36)] = 1176,
  [SMALL_STATE(37)] = 1207,
  [SMALL_STATE(38)] = 1225,
  [SMALL_STATE(39)] = 1240,
  [SMALL_STATE(40)] = 1255,
  [SMALL_STATE(41)] = 1272,
  [SMALL_STATE(42)] = 1289,
  [SMALL_STATE(43)] = 1301,
  [SMALL_STATE(44)] = 1315,
  [SMALL_STATE(45)] = 1327,
  [SMALL_STATE(46)] = 1339,
  [SMALL_STATE(47)] = 1351,
  [SMALL_STATE(48)] = 1363,
  [SMALL_STATE(49)] = 1377,
  [SMALL_STATE(50)] = 1389,
  [SMALL_STATE(51)] = 1401,
  [SMALL_STATE(52)] = 1413,
  [SMALL_STATE(53)] = 1427,
  [SMALL_STATE(54)] = 1437,
  [SMALL_STATE(55)] = 1449,
  [SMALL_STATE(56)] = 1461,
  [SMALL_STATE(57)] = 1473,
  [SMALL_STATE(58)] = 1485,
  [SMALL_STATE(59)] = 1497,
  [SMALL_STATE(60)] = 1507,
  [SMALL_STATE(61)] = 1519,
  [SMALL_STATE(62)] = 1529,
  [SMALL_STATE(63)] = 1539,
  [SMALL_STATE(64)] = 1549,
  [SMALL_STATE(65)] = 1561,
  [SMALL_STATE(66)] = 1571,
  [SMALL_STATE(67)] = 1583,
  [SMALL_STATE(68)] = 1595,
  [SMALL_STATE(69)] = 1607,
  [SMALL_STATE(70)] = 1616,
  [SMALL_STATE(71)] = 1625,
  [SMALL_STATE(72)] = 1642,
  [SMALL_STATE(73)] = 1659,
  [SMALL_STATE(74)] = 1668,
  [SMALL_STATE(75)] = 1677,
  [SMALL_STATE(76)] = 1692,
  [SMALL_STATE(77)] = 1701,
  [SMALL_STATE(78)] = 1710,
  [SMALL_STATE(79)] = 1719,
  [SMALL_STATE(80)] = 1728,
  [SMALL_STATE(81)] = 1737,
  [SMALL_STATE(82)] = 1752,
  [SMALL_STATE(83)] = 1761,
  [SMALL_STATE(84)] = 1770,
  [SMALL_STATE(85)] = 1779,
  [SMALL_STATE(86)] = 1788,
  [SMALL_STATE(87)] = 1798,
  [SMALL_STATE(88)] = 1808,
  [SMALL_STATE(89)] = 1820,
  [SMALL_STATE(90)] = 1832,
  [SMALL_STATE(91)] = 1844,
  [SMALL_STATE(92)] = 1856,
  [SMALL_STATE(93)] = 1866,
  [SMALL_STATE(94)] = 1876,
  [SMALL_STATE(95)] = 1888,
  [SMALL_STATE(96)] = 1898,
  [SMALL_STATE(97)] = 1908,
  [SMALL_STATE(98)] = 1918,
  [SMALL_STATE(99)] = 1928,
  [SMALL_STATE(100)] = 1937,
  [SMALL_STATE(101)] = 1946,
  [SMALL_STATE(102)] = 1952,
  [SMALL_STATE(103)] = 1962,
  [SMALL_STATE(104)] = 1972,
  [SMALL_STATE(105)] = 1982,
  [SMALL_STATE(106)] = 1992,
  [SMALL_STATE(107)] = 2002,
  [SMALL_STATE(108)] = 2007,
  [SMALL_STATE(109)] = 2012,
  [SMALL_STATE(110)] = 2017,
  [SMALL_STATE(111)] = 2022,
  [SMALL_STATE(112)] = 2026,
  [SMALL_STATE(113)] = 2030,
  [SMALL_STATE(114)] = 2034,
  [SMALL_STATE(115)] = 2038,
  [SMALL_STATE(116)] = 2042,
  [SMALL_STATE(117)] = 2046,
  [SMALL_STATE(118)] = 2050,
  [SMALL_STATE(119)] = 2054,
  [SMALL_STATE(120)] = 2058,
  [SMALL_STATE(121)] = 2062,
  [SMALL_STATE(122)] = 2066,
  [SMALL_STATE(123)] = 2070,
  [SMALL_STATE(124)] = 2074,
  [SMALL_STATE(125)] = 2078,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__field_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, 0, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, 0, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_end, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_end, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 7, 0, 6),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 7, 0, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 6, 0, 6),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 6, 0, 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 6, 0, 5),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 6, 0, 5),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_field, 2, 0, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_field, 2, 0, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 5, 0, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 5, 0, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 4, 0, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field, 4, 0, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 5, 0, 5),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 5, 0, 5),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elisp_code, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat1, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat2, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_definition, 3, 0, 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0), SHIFT_REPEAT(94),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 4, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 5, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
