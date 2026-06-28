#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // prompt the user to enter his name (string)
    string name = get_string("What's your name? ");
    // Output the same
    printf("hello, %s\n", name);

    return 0;
}

