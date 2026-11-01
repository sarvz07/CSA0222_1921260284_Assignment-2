#include <stdio.h>

int main(void) {
    int marks[] = {100, 95, 83, 50, 49, -5};

    for (int i = 0; i < 6; i++) {
        int m = marks[i];
        if (m < 0 || m > 100) {
            printf("%d:?\n", m);
        } else if (m >= 90) {
            printf("%d:S\n", m);
        } else if (m >= 80) {
            printf("%d:A\n", m);
        } else if (m >= 70) {
            printf("%d:B\n", m);
        } else if (m >= 60) {
            printf("%d:C\n", m);
        } else if (m >= 50) {
            printf("%d:D\n", m);
        } else {
            printf("%d:F\n", m);
        }
    }

    return 0;
}
