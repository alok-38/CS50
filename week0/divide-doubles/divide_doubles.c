#include <stdio.h>
#include <float.h>

double divide_doubles(void);

int main(void)
{
    double result = divide_doubles();

    if (result == DBL_MAX)
    {
        printf("Invalid input or division by zero.\n");
    }
    else
    {
        printf("Result: %lf\n", result);
    }
    return 0;
}

double divide_doubles(void)
{
    // Read the first double from stdin
    double d;
    printf("Enter a double: ");
    if (scanf("%lf", &d) != 1)
    {
        return DBL_MAX;
    }
    // Read the second double
    double e;
    printf("What do you want to divide %lf by? ", d);
    if (scanf("%lf", &e) != 1)
    {
        return DBL_MAX;
    }
    // Make sure we don't divide by zero
    if (e == 0.0)
    {
        return DBL_MAX;
    }

    return d / e;
}

