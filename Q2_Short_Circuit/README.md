# Q2 – Short-Circuit Evaluation

This section demonstrates why short-circuit evaluation matters in conditions.

The idea:
- `&&` stops evaluating as soon as it becomes false.
- `||` stops evaluating as soon as it becomes true.
- `&` and `|` always evaluate both operands, even when the result is already known.

The verification function can be slow, so counting function calls shows the cost of poor condition order.
