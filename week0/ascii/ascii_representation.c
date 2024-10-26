#include <stdio.h>

int main(void)
{
  char letter;

  for (letter = 'A'; letter <= 'Z'; letter++)
  {
    printf("%c: %d\n", letter, letter);
  }

  for (letter = 'a'; letter <= 'z'; letter++)
  {
    printf("%c: %d\n", letter, letter);
  }

  return 0;
}

