#include <stdio.h>
#include <math.h>

int is_prime_while(int n, int *divisions) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    int divisor = 3;
    int limit = (int)sqrt((double)n);
    while (divisor <= limit) {
        (*divisions)++;
        if (n % divisor == 0) {
            return 0;
        }
        divisor += 2;
    }
    return 1;
}

int main(void) {
    int numbers[] = {97, 100, 7919, 1000003};
    for (int i = 0; i < 4; i++) {
        int divisions = 0;
        int prime = is_prime_while(numbers[i], &divisions);
        printf("%d -> %s, divisions = %d\n", numbers[i], prime ? "Prime" : "Not Prime", divisions);
    }
    return 0;
}
