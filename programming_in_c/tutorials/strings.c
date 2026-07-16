#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Hello!\n");
    printf("%i Red Balloons\n", 99);

    char apple_pie[50] = "I like ";
    strcat(apple_pie, "apple pie");

    printf("%s\n", apple_pie);

    return 0;
}
