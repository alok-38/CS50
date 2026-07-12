#include <stdio.h>

int main(void) {
    int us_floor = 0;
    int eu_floor = 0;
    printf("Enter US floor\n");
    scanf_s("%i", &us_floor);
    eu_floor = us_floor - 1;
    printf("EU Floor %i\n", eu_floor);
    return 0;
}