#include <stdio.h>

char grade_for(int marks) {
    if (marks < 0 || marks > 100) return '?';
    if (marks >= 90) return 'S';
    if (marks >= 80) return 'A';
    if (marks >= 70) return 'B';
    if (marks >= 60) return 'C';
    if (marks >= 50) return 'D';
    return 'F';
}

int main(void) {
    int values[] = {100, 95, 83, 50, 49, -5};
    for (int i = 0; i < 6; i++) {
        printf("%d:%c\n", values[i], grade_for(values[i]));
    }
    return 0;
}
