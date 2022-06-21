const PREC = {
  or: 1,
  and: 2,
  compare: 3,
  term: 4,
  factor: 5,
  unary: 6,
  exp: 7,
};

function sep1(rule, separator, trailing) {
  return seq(
    rule,
    repeat(seq(separator, rule)),
    ...(trailing ? [optional(separator)] : [])
  );
}

function sep(rule, separator, trailing) {
  return optional(sep1(rule, separator, trailing));
}

module.exports = grammar({
  name: "saft",

  rules: {
    source_file: $ => repeat($.expression),

    expression: $ =>
      choice(
        seq("(", $._inner_expression, ")"),
        $.call,
        $.int,
        $.float,
        $.str,
        $.bool,
        $.identifier,
      ),

    _inner_expression: $ => choice($.expression),

    call: $ => seq("(", $.identifier, repeat($.expression), ")"),

    identifier: $ => /[A-Za-z_][A-Za-z_0-9]*/,

    int: $ => /\d+/,
    float: $ => /(?:\d+\.\d*)|(?:\d*\.\d+)/,
    str: $ => /"(?:[^"\\]|\\.)*"/,
    bool: $ => choice("true", "false"),

    unary_expression: $ =>
      prec.left(PREC.unary, seq(choice("+", "-"), $.expression)),
  },

  precedences: $ => [[$.call, $.expression]],
});
