#include <stdio.h>

int main(void)
{
    int a = 5, b = -205, c = 0;
    long long int long_int_val = 9223372036854775807;
    float f1 = 54.321, f2 = 0.001, f3 = -205.3884, f4 = 0.0;

    printf("%i\n", a + b + c);
    printf("%lli\n", long_int_val);
    printf("%f\n", f1 + f2 + f3 + f4);

    return 0;
}
