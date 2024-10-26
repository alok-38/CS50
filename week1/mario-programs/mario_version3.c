#include <stdio.h>

void printRightTriangle(int height) {
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j) {
            printf(" ");
        }
        for (int k = 1; k <= i; ++k) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    // Example usage with height = 5
    printRightTriangle(5);

    return 0;
}

