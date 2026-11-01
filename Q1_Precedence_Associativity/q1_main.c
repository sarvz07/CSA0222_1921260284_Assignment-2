#include <stdio.h>

int main(void) {
    int price = 240;
    int quantity = 3;
    int is_senior = 1;

    double bill = price * quantity;
    double senior_discount = is_senior ? bill * 0.15 : 0.0;
    double discounted_amount = bill - senior_discount;
    double gst = discounted_amount * 0.05;
    double total = discounted_amount + gst;

    if (bill > 1000.0) {
        total -= 50.0;
    }

    printf("Bill before discount: %.2f\n", bill);
    printf("Senior citizen discount: %.2f\n", senior_discount);
    printf("GST: %.2f\n", gst);
    printf("Final payable amount: %.2f\n", total);

    int count = 5;
    printf("count before UB demo: %d\n", count);
    printf("Undefined expression result is not reliable: %d\n", count = count++ + 1);
    printf("count after UB demo: %d\n", count);

    return 0;
}
