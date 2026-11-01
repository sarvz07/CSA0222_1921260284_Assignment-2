#include <stdio.h>
#include <math.h>

int is_prime_original(int n, int *divisions) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    for (int divisor = 2; divisor <= (int)sqrt((double)n); divisor++) {
        (*divisions)++;
        if (n % divisor == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int numbers[] = {97, 100, 7919, 1000003};
    for (int i = 0; i < 4; i++) {
        int divisions = 0;
        int result = is_prime_original(numbers[i], &divisions);
        printf("Original: %d -> %s, divisions = %d\n", numbers[i], result ? "Prime" : "Not Prime", divisions);
    }
    return 0;
}
