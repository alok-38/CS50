#include <stdio.h>

int main(void) {
    FILE *file = fopen("myfile.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    fopen_s("myfile.txt", "a");
    fprintf(file, "Hello, this is my first file.\n");
    fclose(file);
    return 0;
}