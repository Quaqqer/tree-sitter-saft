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
    source_file: $ => repeat($.statement),

    statement: $ => seq("[", $._inner_statement, "]"),

    _inner_statement: $ => choice($.def),

    def: $ => seq("def", $.identifier, $.expression),

    identifier: $ => /[A-Za-z_][A-Za-z_0-9]*/,

    primitive: $ => choice($.int, $.float, $.str, $.bool),
    int: $ => /\d+/,
    float: $ => /(?:\d+\.\d*)|(?:\d*\.\d+)/,
    str: $ => /"(?:[^"\\]|\\.)*"/,
    bool: $ => choice("true", "false"),

    _binary_inner_expression: $ =>
      choice($.binary_expression, $.unary_expression, $.expression),
    binary_expression: $ =>
      choice(
        ...[
          ["+", PREC.term],
          ["-", PREC.term],
          ["*", PREC.factor],
          ["/", PREC.factor],
          ["<", PREC.compare],
          ["<=", PREC.compare],
          [">", PREC.compare],
          [">=", PREC.compare],
          ["==", PREC.compare],
          ["!=", PREC.compare],
          ["or", PREC.or],
          ["and", PREC.and],
        ].map(([op, precedence]) =>
          prec.left(
            precedence,
            seq($._binary_inner_expression, op, $._binary_inner_expression)
          )
        ),
        ...[["^", PREC.exp]].map(([op, precedence]) =>
          prec.right(
            precedence,
            seq($._binary_inner_expression, op, $._binary_inner_expression)
          )
        )
      ),
    unary_expression: $ =>
      prec.left(PREC.unary, seq(choice("not", "+", "-"), $.expression)),

    expression: $ =>
      choice(
        seq("(", repeat1($.expression), ")"),
        seq("(", choice($.binary_expression, $.unary_expression), ")"),
        $.identifier,
        $.primitive
      ),
  },
});
