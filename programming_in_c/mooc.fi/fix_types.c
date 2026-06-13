#include <stdio.h>

typedef struct
{
    float a;
    int b;
    int c;
} Result;

Result computeValues()
{
    Result r;

    // Example calculations
    r.a = 10.6 / 2;
    r.b = 2000 * 4000;
    r.c = 33333 * 2;

    return r;
}

int main()
{
    Result res = computeValues();
    printf("%.1f %d %d\n", res.a, res.b, res.c);
    return 0;
}