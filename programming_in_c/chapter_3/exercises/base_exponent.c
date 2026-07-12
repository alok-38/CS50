#include <stdio.h>

int main(void) {
    int base, exponent;
    int result = 1;

    printf("Enter base: ");
    printf("Enter exponent: ");
    scanf("%d %d", &base, &exponent);

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("%d\n", result);
}