# Q7 – Day-4 Design Challenge

Focus area: Q5 prime checking.

Design objective:
- Reduce the number of division operations for large prime inputs.
- Keep the algorithm correct.
- Use odd divisors after checking 2 and rejecting even numbers.

Original bottleneck:
- Testing every integer divisor from 2 to sqrt(n) wastes time, especially because all even divisors are unnecessary after 2.
