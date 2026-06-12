#include <stdio.h>

int main(void)
{
    char str[100];
    printf("Enter text: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }
    printf("You entered: %s\n", str);
}