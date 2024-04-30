/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'yasnippet',

  // Tokens that can appear anywhere (comments/whitespace)
  extras: $ => [
    /\s+/,
  ],
  // Replace usages w/ their definitions
  inline: $ => [],
  // LR(1) conflicts
  conflicts: $ => [],
  // token names from custom external scanner
  externals: $ => [],
  // parse precedence
  precedences: $ => [
    [
      $.escape_sequence,
      $.field,
      $.mirror,
      $.text,
    ]
  ],
  // name of token matching keywords
  word: $ => $.ident,
  // hidden rule names to be considered supertypes in generated node types file
  supertypes: $ => [],

  rules: {
    source_file: $ => seq(
      $.header,
      optional($.snippet),
    ),

    header: $ => seq(
      optional($.local_variables),
      repeat1(choice(
        $.directive,
        $.comment,
      )),
      $.header_end,
    ),

    header_end: $ => seq("#", "--"),

    local_definition: $ => seq(
      field("name", alias(/[^ \t\n\r;:]+/, $.variable)), ':',
      field("value", alias(/[^ \t\n\r;]+/, $.value)),
    ),

    local_variables: $ => seq(
      '#',
      '-*-',
      semiSep(
        repeat($.local_definition)
      ),
      '-*-'
    ),

    comment: $ => seq(
      '#',
      repeat(/./),
    ),

    directive: $ => prec(1, seq(
      '#',
      field("name", $.key), ':',
      field("value", $.value)
    )),

    key: $ => choice(
      'key',
      'name',
      'condition',
      'contributor',
      'binding',
      'expand-env',
      'uuid',
      'group',
      'type',
    ),
    value: $ => /.+/,

    snippet: $ => repeat1(choice(
      $.mirror,
      $._field_expression,
    )),

    _simple_expression: $ => choice(
      $.escape_sequence,
      $.string,
      $.text,
    ),

    // Expressions that can appear in fields
    _field_expression: $ => choice(
      $.field,
      $.backquote_expression,
      $._simple_expression,
    ),

    // No fields/backquotes/nested code in code expressions
    _code_expression: $ => choice(
      $.parenthesized_expression,
      alias($.code_string, $.string),
      $.text,
      $.number
    ),

    backquote_expression: $ => seq(
      "`",
      field("code", $._code_expression),
      "`",
    ),

    parenthesized_expression: $ => seq(
      "(",
      repeat($._code_expression),
      ")"
    ),

    field: $ => choice(
      $._field_with_default,
      $._simple_field,
    ),

    _simple_field: $ => seq("$", field("index", $.number)),

    _field_with_default: $ => seq(
      "${",
      optional(seq(field("index", $.number), ":")),
      repeat($._field_expression),
      "}",
    ),

    mirror: $ => seq(
      "${",
      field("index", $.number), ":",
      // XXX: allowed?
      repeat($._field_expression),
      field("code", $.elisp_code),
      // XXX: allowed?
      repeat($._field_expression),
      "}",
    ),

    elisp_code: $ => prec.right(1, seq(
      "$", $.parenthesized_expression
    )),

    escape_sequence: $ => seq('\\', choice(
      /[$][({]?/,
      /[)\\"{}]/
    )),

    string_content: $ => prec.right(repeat1(/[^"\\]/)),

    code_string: $ => str($, []),

    string: $ => str($, [$.field, $.backquote_expression]),

    number: $ => token.immediate(/\d+/),

    // "$" in escaped fields
    text: $ => prec.right(-1, choice("$", repeat1(/[^ \t\n\r]/))),

    ident: $ => /[a-zA-Z-][a-zA-Z0-9-]+/,
  }
});

function str($, rules = []) {
  return seq(
    '"',
    repeat(choice(
      $.escape_sequence,
      $.string_content,
      alias(/\\["ntr]/, $.escape_sequence),
      ...rules
    )),
    token.immediate('"'),
  );
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function semiSep(rule) {
  return optional(sep1(rule, /;+/));
}
