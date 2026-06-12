#include <stdio.h>

int main(void) {
    printf("Enter two whole numbers line by line:\n");
    int a, b;
    scanf("%i\n", &a);
    scanf("%i\n", &b);
    int divide = a / b;
    printf("%i\n", divide);
    return 0;
}