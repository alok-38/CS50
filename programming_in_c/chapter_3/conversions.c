#include <stdio.h>

int main(void)
{
    float float_1 = 123.125, float_2;
    int int_1, int_2 = -150;
    char char_var = 'a';

    // Floating to integer conversion
    int_1 = (int) float_1;
    printf("%f after converting to an int gives %i\n", float_1, int_1);

    // Integer to float conversion
    float_2 = (float) int_2;
    printf("%i after converting to a float gives %f\n", int_2, float_2);

    // Character to integer conversion (ASCII value)
    int_1 = (int) char_var;
    printf("The character '%c' as an integer is %i\n", char_var, int_1);

    // Integer to character conversion
    char_var = (char) int_2;
    printf("%i after converting to a char gives '%c'\n", int_2, char_var);

    return 0;
}