#include <stdio.h>

void three_lines(void);

int main(void)
{
    printf("The first three months are:\n");
    three_lines(); // Call the function
    return 0;
}

void three_lines(void)
{
    const char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"};

    for (const char **p = months; p < months + 3; ++p)
    {
        printf("%s\n", *p);
    }
}