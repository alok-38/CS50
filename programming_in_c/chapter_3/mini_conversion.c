#include <stdio.h>

int main(void)
{
    float float_1 = 123.125, float_2;
    int int_1, int_2 = -150;
    char char_var = 'a';

    // 1. Float → Int (truncation)
    int_1 = (int) float_1;
    printf("Float to int: %f -> %i\n", float_1, int_1);

    // 2. Int → Float
    float_2 = (float) int_2;
    printf("Int to float: %i -> %f\n", int_2, float_2);

    // 3. Char → Int (ASCII)
    int_1 = char_var;
    printf("Char to int: '%c' -> %i\n", char_var, int_1);

    // 4. Int → Char (possible overflow)
    char_var = (char) int_2;
    printf("Int to char: %i -> '%c'\n", int_2, char_var);

    // 5. Overflow example
    int big = 300;
    char overflow_char = (char) big;
    printf("Overflow example: %i -> '%c' (numeric: %i)\n",
           big, overflow_char, overflow_char);

    // 6. Implicit conversion (int → float)
    float result = float_1 + int_2;
    printf("Implicit conversion: %f + %i = %f\n",
           float_1, int_2, result);

    // 7. Integer division vs float division
    int a = 5, b = 2;
    printf("Integer division: %i / %i = %i\n", a, b, a / b);
    printf("Float division: %i / %i = %f\n", a, b, (float)a / b);

    // 8. Mixed expression (type promotion)
    float mixed = a + float_1;
    printf("Type promotion: %i + %f = %f\n", a, float_1, mixed);

    return 0;
}