#include <stdio.h>

int main(void) {
    int x = 10;
    int *pointer = &x;
    // Print the address
    printf("%p\n", pointer);
    // Dereferencing
    printf("%d\n", *pointer);
}