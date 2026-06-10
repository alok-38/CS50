#include <stdio.h>

int main(void) {
    int numbers[] = {4,7,2,9,6,1};
    int total = 0;
    int even_total = 0;
    int count = 6;

    for (int i = 1; i < count; i++) {
        total += numbers[i];
    }
    printf("%d\n", total);
}