#include <stdio.h>

void decimalToBinary(double decimal) {
    // Check if the number is negative
    if (decimal < 0) {
        printf("Binary representation: -");
        decimal = -decimal;  // Make the number positive for simplicity
    } else {
        printf("Binary representation: ");
    }

    // Integer part
    int integerPart = (int)decimal;
    decimal -= integerPart;

    // Convert integer part to binary
    int binary[32];  // Assuming a 32-bit integer
    int i = 0;

    while (integerPart > 0) {
        binary[i] = integerPart % 2;
        integerPart /= 2;
        i++;
    }

    // Print integer part in reverse order
    if (i == 0) {
        printf("0");  // If integer part is zero
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }

    // Fractional part
    if (decimal > 0) {
        printf(".");

        while (decimal > 0) {
            decimal *= 2;
            printf("%d", (int)decimal);
            decimal -= (int)decimal;
        }
    }

    printf("\n");
}

int main() {
    double decimalNumber;

    // Get user input
    printf("Enter a decimal number: ");
    scanf("%lf", &decimalNumber);

    // Call the function with the user input
    decimalToBinary(decimalNumber);

    return 0;
}

