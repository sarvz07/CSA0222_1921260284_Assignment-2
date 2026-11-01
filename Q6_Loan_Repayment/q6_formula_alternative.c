#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 10000.0;
    double rate = 0.02;
    double payment = 2000.0;

    if (payment <= principal * rate) {
        printf("This repayment is too small to reduce the loan.\n");
        return 1;
    }

    double months = log(payment / (payment - principal * rate)) / log(1.0 + rate);
    printf("Theoretical months from formula: %.2f\n", months);
    printf("Whole monthly payments: %.0f\n", ceil(months));
    return 0;
}
