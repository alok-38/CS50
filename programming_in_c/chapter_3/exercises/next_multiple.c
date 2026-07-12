#include <stdio.h>

int main(void)
{
    int i_values[3];
    int j_values[3];
    int next_multiple;

    printf("Enter 3 pairs of i and j values:\n");
    printf("i\tj\n");

    for (int count = 0; count < 3; count++)
    {
        scanf_s("%i %i", &i_values[count], &j_values[count]);
    }

    printf("\nNext multiples:\n");

    for (int count = 0; count < 3; count++)
    {
        if (i_values[count] % j_values[count] == 0)
            next_multiple = i_values[count];
        else
            next_multiple = i_values[count] + j_values[count] - (i_values[count] % j_values[count]);

        printf("Next multiple of %i after %i is %i\n",
               j_values[count], i_values[count], next_multiple);
    }

    return 0;
}