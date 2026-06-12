#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    // Note the space before %c; it skips preceding whitespace/newlines
    scanf(" %c", &ch);

    printf("You entered: %c\n", ch);
    return 0;
}