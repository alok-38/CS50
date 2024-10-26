#include <stdio.h>

int main(void)
{
  char input[100]; // Assuming a maximum input length of 100 characters

  printf("Enter a string: ");
  scanf("%s", input);

  printf("ASCII representation of the input:\n");

  for (int i = 0; input[i] != '\0'; i++)
  {
    printf("%c: %d\n", input[i], input[i]);
  }
  
  return 0;
}

