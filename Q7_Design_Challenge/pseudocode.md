# Pseudocode

function is_prime_redesigned(n):
    if n < 2: return false
    if n == 2: return true
    if n % 2 == 0: return false

    limit = floor(sqrt(n))
    divisor = 3
    while divisor <= limit:
        if n % divisor == 0:
            return false
        divisor = divisor + 2
    return true

# Explanation:
# After handling 2, all even numbers are rejected immediately.
# Only odd divisors are tried, so the number of modulo operations is roughly halved.
