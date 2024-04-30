#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 149
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 8

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
  anon_sym_BQUOTE = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_DOLLAR = 23,
  anon_sym_DOLLAR_LBRACE = 24,
  anon_sym_RBRACE = 25,
  anon_sym_BSLASH = 26,
  aux_sym_escape_sequence_token1 = 27,
  aux_sym_escape_sequence_token2 = 28,
  aux_sym_string_content_token1 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_code_string_token1 = 31,
  anon_sym_DQUOTE2 = 32,
  sym_number = 33,
  aux_sym_text_token1 = 34,
  sym_source_file = 35,
  sym_header = 36,
  sym_header_end = 37,
  sym_local_definition = 38,
  sym_local_variables = 39,
  sym_comment = 40,
  sym_directive = 41,
  sym_key = 42,
  sym_snippet = 43,
  sym__simple_expression = 44,
  sym__field_expression = 45,
  sym__code_expression = 46,
  sym_backquote_expression = 47,
  sym_parenthesized_expression = 48,
  sym_field = 49,
  sym__simple_field = 50,
  sym__field_with_default = 51,
  sym_mirror = 52,
  sym_elisp_code = 53,
  sym_escape_sequence = 54,
  sym_string_content = 55,
  sym_code_string = 56,
  sym_string = 57,
  sym_text = 58,
  aux_sym_header_repeat1 = 59,
  aux_sym_local_variables_repeat1 = 60,
  aux_sym_local_variables_repeat2 = 61,
  aux_sym_comment_repeat1 = 62,
  aux_sym_snippet_repeat1 = 63,
  aux_sym_parenthesized_expression_repeat1 = 64,
  aux_sym__field_with_default_repeat1 = 65,
  aux_sym_string_content_repeat1 = 66,
  aux_sym_code_string_repeat1 = 67,
  aux_sym_string_repeat1 = 68,
  aux_sym_text_repeat1 = 69,
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
  [anon_sym_BQUOTE] = "`",
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
  [aux_sym_code_string_token1] = "escape_sequence",
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
  [sym__simple_expression] = "_simple_expression",
  [sym__field_expression] = "_field_expression",
  [sym__code_expression] = "_code_expression",
  [sym_backquote_expression] = "backquote_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_field] = "field",
  [sym__simple_field] = "_simple_field",
  [sym__field_with_default] = "_field_with_default",
  [sym_mirror] = "mirror",
  [sym_elisp_code] = "elisp_code",
  [sym_escape_sequence] = "escape_sequence",
  [sym_string_content] = "string_content",
  [sym_code_string] = "string",
  [sym_string] = "string",
  [sym_text] = "text",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_local_variables_repeat1] = "local_variables_repeat1",
  [aux_sym_local_variables_repeat2] = "local_variables_repeat2",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_snippet_repeat1] = "snippet_repeat1",
  [aux_sym_parenthesized_expression_repeat1] = "parenthesized_expression_repeat1",
  [aux_sym__field_with_default_repeat1] = "_field_with_default_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_code_string_repeat1] = "code_string_repeat1",
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
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
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
  [aux_sym_code_string_token1] = sym_escape_sequence,
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
  [sym__simple_expression] = sym__simple_expression,
  [sym__field_expression] = sym__field_expression,
  [sym__code_expression] = sym__code_expression,
  [sym_backquote_expression] = sym_backquote_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_field] = sym_field,
  [sym__simple_field] = sym__simple_field,
  [sym__field_with_default] = sym__field_with_default,
  [sym_mirror] = sym_mirror,
  [sym_elisp_code] = sym_elisp_code,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_string_content] = sym_string_content,
  [sym_code_string] = sym_string,
  [sym_string] = sym_string,
  [sym_text] = sym_text,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_local_variables_repeat1] = aux_sym_local_variables_repeat1,
  [aux_sym_local_variables_repeat2] = aux_sym_local_variables_repeat2,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_snippet_repeat1] = aux_sym_snippet_repeat1,
  [aux_sym_parenthesized_expression_repeat1] = aux_sym_parenthesized_expression_repeat1,
  [aux_sym__field_with_default_repeat1] = aux_sym__field_with_default_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_code_string_repeat1] = aux_sym_code_string_repeat1,
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
  [anon_sym_BQUOTE] = {
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
  [aux_sym_code_string_token1] = {
    .visible = true,
    .named = true,
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
  [sym__simple_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__field_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__code_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_backquote_expression] = {
    .visible = true,
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
  [sym__field_with_default] = {
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
  [sym_code_string] = {
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
  [aux_sym__field_with_default_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_string_repeat1] = {
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
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
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
    {field_code, 1},
  [5] =
    {field_name, 0},
    {field_value, 2},
  [7] =
    {field_code, 3},
    {field_index, 1},
  [9] =
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
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 10,
  [16] = 13,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 30,
  [34] = 32,
  [35] = 32,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 37,
  [40] = 37,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 45,
  [52] = 52,
  [53] = 44,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 48,
  [63] = 42,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 66,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 54,
  [75] = 60,
  [76] = 59,
  [77] = 72,
  [78] = 64,
  [79] = 55,
  [80] = 73,
  [81] = 64,
  [82] = 82,
  [83] = 83,
  [84] = 71,
  [85] = 55,
  [86] = 66,
  [87] = 87,
  [88] = 88,
  [89] = 67,
  [90] = 90,
  [91] = 56,
  [92] = 59,
  [93] = 60,
  [94] = 72,
  [95] = 73,
  [96] = 54,
  [97] = 65,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 69,
  [103] = 103,
  [104] = 104,
  [105] = 52,
  [106] = 106,
  [107] = 46,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 72,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 48,
  [117] = 42,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 122,
  [124] = 122,
  [125] = 122,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 69,
  [132] = 132,
  [133] = 133,
  [134] = 103,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 65,
  [140] = 101,
  [141] = 141,
  [142] = 132,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 132,
  [147] = 135,
  [148] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(71);
      ADVANCE_MAP(
        '"', 137,
        '#', 72,
        '$', 124,
        '(', 121,
        ')', 122,
        '-', 17,
        ':', 79,
        ';', 84,
        '\\', 127,
        '`', 120,
        'b', 34,
        'c', 48,
        'e', 63,
        'g', 54,
        'k', 29,
        'n', 22,
        't', 65,
        'u', 59,
        '{', 131,
        '}', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(96);
      if (lookahead == 'k') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(96);
      if (lookahead == 'k') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(96);
      if (lookahead == 'k') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(128);
      if (lookahead == '`') ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '`') ADVANCE(120);
      if (lookahead == '}') ADVANCE(126);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '`') ADVANCE(120);
      if (lookahead == '}') ADVANCE(126);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '`') ADVANCE(120);
      if (lookahead == '}') ADVANCE(126);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '`') ADVANCE(120);
      if (lookahead == '}') ADVANCE(126);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 16:
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(120);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 63:
      if (lookahead == 'x') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'y') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 66:
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 68:
      if (eof) ADVANCE(71);
      ADVANCE_MAP(
        '"', 135,
        '#', 72,
        '$', 124,
        '(', 121,
        ')', 122,
        '-', 17,
        ':', 79,
        ';', 84,
        '\\', 127,
        '`', 120,
        'b', 34,
        'c', 48,
        'e', 63,
        'g', 54,
        'k', 29,
        'n', 22,
        't', 65,
        'u', 59,
        '{', 131,
        '}', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 69:
      if (eof) ADVANCE(71);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '`') ADVANCE(120);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '`') ADVANCE(120);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_local_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_local_definition_token2);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_local_definition_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH_STAR_DASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH_STAR_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(78);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_local_variables_token1);
      if (lookahead == ';') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '#', 72,
        '-', 90,
        'b', 94,
        'c', 95,
        'e', 98,
        'g', 96,
        'k', 93,
        'n', 92,
        't', 99,
        'u', 97,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '#', 72,
        '-', 91,
        'b', 94,
        'c', 95,
        'e', 98,
        'g', 96,
        'k', 93,
        'n', 92,
        't', 99,
        'u', 97,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(85);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '#', 72,
        'b', 94,
        'c', 95,
        'e', 98,
        'g', 96,
        'k', 93,
        'n', 92,
        't', 99,
        'u', 97,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(85);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(85);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_condition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_contributor);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_binding);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_binding);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_expand_DASHenv);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_expand_DASHenv);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (lookahead == '(' ||
          lookahead == '{') ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '`') ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_code_string_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '`') ADVANCE(120);
      if (lookahead == '}') ADVANCE(126);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '`') ADVANCE(120);
      if (lookahead == '}') ADVANCE(126);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == '`') ADVANCE(120);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '`') ADVANCE(120);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
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
  [2] = {.lex_state = 70},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 70},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 70},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 70},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 69},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 70},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 70},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 70},
  [57] = {.lex_state = 70},
  [58] = {.lex_state = 70},
  [59] = {.lex_state = 70},
  [60] = {.lex_state = 70},
  [61] = {.lex_state = 70},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 70},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 70},
  [71] = {.lex_state = 70},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 70},
  [78] = {.lex_state = 70},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 70},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 70},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 70},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 70},
  [88] = {.lex_state = 70},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 70},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 21},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 16},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 66},
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
  [148] = {.lex_state = 0},
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
    [anon_sym_BQUOTE] = ACTIONS(1),
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
    [sym_source_file] = STATE(144),
    [sym_header] = STATE(2),
    [sym_local_variables] = STATE(111),
    [sym_comment] = STATE(106),
    [sym_directive] = STATE(106),
    [aux_sym_header_repeat1] = STATE(106),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_text_token1,
    STATE(42), 1,
      aux_sym_text_repeat1,
    STATE(59), 1,
      sym__simple_field,
    STATE(60), 1,
      sym__field_with_default,
    STATE(137), 1,
      sym_snippet,
    STATE(9), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [45] = 12,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(10), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [89] = 12,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_elisp_code,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(18), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [133] = 11,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(44), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(50), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      aux_sym_text_token1,
    STATE(42), 1,
      aux_sym_text_repeat1,
    STATE(59), 1,
      sym__simple_field,
    STATE(60), 1,
      sym__field_with_default,
    STATE(5), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [175] = 12,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      sym_number,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(17), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [219] = 12,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      sym_number,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [263] = 12,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_elisp_code,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(4), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [307] = 11,
    ACTIONS(7), 1,
      anon_sym_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_text_token1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      aux_sym_text_repeat1,
    STATE(59), 1,
      sym__simple_field,
    STATE(60), 1,
      sym__field_with_default,
    STATE(5), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [349] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(18), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [390] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(16), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [431] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(13), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [472] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(18), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [513] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(21), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [554] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(18), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [595] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(18), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [636] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(18), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [677] = 11,
    ACTIONS(87), 1,
      anon_sym_BQUOTE,
    ACTIONS(90), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      anon_sym_BSLASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_text_token1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(18), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [718] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(18), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [759] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(19), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [800] = 11,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(18), 8,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [841] = 11,
    ACTIONS(113), 1,
      anon_sym_BQUOTE,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(122), 1,
      anon_sym_BSLASH,
    ACTIONS(125), 1,
      aux_sym_string_content_token1,
    ACTIONS(128), 1,
      aux_sym_code_string_token1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE2,
    STATE(46), 1,
      aux_sym_string_content_repeat1,
    STATE(75), 1,
      sym__field_with_default,
    STATE(76), 1,
      sym__simple_field,
    STATE(22), 5,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [879] = 11,
    ACTIONS(133), 1,
      anon_sym_BQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    ACTIONS(141), 1,
      aux_sym_string_content_token1,
    ACTIONS(143), 1,
      aux_sym_code_string_token1,
    ACTIONS(145), 1,
      anon_sym_DQUOTE2,
    STATE(46), 1,
      aux_sym_string_content_repeat1,
    STATE(75), 1,
      sym__field_with_default,
    STATE(76), 1,
      sym__simple_field,
    STATE(25), 5,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [917] = 11,
    ACTIONS(133), 1,
      anon_sym_BQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    ACTIONS(141), 1,
      aux_sym_string_content_token1,
    ACTIONS(147), 1,
      aux_sym_code_string_token1,
    ACTIONS(149), 1,
      anon_sym_DQUOTE2,
    STATE(46), 1,
      aux_sym_string_content_repeat1,
    STATE(75), 1,
      sym__field_with_default,
    STATE(76), 1,
      sym__simple_field,
    STATE(22), 5,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [955] = 11,
    ACTIONS(133), 1,
      anon_sym_BQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    ACTIONS(141), 1,
      aux_sym_string_content_token1,
    ACTIONS(147), 1,
      aux_sym_code_string_token1,
    ACTIONS(151), 1,
      anon_sym_DQUOTE2,
    STATE(46), 1,
      aux_sym_string_content_repeat1,
    STATE(75), 1,
      sym__field_with_default,
    STATE(76), 1,
      sym__simple_field,
    STATE(22), 5,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [993] = 11,
    ACTIONS(133), 1,
      anon_sym_BQUOTE,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    ACTIONS(141), 1,
      aux_sym_string_content_token1,
    ACTIONS(153), 1,
      aux_sym_code_string_token1,
    ACTIONS(155), 1,
      anon_sym_DQUOTE2,
    STATE(46), 1,
      aux_sym_string_content_repeat1,
    STATE(75), 1,
      sym__field_with_default,
    STATE(76), 1,
      sym__simple_field,
    STATE(24), 5,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1031] = 6,
    ACTIONS(157), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(161), 1,
      aux_sym_comment_token1,
    STATE(119), 1,
      aux_sym_comment_repeat1,
    STATE(141), 1,
      sym_key,
    ACTIONS(163), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [1058] = 6,
    ACTIONS(157), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      aux_sym_comment_token1,
    ACTIONS(165), 1,
      anon_sym_DASH_DASH,
    STATE(119), 1,
      aux_sym_comment_repeat1,
    STATE(141), 1,
      sym_key,
    ACTIONS(163), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [1085] = 5,
    ACTIONS(157), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      aux_sym_comment_token1,
    STATE(119), 1,
      aux_sym_comment_repeat1,
    STATE(141), 1,
      sym_key,
    ACTIONS(163), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [1109] = 8,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_number,
    ACTIONS(177), 1,
      aux_sym_text_token1,
    STATE(63), 1,
      aux_sym_text_repeat1,
    STATE(35), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1138] = 8,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_text_token1,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 1,
      sym_number,
    STATE(63), 1,
      aux_sym_text_repeat1,
    STATE(34), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1167] = 8,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_text_token1,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      sym_number,
    STATE(63), 1,
      aux_sym_text_repeat1,
    STATE(36), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1196] = 8,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_text_token1,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      sym_number,
    STATE(63), 1,
      aux_sym_text_repeat1,
    STATE(32), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1225] = 8,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_text_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_text_repeat1,
    STATE(36), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1254] = 8,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_text_token1,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_text_repeat1,
    STATE(36), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1283] = 8,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(209), 1,
      aux_sym_text_token1,
    STATE(63), 1,
      aux_sym_text_repeat1,
    STATE(36), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1312] = 7,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_DOLLAR,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      sym_number,
    ACTIONS(220), 1,
      aux_sym_text_token1,
    STATE(117), 1,
      aux_sym_text_repeat1,
    STATE(142), 4,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
  [1337] = 4,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      sym_number,
    STATE(82), 1,
      sym_parenthesized_expression,
    ACTIONS(222), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1356] = 7,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_DOLLAR,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      aux_sym_text_token1,
    ACTIONS(228), 1,
      sym_number,
    STATE(117), 1,
      aux_sym_text_repeat1,
    STATE(146), 4,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
  [1381] = 7,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_DOLLAR,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      aux_sym_text_token1,
    ACTIONS(230), 1,
      sym_number,
    STATE(117), 1,
      aux_sym_text_repeat1,
    STATE(132), 4,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
  [1406] = 6,
    ACTIONS(232), 1,
      anon_sym_BSLASH,
    ACTIONS(234), 1,
      aux_sym_string_content_token1,
    ACTIONS(236), 1,
      aux_sym_code_string_token1,
    ACTIONS(238), 1,
      anon_sym_DQUOTE2,
    STATE(107), 1,
      aux_sym_string_content_repeat1,
    STATE(44), 3,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_code_string_repeat1,
  [1427] = 4,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      aux_sym_text_token1,
    STATE(49), 1,
      aux_sym_text_repeat1,
    ACTIONS(222), 5,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1444] = 6,
    ACTIONS(232), 1,
      anon_sym_BSLASH,
    ACTIONS(234), 1,
      aux_sym_string_content_token1,
    ACTIONS(244), 1,
      aux_sym_code_string_token1,
    ACTIONS(246), 1,
      anon_sym_DQUOTE2,
    STATE(107), 1,
      aux_sym_string_content_repeat1,
    STATE(53), 3,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_code_string_repeat1,
  [1465] = 6,
    ACTIONS(232), 1,
      anon_sym_BSLASH,
    ACTIONS(234), 1,
      aux_sym_string_content_token1,
    ACTIONS(248), 1,
      aux_sym_code_string_token1,
    ACTIONS(250), 1,
      anon_sym_DQUOTE2,
    STATE(107), 1,
      aux_sym_string_content_repeat1,
    STATE(50), 3,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_code_string_repeat1,
  [1486] = 3,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      sym_number,
    ACTIONS(222), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1501] = 4,
    ACTIONS(256), 1,
      aux_sym_string_content_token1,
    ACTIONS(258), 1,
      anon_sym_DQUOTE2,
    STATE(52), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(254), 5,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_code_string_token1,
  [1518] = 3,
    ACTIONS(260), 1,
      aux_sym_text_token1,
    STATE(48), 1,
      aux_sym_text_repeat1,
    ACTIONS(222), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1533] = 3,
    ACTIONS(264), 1,
      aux_sym_text_token1,
    STATE(48), 1,
      aux_sym_text_repeat1,
    ACTIONS(262), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1548] = 4,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      aux_sym_text_token1,
    STATE(49), 1,
      aux_sym_text_repeat1,
    ACTIONS(262), 5,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1565] = 6,
    ACTIONS(272), 1,
      anon_sym_BSLASH,
    ACTIONS(275), 1,
      aux_sym_string_content_token1,
    ACTIONS(278), 1,
      aux_sym_code_string_token1,
    ACTIONS(281), 1,
      anon_sym_DQUOTE2,
    STATE(107), 1,
      aux_sym_string_content_repeat1,
    STATE(50), 3,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_code_string_repeat1,
  [1586] = 2,
    ACTIONS(226), 1,
      sym_number,
    ACTIONS(222), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1599] = 4,
    ACTIONS(285), 1,
      aux_sym_string_content_token1,
    ACTIONS(288), 1,
      anon_sym_DQUOTE2,
    STATE(52), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(283), 5,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_code_string_token1,
  [1616] = 6,
    ACTIONS(232), 1,
      anon_sym_BSLASH,
    ACTIONS(234), 1,
      aux_sym_string_content_token1,
    ACTIONS(248), 1,
      aux_sym_code_string_token1,
    ACTIONS(290), 1,
      anon_sym_DQUOTE2,
    STATE(107), 1,
      aux_sym_string_content_repeat1,
    STATE(50), 3,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_code_string_repeat1,
  [1637] = 2,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1649] = 2,
    ACTIONS(298), 1,
      anon_sym_DQUOTE2,
    ACTIONS(296), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1661] = 2,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1673] = 2,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1685] = 2,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1697] = 2,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1709] = 2,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1721] = 2,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1733] = 4,
    ACTIONS(267), 1,
      sym_number,
    ACTIONS(320), 1,
      aux_sym_text_token1,
    STATE(62), 1,
      aux_sym_text_repeat1,
    ACTIONS(262), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [1749] = 4,
    ACTIONS(240), 1,
      sym_number,
    ACTIONS(323), 1,
      aux_sym_text_token1,
    STATE(62), 1,
      aux_sym_text_repeat1,
    ACTIONS(222), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [1765] = 2,
    ACTIONS(327), 1,
      anon_sym_DQUOTE2,
    ACTIONS(325), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1777] = 1,
    ACTIONS(329), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1787] = 2,
    ACTIONS(333), 1,
      anon_sym_DQUOTE2,
    ACTIONS(331), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1799] = 2,
    ACTIONS(337), 1,
      anon_sym_DQUOTE2,
    ACTIONS(335), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1811] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1823] = 1,
    ACTIONS(339), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1833] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1845] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1857] = 2,
    ACTIONS(347), 1,
      anon_sym_DQUOTE2,
    ACTIONS(345), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1869] = 2,
    ACTIONS(351), 1,
      anon_sym_DQUOTE2,
    ACTIONS(349), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1881] = 2,
    ACTIONS(292), 1,
      anon_sym_DQUOTE2,
    ACTIONS(294), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1893] = 2,
    ACTIONS(312), 1,
      anon_sym_DQUOTE2,
    ACTIONS(314), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1905] = 2,
    ACTIONS(312), 1,
      anon_sym_DQUOTE2,
    ACTIONS(314), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1917] = 2,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1929] = 2,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1941] = 1,
    ACTIONS(296), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1951] = 2,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1963] = 1,
    ACTIONS(325), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1973] = 1,
    ACTIONS(353), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1983] = 2,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1995] = 1,
    ACTIONS(343), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2005] = 2,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2017] = 1,
    ACTIONS(331), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2027] = 2,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2039] = 2,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    ACTIONS(365), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2051] = 1,
    ACTIONS(335), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2061] = 2,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2073] = 1,
    ACTIONS(302), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2083] = 1,
    ACTIONS(314), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2093] = 1,
    ACTIONS(314), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2103] = 1,
    ACTIONS(345), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2113] = 1,
    ACTIONS(349), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2123] = 1,
    ACTIONS(294), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2133] = 2,
    ACTIONS(371), 1,
      sym_number,
    ACTIONS(329), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2144] = 2,
    ACTIONS(240), 1,
      sym_number,
    ACTIONS(222), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2155] = 5,
    ACTIONS(373), 1,
      aux_sym_local_definition_token1,
    ACTIONS(375), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(377), 1,
      aux_sym_local_variables_token1,
    STATE(118), 1,
      aux_sym_local_variables_repeat2,
    STATE(108), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [2172] = 5,
    ACTIONS(373), 1,
      aux_sym_local_definition_token1,
    ACTIONS(377), 1,
      aux_sym_local_variables_token1,
    ACTIONS(379), 1,
      anon_sym_DASH_STAR_DASH,
    STATE(121), 1,
      aux_sym_local_variables_repeat2,
    STATE(99), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [2189] = 2,
    ACTIONS(383), 1,
      sym_number,
    ACTIONS(381), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2200] = 2,
    ACTIONS(385), 1,
      sym_number,
    ACTIONS(339), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2211] = 2,
    ACTIONS(389), 1,
      sym_number,
    ACTIONS(387), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2222] = 3,
    ACTIONS(373), 1,
      aux_sym_local_definition_token1,
    ACTIONS(391), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(109), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [2234] = 4,
    ACTIONS(288), 1,
      anon_sym_DQUOTE2,
    ACTIONS(393), 1,
      aux_sym_string_content_token1,
    STATE(105), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(283), 2,
      anon_sym_BSLASH,
      aux_sym_code_string_token1,
  [2248] = 3,
    ACTIONS(396), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_header_end,
    STATE(113), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [2260] = 4,
    ACTIONS(258), 1,
      anon_sym_DQUOTE2,
    ACTIONS(398), 1,
      aux_sym_string_content_token1,
    STATE(105), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(254), 2,
      anon_sym_BSLASH,
      aux_sym_code_string_token1,
  [2274] = 3,
    ACTIONS(400), 1,
      aux_sym_local_definition_token1,
    ACTIONS(403), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(108), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [2286] = 3,
    ACTIONS(373), 1,
      aux_sym_local_definition_token1,
    ACTIONS(405), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(108), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [2298] = 3,
    ACTIONS(396), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_header_end,
    STATE(113), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [2310] = 2,
    ACTIONS(407), 1,
      anon_sym_POUND,
    STATE(110), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [2319] = 2,
    ACTIONS(345), 2,
      anon_sym_BSLASH,
      aux_sym_code_string_token1,
    ACTIONS(347), 2,
      aux_sym_string_content_token1,
      anon_sym_DQUOTE2,
  [2328] = 2,
    ACTIONS(409), 1,
      anon_sym_POUND,
    STATE(113), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [2337] = 3,
    ACTIONS(412), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(414), 1,
      aux_sym_local_variables_token1,
    STATE(114), 1,
      aux_sym_local_variables_repeat2,
  [2347] = 3,
    ACTIONS(417), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      aux_sym_comment_token1,
    STATE(115), 1,
      aux_sym_comment_repeat1,
  [2357] = 3,
    ACTIONS(262), 1,
      anon_sym_BQUOTE,
    ACTIONS(422), 1,
      aux_sym_text_token1,
    STATE(116), 1,
      aux_sym_text_repeat1,
  [2367] = 3,
    ACTIONS(222), 1,
      anon_sym_BQUOTE,
    ACTIONS(425), 1,
      aux_sym_text_token1,
    STATE(116), 1,
      aux_sym_text_repeat1,
  [2377] = 3,
    ACTIONS(427), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(429), 1,
      aux_sym_local_variables_token1,
    STATE(114), 1,
      aux_sym_local_variables_repeat2,
  [2387] = 3,
    ACTIONS(431), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      aux_sym_comment_token1,
    STATE(115), 1,
      aux_sym_comment_repeat1,
  [2397] = 1,
    ACTIONS(435), 3,
      aux_sym_local_definition_token1,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
  [2403] = 3,
    ACTIONS(429), 1,
      aux_sym_local_variables_token1,
    ACTIONS(437), 1,
      anon_sym_DASH_STAR_DASH,
    STATE(114), 1,
      aux_sym_local_variables_repeat2,
  [2413] = 1,
    ACTIONS(439), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2418] = 1,
    ACTIONS(441), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2423] = 1,
    ACTIONS(443), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2428] = 1,
    ACTIONS(445), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2433] = 1,
    ACTIONS(447), 1,
      anon_sym_POUND,
  [2437] = 1,
    ACTIONS(449), 1,
      sym_value,
  [2441] = 1,
    ACTIONS(451), 1,
      sym_number,
  [2445] = 1,
    ACTIONS(453), 1,
      anon_sym_POUND,
  [2449] = 1,
    ACTIONS(455), 1,
      anon_sym_COLON,
  [2453] = 1,
    ACTIONS(385), 1,
      anon_sym_BQUOTE,
  [2457] = 1,
    ACTIONS(457), 1,
      anon_sym_BQUOTE,
  [2461] = 1,
    ACTIONS(459), 1,
      anon_sym_POUND,
  [2465] = 1,
    ACTIONS(389), 1,
      anon_sym_BQUOTE,
  [2469] = 1,
    ACTIONS(461), 1,
      anon_sym_COLON,
  [2473] = 1,
    ACTIONS(463), 1,
      aux_sym_local_definition_token2,
  [2477] = 1,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
  [2481] = 1,
    ACTIONS(467), 1,
      anon_sym_POUND,
  [2485] = 1,
    ACTIONS(371), 1,
      anon_sym_BQUOTE,
  [2489] = 1,
    ACTIONS(383), 1,
      anon_sym_BQUOTE,
  [2493] = 1,
    ACTIONS(469), 1,
      anon_sym_COLON,
  [2497] = 1,
    ACTIONS(471), 1,
      anon_sym_BQUOTE,
  [2501] = 1,
    ACTIONS(473), 1,
      anon_sym_COLON,
  [2505] = 1,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [2509] = 1,
    ACTIONS(477), 1,
      anon_sym_COLON,
  [2513] = 1,
    ACTIONS(479), 1,
      anon_sym_BQUOTE,
  [2517] = 1,
    ACTIONS(481), 1,
      anon_sym_COLON,
  [2521] = 1,
    ACTIONS(240), 1,
      anon_sym_BQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 175,
  [SMALL_STATE(7)] = 219,
  [SMALL_STATE(8)] = 263,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 349,
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 431,
  [SMALL_STATE(13)] = 472,
  [SMALL_STATE(14)] = 513,
  [SMALL_STATE(15)] = 554,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 636,
  [SMALL_STATE(18)] = 677,
  [SMALL_STATE(19)] = 718,
  [SMALL_STATE(20)] = 759,
  [SMALL_STATE(21)] = 800,
  [SMALL_STATE(22)] = 841,
  [SMALL_STATE(23)] = 879,
  [SMALL_STATE(24)] = 917,
  [SMALL_STATE(25)] = 955,
  [SMALL_STATE(26)] = 993,
  [SMALL_STATE(27)] = 1031,
  [SMALL_STATE(28)] = 1058,
  [SMALL_STATE(29)] = 1085,
  [SMALL_STATE(30)] = 1109,
  [SMALL_STATE(31)] = 1138,
  [SMALL_STATE(32)] = 1167,
  [SMALL_STATE(33)] = 1196,
  [SMALL_STATE(34)] = 1225,
  [SMALL_STATE(35)] = 1254,
  [SMALL_STATE(36)] = 1283,
  [SMALL_STATE(37)] = 1312,
  [SMALL_STATE(38)] = 1337,
  [SMALL_STATE(39)] = 1356,
  [SMALL_STATE(40)] = 1381,
  [SMALL_STATE(41)] = 1406,
  [SMALL_STATE(42)] = 1427,
  [SMALL_STATE(43)] = 1444,
  [SMALL_STATE(44)] = 1465,
  [SMALL_STATE(45)] = 1486,
  [SMALL_STATE(46)] = 1501,
  [SMALL_STATE(47)] = 1518,
  [SMALL_STATE(48)] = 1533,
  [SMALL_STATE(49)] = 1548,
  [SMALL_STATE(50)] = 1565,
  [SMALL_STATE(51)] = 1586,
  [SMALL_STATE(52)] = 1599,
  [SMALL_STATE(53)] = 1616,
  [SMALL_STATE(54)] = 1637,
  [SMALL_STATE(55)] = 1649,
  [SMALL_STATE(56)] = 1661,
  [SMALL_STATE(57)] = 1673,
  [SMALL_STATE(58)] = 1685,
  [SMALL_STATE(59)] = 1697,
  [SMALL_STATE(60)] = 1709,
  [SMALL_STATE(61)] = 1721,
  [SMALL_STATE(62)] = 1733,
  [SMALL_STATE(63)] = 1749,
  [SMALL_STATE(64)] = 1765,
  [SMALL_STATE(65)] = 1777,
  [SMALL_STATE(66)] = 1787,
  [SMALL_STATE(67)] = 1799,
  [SMALL_STATE(68)] = 1811,
  [SMALL_STATE(69)] = 1823,
  [SMALL_STATE(70)] = 1833,
  [SMALL_STATE(71)] = 1845,
  [SMALL_STATE(72)] = 1857,
  [SMALL_STATE(73)] = 1869,
  [SMALL_STATE(74)] = 1881,
  [SMALL_STATE(75)] = 1893,
  [SMALL_STATE(76)] = 1905,
  [SMALL_STATE(77)] = 1917,
  [SMALL_STATE(78)] = 1929,
  [SMALL_STATE(79)] = 1941,
  [SMALL_STATE(80)] = 1951,
  [SMALL_STATE(81)] = 1963,
  [SMALL_STATE(82)] = 1973,
  [SMALL_STATE(83)] = 1983,
  [SMALL_STATE(84)] = 1995,
  [SMALL_STATE(85)] = 2005,
  [SMALL_STATE(86)] = 2017,
  [SMALL_STATE(87)] = 2027,
  [SMALL_STATE(88)] = 2039,
  [SMALL_STATE(89)] = 2051,
  [SMALL_STATE(90)] = 2061,
  [SMALL_STATE(91)] = 2073,
  [SMALL_STATE(92)] = 2083,
  [SMALL_STATE(93)] = 2093,
  [SMALL_STATE(94)] = 2103,
  [SMALL_STATE(95)] = 2113,
  [SMALL_STATE(96)] = 2123,
  [SMALL_STATE(97)] = 2133,
  [SMALL_STATE(98)] = 2144,
  [SMALL_STATE(99)] = 2155,
  [SMALL_STATE(100)] = 2172,
  [SMALL_STATE(101)] = 2189,
  [SMALL_STATE(102)] = 2200,
  [SMALL_STATE(103)] = 2211,
  [SMALL_STATE(104)] = 2222,
  [SMALL_STATE(105)] = 2234,
  [SMALL_STATE(106)] = 2248,
  [SMALL_STATE(107)] = 2260,
  [SMALL_STATE(108)] = 2274,
  [SMALL_STATE(109)] = 2286,
  [SMALL_STATE(110)] = 2298,
  [SMALL_STATE(111)] = 2310,
  [SMALL_STATE(112)] = 2319,
  [SMALL_STATE(113)] = 2328,
  [SMALL_STATE(114)] = 2337,
  [SMALL_STATE(115)] = 2347,
  [SMALL_STATE(116)] = 2357,
  [SMALL_STATE(117)] = 2367,
  [SMALL_STATE(118)] = 2377,
  [SMALL_STATE(119)] = 2387,
  [SMALL_STATE(120)] = 2397,
  [SMALL_STATE(121)] = 2403,
  [SMALL_STATE(122)] = 2413,
  [SMALL_STATE(123)] = 2418,
  [SMALL_STATE(124)] = 2423,
  [SMALL_STATE(125)] = 2428,
  [SMALL_STATE(126)] = 2433,
  [SMALL_STATE(127)] = 2437,
  [SMALL_STATE(128)] = 2441,
  [SMALL_STATE(129)] = 2445,
  [SMALL_STATE(130)] = 2449,
  [SMALL_STATE(131)] = 2453,
  [SMALL_STATE(132)] = 2457,
  [SMALL_STATE(133)] = 2461,
  [SMALL_STATE(134)] = 2465,
  [SMALL_STATE(135)] = 2469,
  [SMALL_STATE(136)] = 2473,
  [SMALL_STATE(137)] = 2477,
  [SMALL_STATE(138)] = 2481,
  [SMALL_STATE(139)] = 2485,
  [SMALL_STATE(140)] = 2489,
  [SMALL_STATE(141)] = 2493,
  [SMALL_STATE(142)] = 2497,
  [SMALL_STATE(143)] = 2501,
  [SMALL_STATE(144)] = 2505,
  [SMALL_STATE(145)] = 2509,
  [SMALL_STATE(146)] = 2513,
  [SMALL_STATE(147)] = 2517,
  [SMALL_STATE(148)] = 2521,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_string_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_string_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_string_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_string_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_field, 2, 0, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_field, 2, 0, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_with_default, 5, 0, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_with_default, 5, 0, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_end, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_end, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, 0, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, 0, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_with_default, 4, 0, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_with_default, 4, 0, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_with_default, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_with_default, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backquote_expression, 3, 0, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backquote_expression, 3, 0, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_with_default, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_with_default, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elisp_code, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 5, 0, 6),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 5, 0, 6),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 6, 0, 6),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 6, 0, 6),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 6, 0, 7),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 6, 0, 7),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 7, 0, 7),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 7, 0, 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_string, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_string, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat2, 1, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat1, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0), SHIFT_REPEAT(104),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_definition, 3, 0, 5),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 4, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 5, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
