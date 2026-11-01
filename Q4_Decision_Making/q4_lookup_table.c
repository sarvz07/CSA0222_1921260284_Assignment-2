#include <stdio.h>

int main(void) {
    int marks[] = {100, 95, 83, 50, 49, -5};
    const char *grade_table[] = {
        "F", "F", "F", "F", "F", "F", "F", "F", "F", "F",
        "D", "D", "D", "D", "D", "D", "D", "D", "D", "D",
        "C", "C", "C", "C", "C", "C", "C", "C", "C", "C",
        "B", "B", "B", "B", "B", "B", "B", "B", "B", "B",
        "A", "A", "A", "A", "A", "A", "A", "A", "A", "A",
        "S", "S", "S", "S", "S", "S", "S", "S", "S", "S",
        "S", "S", "S", "S", "S", "S", "S", "S", "S", "S",
        "S", "S", "S", "S", "S", "S", "S", "S", "S", "S",
        "S", "S", "S", "S", "S", "S", "S", "S", "S", "S",
        "S", "S", "S", "S", "S", "S", "S", "S", "S", "S"
    };

    for (int i = 0; i < 6; i++) {
        int m = marks[i];
        if (m < 0 || m > 100) {
            printf("%d:?\n", m);
        } else {
            printf("%d:%s\n", marks[i], grade_table[m]);
        }
    }

    return 0;
}
