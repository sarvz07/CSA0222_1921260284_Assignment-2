#include <stdio.h>

static int verification_calls = 0;

int slow_verification(int age, int has_ticket, int has_id) {
    verification_calls++;
    return (age >= 60 && has_ticket && has_id);
}

int main(void) {
    int data[1000][3];
    for (int i = 0; i < 1000; i++) {
        data[i][0] = 58 + (i % 30);
        data[i][1] = (i % 3 == 0);
        data[i][2] = (i % 4 != 0);
    }

    verification_calls = 0;
    for (int i = 0; i < 1000; i++) {
        if (data[i][0] >= 60 && data[i][1] && slow_verification(data[i][0], data[i][1], data[i][2])) {
            /* eligible */
        }
    }

    printf("Calls with age-first order: %d\n", verification_calls);

    verification_calls = 0;
    for (int i = 0; i < 1000; i++) {
        if (data[i][1] && data[i][0] >= 60 && slow_verification(data[i][0], data[i][1], data[i][2])) {
            /* eligible */
        }
    }

    printf("Calls with ticket-first order: %d\n", verification_calls);

    return 0;
}
