#include <stdio.h>
#define DAYS_IN_YEAR 365
#define HOURS_IN_DAY 24
#define SECONDS_IN_HOUR 3600

int main(void)
{
    printf("How old are you? ");
    int age;
    scanf("%i", &age);

    int age_in_sec = age * DAYS_IN_YEAR * HOURS_IN_DAY * SECONDS_IN_HOUR;

    printf("Your age in seconds: %i\n", age_in_sec);

    return 0;
}
