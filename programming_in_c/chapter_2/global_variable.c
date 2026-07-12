#include <stdio.h>

// Global variable
int x = 10;

int main(void) {
    printf("%i\n", x);
    // Local variable
    int x = 10;
    printf("Local variable is also x and its value is %i\n", x);
    return 0;
}

