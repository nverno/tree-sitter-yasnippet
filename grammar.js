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
      repeat1(choice(
        $.directive,
        $.comment,
      )),
      alias("# --", $.header_end),
    ),

    comment: $ => seq(
      '#',
      repeat(/./),
    ),
    
    directive: $ => prec(1, seq(
      '#', $.key, ':', $.value
    )),

    key: $ => choice(
      "key",
      'name',
      'condition',
      'contributor',
      'binding',
      'expand-env',
      'uuid',
      'group',
      "type",
    ),
    value: $ => /.+/,

    snippet: $ => prec.left(repeat1(choice(
      $.escape_sequence,
      $.text,
      $.mirror,
      $.field,
      $.string,
      $.number,
    ))),
    
    field: $ => choice(
      $._field,
      $._simple_field,
    ),

    _simple_field: $ => seq("$", field("index", $.number)),

    _field: $ => seq(
      "${",
      optional(seq(field("index", $.number), ":")),
      choice(
        $.string,
        $.text,
      ),
      token.immediate("}"),
    ),

    mirror: $ => seq(
      "${",
      field("index", $.number),
      token.immediate(":"),
      "$(", $.code, ")",
      token.immediate("}"),
    ),

    _expression: $ => choice(
      $.string,
      alias(/[^")(]+/, $.text),
      $.parenthesized_expression,
    ),

    parenthesized_expression: $ => seq("(", $._expression, ")"),

    code: $ => repeat1($._expression),

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

    text: $ => prec.right(repeat1(/[^ \t\n\r]/)),

    ident: $ => /[a-z][a-z-]+/,
  }
});
