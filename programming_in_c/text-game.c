#include <stdio.h>

int main() {
    int choice;
    int location = 0;

    while (1) {
        if (location == 0) {
            printf("\nYou are in the lab.\n");
            printf("1. Go to hallway\n");
            printf("2. Start experiment\n");
            scanf("%d", &choice);

            if (choice == 1) {
                location = 1;
            } else {
                printf("Explosion! Chaos begins!\n");
            }

        } else if (location == 1) {
            printf("\nYou are in the hallway.\n");
            printf("1. Go to elevator\n");
            printf("2. Go back to lab\n");
            scanf("%d", &choice);

            if (choice == 1) {
                location = 2;
            } else {
                location = 0;
            }

        } else if (location == 2) {
            printf("\nYou are in the elevator.\n");
            printf("1. Go outside\n");
            printf("2. Go back to hallway\n");
            scanf("%d", &choice);

            if (choice == 1) {
                location = 3;
            } else {
                location = 1;
            }

        } else if (location == 3) {
            printf("\nYou made it outside. You escaped!\n");
            break;
        }
    }

    return 0;
}