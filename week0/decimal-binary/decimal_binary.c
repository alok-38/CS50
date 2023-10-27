#include <stdio.h>

int main(void)
{
    int decimal;

    while (1)
    {
        printf("Enter a decimal number (or 0 to exit): ");
        scanf("%d", &decimal);

        if (decimal == 0)
        {
            break;
        }
        // Array to store the binary representation
        int binary[32];
        int i = 0;

        // Convert decimal to binary
        while (decimal > 0)
        {
            binary[i] = decimal % 2;
            decimal = decimal / 2;
            i++;
        }
        // Print the binary representation in reverse order
        printf("Binary representation: ");
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", binary[j]);
        }
        printf("\n");
    }
    return 0;
}

