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
      // $._expression,
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
      $.escape_sequence,
      $.text,
      $.mirror,
      $.field,
      $.string,
      $.number,
    )),

    _expression: $ => choice(
      $.parenthesized_expression,
      $.string,
      $.text,
    ),

    parenthesized_expression: $ => seq(
      "(",
      repeat($._expression),
      ")"
    ),

    field: $ => choice(
      $._field,
      $._simple_field,
    ),

    _simple_field: $ => seq("$", field("index", $.number)),

    _field: $ => seq(
      "${",
      optional(seq(field("index", $.number), ":")),
      repeat($._expression),
      "}",
    ),

    mirror: $ => seq(
      "${",
      field("index", $.number), ":",
      // XXX: allowed?
      repeat($._expression),
      field("code", $.elisp_code),
      // XXX: allowed?
      repeat($._expression),
      "}",
    ),

    elisp_code: $ => prec(1, seq(
      "$(",
      repeat($._expression),
      ")"
    )),

    escape_sequence: $ => token.immediate(
      seq('\\', choice(
        /\$[({]?/,
        /[)\\"]/
      ))
    ),

    string_content: $ => prec.right(repeat1(/[^"\\]/)),

    string: $ => seq(
      '"',
      repeat(choice(
        $.escape_sequence,
        $.field,
        $.string_content,
      )),
      token.immediate('"'),
    ),

    number: $ => /\d+/,

    // "$(" in escaped fields with mirrors
    text: $ => prec.right(choice("$(", repeat1(/[^ \t\n\r]/))),

    ident: $ => /[a-zA-Z-][a-zA-Z0-9-]+/,
  }
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function semiSep(rule) {
  return optional(sep1(rule, /;+/));
}
