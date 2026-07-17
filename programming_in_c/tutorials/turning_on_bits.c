#include <stdio.h>

int main(void)
{
    unsigned char x = 0b00001111; // 15 in base 10

    // Turn on bit 7
    x = x | (1 << 7);

    // Turn off bit 3
    x = x & ~(1 << 3);

    printf("Result: %d\n", x);

    return 0;
}
