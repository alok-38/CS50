#include <stdio.h>
#include <string.h>

// Define a struct
struct Rocket
{
    /* data */
    char classname[20];
    int speed;
};

// Use the -> operator
int main()
{
    struct Rocket r1;

    // Create a pointer to the struct
    struct Rocket *rocket = &r1;

    // Assign values using the pointer
    strcpy(rocket->classname, "Falcon");
    rocket->speed = 25000;

    // Print values
    printf("Rocket Name: %s\n", rocket->classname);
    printf("Speed: %d km/h\n", rocket->speed);

    return 0;
}