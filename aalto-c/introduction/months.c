#include <stdio.h>

int main(void)
{
  // Array of month names
  char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
  int choice;

  do
  {
    // Display a menu
    printf("Select a month (1-12) or enter 0 to quit: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 12)
    {
      // Print the selected month
      printf("%s\n", months[choice - 1]);
    }
    else if (choice != 0)
    {
      printf("Invalid input. Please enter a number between 1 and 12 or 0 to quit.\n");
    }
  }
  while (choice != 0);

  return 0;
}

