#include <stdio.h>

int main(void) {
    // Value of x
    float x = 2.55;

    // Evaluate the polynomial: 3x^3 - 5x^2 + 6
    float result = 3 * x * x * x - 5 * x * x + 6;

    // Display the result
    printf("Result = %f\n", result);

    return 0;
}