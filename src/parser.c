#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 157
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
  [7] = 2,
  [8] = 3,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 10,
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 11,
  [22] = 13,
  [23] = 11,
  [24] = 24,
  [25] = 12,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 26,
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 34,
  [40] = 37,
  [41] = 41,
  [42] = 41,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 47,
  [51] = 51,
  [52] = 51,
  [53] = 48,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 46,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 48,
  [66] = 54,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 70,
  [73] = 71,
  [74] = 59,
  [75] = 75,
  [76] = 76,
  [77] = 58,
  [78] = 78,
  [79] = 68,
  [80] = 63,
  [81] = 81,
  [82] = 82,
  [83] = 62,
  [84] = 67,
  [85] = 76,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 78,
  [90] = 86,
  [91] = 88,
  [92] = 62,
  [93] = 63,
  [94] = 87,
  [95] = 67,
  [96] = 78,
  [97] = 58,
  [98] = 76,
  [99] = 99,
  [100] = 82,
  [101] = 68,
  [102] = 99,
  [103] = 71,
  [104] = 70,
  [105] = 69,
  [106] = 106,
  [107] = 107,
  [108] = 75,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 45,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 56,
  [119] = 76,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 48,
  [126] = 126,
  [127] = 54,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 130,
  [132] = 130,
  [133] = 130,
  [134] = 107,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 109,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 75,
  [147] = 69,
  [148] = 106,
  [149] = 149,
  [150] = 137,
  [151] = 151,
  [152] = 137,
  [153] = 153,
  [154] = 154,
  [155] = 144,
  [156] = 156,
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
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(85);
      END_STATE();
    case 87:
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
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 70},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 70},
  [20] = {.lex_state = 70},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 70},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 70},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 69},
  [58] = {.lex_state = 70},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 70},
  [61] = {.lex_state = 70},
  [62] = {.lex_state = 70},
  [63] = {.lex_state = 70},
  [64] = {.lex_state = 70},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 70},
  [72] = {.lex_state = 70},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 70},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 70},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 70},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 70},
  [85] = {.lex_state = 70},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 70},
  [88] = {.lex_state = 70},
  [89] = {.lex_state = 70},
  [90] = {.lex_state = 70},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 70},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 16},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 66},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
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
    [sym_source_file] = STATE(140),
    [sym_header] = STATE(5),
    [sym_local_variables] = STATE(120),
    [sym_comment] = STATE(112),
    [sym_directive] = STATE(112),
    [aux_sym_header_repeat1] = STATE(112),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(23), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [45] = 12,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_elisp_code,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [90] = 12,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_elisp_code,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(3), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [135] = 12,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(35), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_text_token1,
    STATE(54), 1,
      aux_sym_text_repeat1,
    STATE(62), 1,
      sym__simple_field,
    STATE(63), 1,
      sym__field_with_default,
    STATE(135), 1,
      sym_snippet,
    STATE(19), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [180] = 12,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_number,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(21), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [225] = 12,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_number,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(11), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [270] = 12,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_elisp_code,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [315] = 12,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_elisp_code,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(8), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [360] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [402] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [444] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [486] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(12), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [528] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(10), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [570] = 11,
    ACTIONS(63), 1,
      anon_sym_BQUOTE,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(69), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      aux_sym_text_token1,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [612] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [654] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [696] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(16), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [738] = 11,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(35), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_text_token1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym_text_repeat1,
    STATE(62), 1,
      sym__simple_field,
    STATE(63), 1,
      sym__field_with_default,
    STATE(20), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [780] = 11,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      anon_sym_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(102), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      aux_sym_text_token1,
    STATE(54), 1,
      aux_sym_text_repeat1,
    STATE(62), 1,
      sym__simple_field,
    STATE(63), 1,
      sym__field_with_default,
    STATE(20), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym_snippet_repeat1,
  [822] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [864] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(25), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [906] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [948] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(17), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [990] = 11,
    ACTIONS(5), 1,
      anon_sym_BQUOTE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_text_token1,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_text_repeat1,
    STATE(92), 1,
      sym__simple_field,
    STATE(93), 1,
      sym__field_with_default,
    STATE(15), 9,
      sym__simple_expression,
      sym__field_expression,
      sym_backquote_expression,
      sym_field,
      sym_mirror,
      sym_escape_sequence,
      sym_string,
      sym_text,
      aux_sym__field_with_default_repeat1,
  [1032] = 11,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(129), 1,
      aux_sym_string_content_token1,
    ACTIONS(131), 1,
      aux_sym_code_string_token1,
    ACTIONS(133), 1,
      anon_sym_DQUOTE2,
    STATE(45), 1,
      aux_sym_string_content_repeat1,
    STATE(80), 1,
      sym__field_with_default,
    STATE(83), 1,
      sym__simple_field,
    STATE(27), 5,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1070] = 11,
    ACTIONS(135), 1,
      anon_sym_BQUOTE,
    ACTIONS(138), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(144), 1,
      anon_sym_BSLASH,
    ACTIONS(147), 1,
      aux_sym_string_content_token1,
    ACTIONS(150), 1,
      aux_sym_code_string_token1,
    ACTIONS(153), 1,
      anon_sym_DQUOTE2,
    STATE(45), 1,
      aux_sym_string_content_repeat1,
    STATE(80), 1,
      sym__field_with_default,
    STATE(83), 1,
      sym__simple_field,
    STATE(27), 5,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1108] = 11,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(129), 1,
      aux_sym_string_content_token1,
    ACTIONS(155), 1,
      aux_sym_code_string_token1,
    ACTIONS(157), 1,
      anon_sym_DQUOTE2,
    STATE(45), 1,
      aux_sym_string_content_repeat1,
    STATE(80), 1,
      sym__field_with_default,
    STATE(83), 1,
      sym__simple_field,
    STATE(26), 5,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1146] = 11,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(129), 1,
      aux_sym_string_content_token1,
    ACTIONS(131), 1,
      aux_sym_code_string_token1,
    ACTIONS(159), 1,
      anon_sym_DQUOTE2,
    STATE(45), 1,
      aux_sym_string_content_repeat1,
    STATE(80), 1,
      sym__field_with_default,
    STATE(83), 1,
      sym__simple_field,
    STATE(27), 5,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1184] = 11,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(129), 1,
      aux_sym_string_content_token1,
    ACTIONS(161), 1,
      aux_sym_code_string_token1,
    ACTIONS(163), 1,
      anon_sym_DQUOTE2,
    STATE(45), 1,
      aux_sym_string_content_repeat1,
    STATE(80), 1,
      sym__field_with_default,
    STATE(83), 1,
      sym__simple_field,
    STATE(29), 5,
      sym_backquote_expression,
      sym_field,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_string_repeat1,
  [1222] = 6,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_DASH_DASH,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    STATE(123), 1,
      aux_sym_comment_repeat1,
    STATE(149), 1,
      sym_key,
    ACTIONS(171), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [1249] = 6,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    ACTIONS(173), 1,
      anon_sym_DASH_STAR_DASH,
    STATE(123), 1,
      aux_sym_comment_repeat1,
    STATE(149), 1,
      sym_key,
    ACTIONS(171), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [1276] = 5,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    STATE(123), 1,
      aux_sym_comment_repeat1,
    STATE(149), 1,
      sym_key,
    ACTIONS(171), 9,
      anon_sym_key,
      anon_sym_name,
      anon_sym_condition,
      anon_sym_contributor,
      anon_sym_binding,
      anon_sym_expand_DASHenv,
      anon_sym_uuid,
      anon_sym_group,
      anon_sym_type,
  [1300] = 8,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_number,
    ACTIONS(185), 1,
      aux_sym_text_token1,
    STATE(66), 1,
      aux_sym_text_repeat1,
    STATE(36), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1329] = 8,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_number,
    ACTIONS(185), 1,
      aux_sym_text_token1,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_text_repeat1,
    STATE(36), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1358] = 8,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    STATE(66), 1,
      aux_sym_text_repeat1,
    STATE(36), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1387] = 8,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      aux_sym_text_token1,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(208), 1,
      sym_number,
    STATE(66), 1,
      aux_sym_text_repeat1,
    STATE(34), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1416] = 8,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      aux_sym_text_token1,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(212), 1,
      sym_number,
    STATE(66), 1,
      aux_sym_text_repeat1,
    STATE(35), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1445] = 8,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_number,
    ACTIONS(185), 1,
      aux_sym_text_token1,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_text_repeat1,
    STATE(36), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1474] = 8,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      aux_sym_text_token1,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    ACTIONS(218), 1,
      sym_number,
    STATE(66), 1,
      aux_sym_text_repeat1,
    STATE(39), 5,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
      aux_sym_parenthesized_expression_repeat1,
  [1503] = 7,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_number,
    ACTIONS(228), 1,
      aux_sym_text_token1,
    STATE(127), 1,
      aux_sym_text_repeat1,
    STATE(152), 4,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
  [1528] = 7,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      aux_sym_text_token1,
    ACTIONS(230), 1,
      sym_number,
    STATE(127), 1,
      aux_sym_text_repeat1,
    STATE(150), 4,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
  [1553] = 7,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      aux_sym_text_token1,
    ACTIONS(232), 1,
      sym_number,
    STATE(127), 1,
      aux_sym_text_repeat1,
    STATE(137), 4,
      sym__code_expression,
      sym_parenthesized_expression,
      sym_code_string,
      sym_text,
  [1578] = 4,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      sym_number,
    STATE(81), 1,
      sym_parenthesized_expression,
    ACTIONS(234), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1597] = 4,
    ACTIONS(242), 1,
      aux_sym_string_content_token1,
    ACTIONS(244), 1,
      anon_sym_DQUOTE2,
    STATE(56), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(240), 5,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_code_string_token1,
  [1614] = 2,
    ACTIONS(238), 1,
      sym_number,
    ACTIONS(234), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1627] = 6,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(248), 1,
      aux_sym_string_content_token1,
    ACTIONS(250), 1,
      aux_sym_code_string_token1,
    ACTIONS(252), 1,
      anon_sym_DQUOTE2,
    STATE(113), 1,
      aux_sym_string_content_repeat1,
    STATE(49), 3,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_code_string_repeat1,
  [1648] = 4,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      aux_sym_text_token1,
    STATE(48), 1,
      aux_sym_text_repeat1,
    ACTIONS(256), 5,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1665] = 6,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(264), 1,
      aux_sym_string_content_token1,
    ACTIONS(267), 1,
      aux_sym_code_string_token1,
    ACTIONS(270), 1,
      anon_sym_DQUOTE2,
    STATE(113), 1,
      aux_sym_string_content_repeat1,
    STATE(49), 3,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_code_string_repeat1,
  [1686] = 6,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(248), 1,
      aux_sym_string_content_token1,
    ACTIONS(250), 1,
      aux_sym_code_string_token1,
    ACTIONS(272), 1,
      anon_sym_DQUOTE2,
    STATE(113), 1,
      aux_sym_string_content_repeat1,
    STATE(49), 3,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_code_string_repeat1,
  [1707] = 6,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(248), 1,
      aux_sym_string_content_token1,
    ACTIONS(274), 1,
      aux_sym_code_string_token1,
    ACTIONS(276), 1,
      anon_sym_DQUOTE2,
    STATE(113), 1,
      aux_sym_string_content_repeat1,
    STATE(50), 3,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_code_string_repeat1,
  [1728] = 6,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(248), 1,
      aux_sym_string_content_token1,
    ACTIONS(278), 1,
      aux_sym_code_string_token1,
    ACTIONS(280), 1,
      anon_sym_DQUOTE2,
    STATE(113), 1,
      aux_sym_string_content_repeat1,
    STATE(47), 3,
      sym_escape_sequence,
      sym_string_content,
      aux_sym_code_string_repeat1,
  [1749] = 3,
    ACTIONS(282), 1,
      aux_sym_text_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    ACTIONS(256), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1764] = 4,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      aux_sym_text_token1,
    STATE(48), 1,
      aux_sym_text_repeat1,
    ACTIONS(234), 5,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1781] = 3,
    ACTIONS(289), 1,
      aux_sym_text_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    ACTIONS(234), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [1796] = 4,
    ACTIONS(293), 1,
      aux_sym_string_content_token1,
    ACTIONS(296), 1,
      anon_sym_DQUOTE2,
    STATE(56), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(291), 5,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_code_string_token1,
  [1813] = 3,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      sym_number,
    ACTIONS(234), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1828] = 2,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1840] = 1,
    ACTIONS(304), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1850] = 2,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1862] = 2,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1874] = 2,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1886] = 2,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1898] = 2,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1910] = 4,
    ACTIONS(254), 1,
      sym_number,
    ACTIONS(322), 1,
      aux_sym_text_token1,
    STATE(65), 1,
      aux_sym_text_repeat1,
    ACTIONS(256), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [1926] = 4,
    ACTIONS(285), 1,
      sym_number,
    ACTIONS(325), 1,
      aux_sym_text_token1,
    STATE(65), 1,
      aux_sym_text_repeat1,
    ACTIONS(234), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [1942] = 2,
    ACTIONS(329), 1,
      anon_sym_DQUOTE2,
    ACTIONS(327), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1954] = 2,
    ACTIONS(333), 1,
      anon_sym_DQUOTE2,
    ACTIONS(331), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1966] = 1,
    ACTIONS(335), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1976] = 2,
    ACTIONS(339), 1,
      anon_sym_DQUOTE2,
    ACTIONS(337), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [1988] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2000] = 2,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2012] = 2,
    ACTIONS(341), 1,
      anon_sym_DQUOTE2,
    ACTIONS(343), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [2024] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2036] = 1,
    ACTIONS(347), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2046] = 2,
    ACTIONS(351), 1,
      anon_sym_DQUOTE2,
    ACTIONS(349), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [2058] = 2,
    ACTIONS(300), 1,
      anon_sym_DQUOTE2,
    ACTIONS(302), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [2070] = 2,
    ACTIONS(355), 1,
      anon_sym_DQUOTE2,
    ACTIONS(353), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [2082] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2094] = 2,
    ACTIONS(314), 1,
      anon_sym_DQUOTE2,
    ACTIONS(316), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [2106] = 1,
    ACTIONS(357), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2116] = 2,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2128] = 2,
    ACTIONS(314), 1,
      anon_sym_DQUOTE2,
    ACTIONS(316), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_code_string_token1,
  [2140] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2152] = 2,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2164] = 1,
    ACTIONS(363), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2174] = 2,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2186] = 2,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2198] = 2,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2210] = 2,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2222] = 1,
    ACTIONS(371), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2232] = 1,
    ACTIONS(316), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2242] = 1,
    ACTIONS(316), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2252] = 1,
    ACTIONS(367), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2262] = 1,
    ACTIONS(327), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2272] = 1,
    ACTIONS(353), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2282] = 1,
    ACTIONS(302), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2292] = 1,
    ACTIONS(349), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2302] = 1,
    ACTIONS(375), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2312] = 1,
    ACTIONS(361), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2322] = 1,
    ACTIONS(331), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2332] = 2,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 6,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2344] = 1,
    ACTIONS(343), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2354] = 1,
    ACTIONS(337), 7,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2364] = 2,
    ACTIONS(379), 1,
      sym_number,
    ACTIONS(335), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2375] = 2,
    ACTIONS(383), 1,
      sym_number,
    ACTIONS(381), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2386] = 2,
    ACTIONS(387), 1,
      sym_number,
    ACTIONS(385), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2397] = 2,
    ACTIONS(389), 1,
      sym_number,
    ACTIONS(347), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2408] = 2,
    ACTIONS(285), 1,
      sym_number,
    ACTIONS(234), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2419] = 5,
    ACTIONS(391), 1,
      aux_sym_local_definition_token1,
    ACTIONS(393), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(395), 1,
      aux_sym_local_variables_token1,
    STATE(128), 1,
      aux_sym_local_variables_repeat2,
    STATE(111), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [2436] = 5,
    ACTIONS(391), 1,
      aux_sym_local_definition_token1,
    ACTIONS(395), 1,
      aux_sym_local_variables_token1,
    ACTIONS(397), 1,
      anon_sym_DASH_STAR_DASH,
    STATE(129), 1,
      aux_sym_local_variables_repeat2,
    STATE(116), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [2453] = 3,
    ACTIONS(399), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_header_end,
    STATE(121), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [2465] = 4,
    ACTIONS(244), 1,
      anon_sym_DQUOTE2,
    ACTIONS(401), 1,
      aux_sym_string_content_token1,
    STATE(118), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(240), 2,
      anon_sym_BSLASH,
      aux_sym_code_string_token1,
  [2479] = 3,
    ACTIONS(391), 1,
      aux_sym_local_definition_token1,
    ACTIONS(403), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(116), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [2491] = 3,
    ACTIONS(399), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_header_end,
    STATE(121), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [2503] = 3,
    ACTIONS(405), 1,
      aux_sym_local_definition_token1,
    ACTIONS(408), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(116), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [2515] = 3,
    ACTIONS(391), 1,
      aux_sym_local_definition_token1,
    ACTIONS(410), 2,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
    STATE(114), 2,
      sym_local_definition,
      aux_sym_local_variables_repeat1,
  [2527] = 4,
    ACTIONS(296), 1,
      anon_sym_DQUOTE2,
    ACTIONS(412), 1,
      aux_sym_string_content_token1,
    STATE(118), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(291), 2,
      anon_sym_BSLASH,
      aux_sym_code_string_token1,
  [2541] = 2,
    ACTIONS(349), 2,
      anon_sym_BSLASH,
      aux_sym_code_string_token1,
    ACTIONS(351), 2,
      aux_sym_string_content_token1,
      anon_sym_DQUOTE2,
  [2550] = 2,
    ACTIONS(415), 1,
      anon_sym_POUND,
    STATE(115), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [2559] = 2,
    ACTIONS(417), 1,
      anon_sym_POUND,
    STATE(121), 3,
      sym_comment,
      sym_directive,
      aux_sym_header_repeat1,
  [2568] = 3,
    ACTIONS(420), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(422), 1,
      aux_sym_local_variables_token1,
    STATE(122), 1,
      aux_sym_local_variables_repeat2,
  [2578] = 3,
    ACTIONS(425), 1,
      anon_sym_POUND,
    ACTIONS(427), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      aux_sym_comment_repeat1,
  [2588] = 3,
    ACTIONS(429), 1,
      anon_sym_POUND,
    ACTIONS(431), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      aux_sym_comment_repeat1,
  [2598] = 3,
    ACTIONS(256), 1,
      anon_sym_BQUOTE,
    ACTIONS(434), 1,
      aux_sym_text_token1,
    STATE(125), 1,
      aux_sym_text_repeat1,
  [2608] = 1,
    ACTIONS(437), 3,
      aux_sym_local_definition_token1,
      anon_sym_DASH_STAR_DASH,
      aux_sym_local_variables_token1,
  [2614] = 3,
    ACTIONS(234), 1,
      anon_sym_BQUOTE,
    ACTIONS(439), 1,
      aux_sym_text_token1,
    STATE(125), 1,
      aux_sym_text_repeat1,
  [2624] = 3,
    ACTIONS(441), 1,
      anon_sym_DASH_STAR_DASH,
    ACTIONS(443), 1,
      aux_sym_local_variables_token1,
    STATE(122), 1,
      aux_sym_local_variables_repeat2,
  [2634] = 3,
    ACTIONS(443), 1,
      aux_sym_local_variables_token1,
    ACTIONS(445), 1,
      anon_sym_DASH_STAR_DASH,
    STATE(122), 1,
      aux_sym_local_variables_repeat2,
  [2644] = 1,
    ACTIONS(447), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2649] = 1,
    ACTIONS(449), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2654] = 1,
    ACTIONS(451), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2659] = 1,
    ACTIONS(453), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [2664] = 1,
    ACTIONS(387), 1,
      anon_sym_BQUOTE,
  [2668] = 1,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
  [2672] = 1,
    ACTIONS(457), 1,
      anon_sym_POUND,
  [2676] = 1,
    ACTIONS(459), 1,
      anon_sym_BQUOTE,
  [2680] = 1,
    ACTIONS(461), 1,
      anon_sym_POUND,
  [2684] = 1,
    ACTIONS(463), 1,
      anon_sym_COLON,
  [2688] = 1,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
  [2692] = 1,
    ACTIONS(285), 1,
      anon_sym_BQUOTE,
  [2696] = 1,
    ACTIONS(467), 1,
      sym_number,
  [2700] = 1,
    ACTIONS(469), 1,
      anon_sym_POUND,
  [2704] = 1,
    ACTIONS(471), 1,
      anon_sym_COLON,
  [2708] = 1,
    ACTIONS(473), 1,
      aux_sym_local_definition_token2,
  [2712] = 1,
    ACTIONS(389), 1,
      anon_sym_BQUOTE,
  [2716] = 1,
    ACTIONS(379), 1,
      anon_sym_BQUOTE,
  [2720] = 1,
    ACTIONS(383), 1,
      anon_sym_BQUOTE,
  [2724] = 1,
    ACTIONS(475), 1,
      anon_sym_COLON,
  [2728] = 1,
    ACTIONS(477), 1,
      anon_sym_BQUOTE,
  [2732] = 1,
    ACTIONS(479), 1,
      anon_sym_COLON,
  [2736] = 1,
    ACTIONS(481), 1,
      anon_sym_BQUOTE,
  [2740] = 1,
    ACTIONS(483), 1,
      sym_value,
  [2744] = 1,
    ACTIONS(485), 1,
      anon_sym_COLON,
  [2748] = 1,
    ACTIONS(487), 1,
      anon_sym_COLON,
  [2752] = 1,
    ACTIONS(489), 1,
      anon_sym_POUND,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 315,
  [SMALL_STATE(10)] = 360,
  [SMALL_STATE(11)] = 402,
  [SMALL_STATE(12)] = 444,
  [SMALL_STATE(13)] = 486,
  [SMALL_STATE(14)] = 528,
  [SMALL_STATE(15)] = 570,
  [SMALL_STATE(16)] = 612,
  [SMALL_STATE(17)] = 654,
  [SMALL_STATE(18)] = 696,
  [SMALL_STATE(19)] = 738,
  [SMALL_STATE(20)] = 780,
  [SMALL_STATE(21)] = 822,
  [SMALL_STATE(22)] = 864,
  [SMALL_STATE(23)] = 906,
  [SMALL_STATE(24)] = 948,
  [SMALL_STATE(25)] = 990,
  [SMALL_STATE(26)] = 1032,
  [SMALL_STATE(27)] = 1070,
  [SMALL_STATE(28)] = 1108,
  [SMALL_STATE(29)] = 1146,
  [SMALL_STATE(30)] = 1184,
  [SMALL_STATE(31)] = 1222,
  [SMALL_STATE(32)] = 1249,
  [SMALL_STATE(33)] = 1276,
  [SMALL_STATE(34)] = 1300,
  [SMALL_STATE(35)] = 1329,
  [SMALL_STATE(36)] = 1358,
  [SMALL_STATE(37)] = 1387,
  [SMALL_STATE(38)] = 1416,
  [SMALL_STATE(39)] = 1445,
  [SMALL_STATE(40)] = 1474,
  [SMALL_STATE(41)] = 1503,
  [SMALL_STATE(42)] = 1528,
  [SMALL_STATE(43)] = 1553,
  [SMALL_STATE(44)] = 1578,
  [SMALL_STATE(45)] = 1597,
  [SMALL_STATE(46)] = 1614,
  [SMALL_STATE(47)] = 1627,
  [SMALL_STATE(48)] = 1648,
  [SMALL_STATE(49)] = 1665,
  [SMALL_STATE(50)] = 1686,
  [SMALL_STATE(51)] = 1707,
  [SMALL_STATE(52)] = 1728,
  [SMALL_STATE(53)] = 1749,
  [SMALL_STATE(54)] = 1764,
  [SMALL_STATE(55)] = 1781,
  [SMALL_STATE(56)] = 1796,
  [SMALL_STATE(57)] = 1813,
  [SMALL_STATE(58)] = 1828,
  [SMALL_STATE(59)] = 1840,
  [SMALL_STATE(60)] = 1850,
  [SMALL_STATE(61)] = 1862,
  [SMALL_STATE(62)] = 1874,
  [SMALL_STATE(63)] = 1886,
  [SMALL_STATE(64)] = 1898,
  [SMALL_STATE(65)] = 1910,
  [SMALL_STATE(66)] = 1926,
  [SMALL_STATE(67)] = 1942,
  [SMALL_STATE(68)] = 1954,
  [SMALL_STATE(69)] = 1966,
  [SMALL_STATE(70)] = 1976,
  [SMALL_STATE(71)] = 1988,
  [SMALL_STATE(72)] = 2000,
  [SMALL_STATE(73)] = 2012,
  [SMALL_STATE(74)] = 2024,
  [SMALL_STATE(75)] = 2036,
  [SMALL_STATE(76)] = 2046,
  [SMALL_STATE(77)] = 2058,
  [SMALL_STATE(78)] = 2070,
  [SMALL_STATE(79)] = 2082,
  [SMALL_STATE(80)] = 2094,
  [SMALL_STATE(81)] = 2106,
  [SMALL_STATE(82)] = 2116,
  [SMALL_STATE(83)] = 2128,
  [SMALL_STATE(84)] = 2140,
  [SMALL_STATE(85)] = 2152,
  [SMALL_STATE(86)] = 2164,
  [SMALL_STATE(87)] = 2174,
  [SMALL_STATE(88)] = 2186,
  [SMALL_STATE(89)] = 2198,
  [SMALL_STATE(90)] = 2210,
  [SMALL_STATE(91)] = 2222,
  [SMALL_STATE(92)] = 2232,
  [SMALL_STATE(93)] = 2242,
  [SMALL_STATE(94)] = 2252,
  [SMALL_STATE(95)] = 2262,
  [SMALL_STATE(96)] = 2272,
  [SMALL_STATE(97)] = 2282,
  [SMALL_STATE(98)] = 2292,
  [SMALL_STATE(99)] = 2302,
  [SMALL_STATE(100)] = 2312,
  [SMALL_STATE(101)] = 2322,
  [SMALL_STATE(102)] = 2332,
  [SMALL_STATE(103)] = 2344,
  [SMALL_STATE(104)] = 2354,
  [SMALL_STATE(105)] = 2364,
  [SMALL_STATE(106)] = 2375,
  [SMALL_STATE(107)] = 2386,
  [SMALL_STATE(108)] = 2397,
  [SMALL_STATE(109)] = 2408,
  [SMALL_STATE(110)] = 2419,
  [SMALL_STATE(111)] = 2436,
  [SMALL_STATE(112)] = 2453,
  [SMALL_STATE(113)] = 2465,
  [SMALL_STATE(114)] = 2479,
  [SMALL_STATE(115)] = 2491,
  [SMALL_STATE(116)] = 2503,
  [SMALL_STATE(117)] = 2515,
  [SMALL_STATE(118)] = 2527,
  [SMALL_STATE(119)] = 2541,
  [SMALL_STATE(120)] = 2550,
  [SMALL_STATE(121)] = 2559,
  [SMALL_STATE(122)] = 2568,
  [SMALL_STATE(123)] = 2578,
  [SMALL_STATE(124)] = 2588,
  [SMALL_STATE(125)] = 2598,
  [SMALL_STATE(126)] = 2608,
  [SMALL_STATE(127)] = 2614,
  [SMALL_STATE(128)] = 2624,
  [SMALL_STATE(129)] = 2634,
  [SMALL_STATE(130)] = 2644,
  [SMALL_STATE(131)] = 2649,
  [SMALL_STATE(132)] = 2654,
  [SMALL_STATE(133)] = 2659,
  [SMALL_STATE(134)] = 2664,
  [SMALL_STATE(135)] = 2668,
  [SMALL_STATE(136)] = 2672,
  [SMALL_STATE(137)] = 2676,
  [SMALL_STATE(138)] = 2680,
  [SMALL_STATE(139)] = 2684,
  [SMALL_STATE(140)] = 2688,
  [SMALL_STATE(141)] = 2692,
  [SMALL_STATE(142)] = 2696,
  [SMALL_STATE(143)] = 2700,
  [SMALL_STATE(144)] = 2704,
  [SMALL_STATE(145)] = 2708,
  [SMALL_STATE(146)] = 2712,
  [SMALL_STATE(147)] = 2716,
  [SMALL_STATE(148)] = 2720,
  [SMALL_STATE(149)] = 2724,
  [SMALL_STATE(150)] = 2728,
  [SMALL_STATE(151)] = 2732,
  [SMALL_STATE(152)] = 2736,
  [SMALL_STATE(153)] = 2740,
  [SMALL_STATE(154)] = 2744,
  [SMALL_STATE(155)] = 2748,
  [SMALL_STATE(156)] = 2752,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_with_default_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_string_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_string_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_string_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_string_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_with_default, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_with_default, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_end, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_end, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, 0, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, 0, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_with_default, 5, 0, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_with_default, 5, 0, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_with_default, 4, 0, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_with_default, 4, 0, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_with_default, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_with_default, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backquote_expression, 3, 0, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backquote_expression, 3, 0, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_field, 2, 0, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_field, 2, 0, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elisp_code, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 5, 0, 6),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 5, 0, 6),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 7, 0, 7),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 6, 0, 6),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 6, 0, 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 6, 0, 7),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mirror, 6, 0, 7),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mirror, 7, 0, 7),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_string, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_string, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat1, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_variables_repeat2, 1, 0, 0),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_variables_repeat2, 2, 0, 0), SHIFT_REPEAT(117),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_definition, 3, 0, 5),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 3, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [465] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 4, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variables, 5, 0, 0),
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
