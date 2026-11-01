#include <stdio.h>

void show_register(unsigned char reg) {
    for (int bit = 7; bit >= 0; bit--) {
        printf("%d", (reg >> bit) & 1u);
    }
    printf("\n");
}

void switch_on(unsigned char *reg, int bit) {
    *reg |= (1u << bit);
}

void switch_off(unsigned char *reg, int bit) {
    *reg &= ~(1u << bit);
}

void toggle(unsigned char *reg, int bit) {
    *reg ^= (1u << bit);
}

int is_on(unsigned char reg, int bit) {
    return (reg & (1u << bit)) != 0;
}

int active_count(unsigned char reg) {
    int count = 0;
    for (int bit = 0; bit < 8; bit++) {
        if ((reg >> bit) & 1u) {
            count++;
        }
    }
    return count;
}

int main(void) {
    unsigned char reg = 0;
    switch_on(&reg, 0);
    switch_on(&reg, 2);
    show_register(reg);

    switch_off(&reg, 2);
    switch_on(&reg, 1);
    show_register(reg);

    if (is_on(reg, 0)) {
        printf("AC is ON, ");
    } else {
        printf("AC is OFF, ");
    }

    if (is_on(reg, 1)) {
        printf("PUMP is ON\n");
    } else {
        printf("PUMP is OFF\n");
    }

    printf("Active devices: %d\n", active_count(reg));
    return 0;
}
