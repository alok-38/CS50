#include <stdio.h>

void interactive_greetings();

int main(void) {
  interactive_greetings();
  return 0;
}

void interactive_greetings() {
  char user_name[100];
  printf("Enter your name: ");
  scanf("%s", user_name);

  printf("Hello, %s! Welcome to the world of programming!\n", user_name);
}

