#include <stdio.h>

int main(void)
{
    int value = 5;
    int x_value = ++value + value++;
    printf("%i %i\n", value, x_value);
    return 0;
}

