#include <stdio.h>

enum Bits {
BIT0 = 1<<0,
BIT1 = 1<<1,
BIT2 = 1<<2,
BIT3 = 1<<3
};

int main() {
    enum Bits bit = BIT3;
    printf("BIT= %d\n", bit);
};