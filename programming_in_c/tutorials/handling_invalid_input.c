#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age: ");
    // scanf should return 1 if an integer was successfully matched
    if (scanf_s("%d", &age) != 1)
    {
        printf("Invalid input! Please enter a valid number.\n");
        return 1;
    }
    // Prevent Buffer Overflows on Strings
    char username[20];
    printf("Enter username (max 19 characters): ");
    scanf_s("%19s", username, 20);
    printf("%s is %i\n", username, age);
    return 0;
}