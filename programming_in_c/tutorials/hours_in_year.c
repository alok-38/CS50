#include <stdio.h>
#define HOURS_DAY 24
#define DAYS_YEAR 365

int main(void)
{
    int hours = HOURS_DAY * DAYS_YEAR;
    printf("There are %d hours in a year.\n", hours);
    return 0;
}
