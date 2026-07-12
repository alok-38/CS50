#include <stdio.h>

int main(void) {
    double expression_1 = 3.31e-8;
    double expression_2 = 2.01e-7;
    double expression_3 = 7.16e-6;
    double expression_4 = 2.01e-8;

    double result = (expression_1 * expression_2) / (expression_3 + expression_4);

    printf("Default:        %e\n", result);
    printf("High precision: %.17e\n", result);
    printf("Shortest exact: %.17g\n", result);

    return 0;
}