#include <stdio.h>

int main(void) {
    double principal = 10000.0;
    double monthly_rate = 0.02;
    double repayment = 2000.0;
    double total_interest = 0.0;
    int month = 0;

    printf("Month | Opening Balance | Interest | Payment | Closing Balance\n");
    while (principal > 0.0 && month < 360) {
        month++;
        double interest = principal * monthly_rate;
        principal += interest;
        double payment = repayment;
        if (payment > principal) {
            payment = principal;
        }
        principal -= payment;
        total_interest += interest;

        printf("%d | %.2f | %.2f | %.2f | %.2f\n",
               month, principal + payment, interest, payment, principal);

        if (principal <= 0.0) {
            break;
        }
    }

    printf("Total months: %d\n", month);
    printf("Total interest: %.2f\n", total_interest);
    return 0;
}
