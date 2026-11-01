The original prime-checking version does extra work because it checks all divisors from 2 to sqrt(n), including even numbers that cannot divide an odd integer except 2.

The redesigned version reduces unnecessary division operations by:
- rejecting n < 2
- handling n = 2 separately
- rejecting even numbers immediately
- testing only odd divisors starting from 3

This preserves correctness but reduces division work by nearly half, especially for large prime numbers.
