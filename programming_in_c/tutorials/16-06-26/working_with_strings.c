#include <stdio.h>

int main(void)
{
    char greeting[] = "Hello";
    char name[50] = "Alice";
    char hobby[] = {'C', 'o', 'd', 'i', 'n', 'g', '\0'};
    // Points directly to the read-only memory address of 'W'
    const char *message = "Welcome";
    printf("%s\n", greeting);
    printf("%s\n", name);
    printf("%s\n", hobby);
    printf("%s\n", message);
}