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
    printf("Enter the number of months to display (1-12) or enter 0 to quit: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 12)
    {
      // Print the specified number of months
      for (int i = 0; i < choice; i++)
      {
        printf("%s\n", months[i]);
      }
    }
  }
  while (choice != 0);

  return 0;
}

