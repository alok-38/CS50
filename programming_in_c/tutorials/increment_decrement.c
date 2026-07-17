#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = a++;
    printf("Before increment: %i\n", a);
    printf("After: %i\n", b);

    return 0;
}
