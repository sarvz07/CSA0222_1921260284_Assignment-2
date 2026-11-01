#include <stdio.h>
#include <stdbool.h>

void sieve(int limit) {
    bool prime[1000006] = {false};
    for (int i = 2; i <= limit; i++) {
        prime[i] = true;
    }
    for (int p = 2; p * p <= limit; p++) {
        if (prime[p]) {
            for (int multiple = p * p; multiple <= limit; multiple += p) {
                prime[multiple] = false;
            }
        }
    }

    printf("Prime check via Sieve of Eratosthenes up to %d is ready.\n", limit);
}

int main(void) {
    sieve(1000);
    return 0;
}
