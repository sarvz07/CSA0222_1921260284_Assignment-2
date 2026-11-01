#include <stdio.h>
#include <math.h>

int is_prime_original(int n) {
    if (n < 2) return 0;
    for (int divisor = 2; divisor < n; divisor++) {
        if (n % divisor == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int numbers[] = {97, 100, 7919, 1000003};
    for (int i = 0; i < 4; i++) {
        printf("%d -> %s\n", numbers[i], is_prime_original(numbers[i]) ? "Prime" : "Not Prime");
    }
    return 0;
}
