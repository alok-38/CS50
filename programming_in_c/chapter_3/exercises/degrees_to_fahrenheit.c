#define DEGREE 27
#include <stdio.h>

int main(void) {
    float fahrenheit = DEGREE;
    float celcius = (fahrenheit - 32) / 1.8;
    printf("%f\n", celcius);
    return 0;
}
