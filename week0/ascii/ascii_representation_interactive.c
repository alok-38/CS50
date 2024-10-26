#include <stdio.h>
#include <string.h>

void textToAscii() {
    char inputText[100];

    // Interactive loop
    while (1) {
        // Get user input
        printf("Enter a text (type 'exit' to end): ");
        fgets(inputText, sizeof(inputText), stdin);

        // Remove newline character if present
        size_t length = strlen(inputText);
        if (inputText[length - 1] == '\n') {
            inputText[length - 1] = '\0';
        }

        // Check for exit command
        if (strcmp(inputText, "exit") == 0) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        // Display ASCII codes
        printf("ASCII Codes: ");
        for (int i = 0; inputText[i] != '\0'; i++) {
            printf("%d ", inputText[i]);
        }

        printf("\n\n");
    }
}

int main() {
    // Run the interactive program
    textToAscii();

    return 0;
}

