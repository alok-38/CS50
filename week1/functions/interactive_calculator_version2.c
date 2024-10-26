#include <stdio.h>

float accumulator = 0; // Global variable to act as an accumulator

void performOperation(char operation, float operand) {
    switch (operation) {
        case '+':
            accumulator += operand;
            break;
        case '-':
            accumulator -= operand;
            break;
        case '*':
            accumulator *= operand;
            break;
        case '/':
            if (operand != 0) {
                accumulator /= operand;
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operation: %c\n", operation);
    }
}

int main() {
    float operand;
    char operation;
    char choice;

    printf("Enter an initial value and operation (e.g., 10 S): ");
    scanf("%f %c", &accumulator, &operation);

    do {
        printf("Result: %.2f\n", accumulator);

        printf("Enter an operation and operand (e.g., + 5, * 3, / 2, - 4): ");
        scanf(" %c %f", &operation, &operand); // Note the space before %c to consume any leading whitespace

        performOperation(operation, operand);

        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    // Display the final result before exiting
    printf("Final Result: %.2f\n", accumulator);

    return 0;
}

