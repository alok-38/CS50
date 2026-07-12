#include <stdio.h>

int main(void) {
    int x = 10;
    int *pointer = &x;
    printf("The value of x is %i\n", x);
    printf("Address of x is %p\n", &x);
    printf("Pointer stores %p\n", pointer);
    printf("Value using pointer %i\n", *pointer);

    // Changing value using pointer
    *pointer = 20;
    printf("Now it changed to %i\n", *pointer);

    return 0;
}