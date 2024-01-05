#include <stdio.h>

// Global variable
float accumulator = 0;

void performOperation(char operation, float operand);

int main(void) {
  float operand;
  char operation;

  printf("Enter an initial value and operation (e.g., 10 S): ");
  scanf("%f %c", &accumulator, &operation);

  while (1) {
    printf("Accumulator: %.2f\n", accumulator);
    printf("Enter an operation and operand (e.g., + 5, * 3, / 2, - 4): ");
    scanf(" %c %f", &operation, &operand);
    performOperation(operation, operand);
  }
  return 0;
}

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

