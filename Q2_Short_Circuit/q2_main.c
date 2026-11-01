#include <stdio.h>

static int verification_calls = 0;

int slow_verification(int is_senior, int has_ticket, int has_id) {
    verification_calls++;
    printf("Verification called %d times\n", verification_calls);
    return (is_senior && has_ticket && has_id);
}

int main(void) {
    int passengers[10][3] = {
        {58, 1, 1}, {62, 1, 0}, {60, 0, 1},
        {65, 1, 1}, {55, 0, 0}, {70, 1, 1},
        {61, 0, 1}, {75, 1, 0}, {59, 1, 1}, {68, 0, 0}
    };

    printf("Short-circuit test with &&\n");
    for (int i = 0; i < 10; i++) {
        int age = passengers[i][0];
        int has_ticket = passengers[i][1];
        int has_id = passengers[i][2];

        if (age >= 60 && has_ticket && slow_verification(1, has_ticket, has_id)) {
            printf("Passenger %d gets concession.\n", i + 1);
        }
    }

    printf("\nCondition order comparison\n");
    verification_calls = 0;
    for (int i = 0; i < 10; i++) {
        int age = passengers[i][0];
        int has_ticket = passengers[i][1];
        int has_id = passengers[i][2];

        if (has_ticket && age >= 60 && slow_verification(1, has_ticket, has_id)) {
            printf("Passenger %d eligible.\n", i + 1);
        }
    }

    printf("\nTotal verification calls = %d\n", verification_calls);
    return 0;
}
