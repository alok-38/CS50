#include <stdio.h>

int main(void)
{
  char name[100];
  int age;

  // Prompt the user for their name
  printf("Hello! What's your name? ");
  scanf("%s", name);

  // Greet the user by name
  printf("Nice to meet you, %s!\n", name);

  // Ask the user for their age
  printf("How old are you, %s? ", name);
  scanf("%d", &age);

  // Calculate and display the user's birth year
  int currentYear = 2023;
  int birthYear = currentYear - age;

  printf("You were born in %d.\n", birthYear);
  
  // Interactive part: Ask a question
  printf("What's your favorite color? ");

  // Clear the input buffer
  while (getchar() != '\n');

  // Read a line of text as the user's favorite color
  char favoriteColor[100];
  fgets(favoriteColor, sizeof(favoriteColor), stdin);

  // Respond to the user's favorite color
  printf("Ah, %s is a nice color!\n", favoriteColor);

  return 0;
}

