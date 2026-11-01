#include <stdio.h>

int main(void) {
    int price = 240;
    int quantity = 3;
    int is_senior = 1;

    double bill = price * quantity;
    double senior_discount = 0.0;
    double discounted_amount = 0.0;
    double gst = 0.0;
    double total = 0.0;

    if (is_senior) {
        senior_discount = bill * 0.15;
    }

    discounted_amount = bill - senior_discount;
    gst = discounted_amount * 0.05;
    total = discounted_amount + gst;

    if (bill > 1000.0) {
        total -= 50.0;
    }

    printf("Bill: %.2f\n", bill);
    printf("Discount: %.2f\n", senior_discount);
    printf("GST: %.2f\n", gst);
    printf("Payable: %.2f\n", total);

    return 0;
}
