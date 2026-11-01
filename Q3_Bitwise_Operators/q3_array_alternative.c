#include <stdio.h>

int main(void) {
    char state[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    state[0] = 1;
    state[2] = 1;

    printf("Char array status: ");
    for (int i = 0; i < 8; i++) {
        printf("%d", state[i]);
    }
    printf("\n");

    printf("Using char[8] is more memory expensive than a single unsigned char register.\n");
    return 0;
}
