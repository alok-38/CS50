#include <stdio.h>

int main(void)
{
    char str[5] = {'H', 'e', 'l', 'l', '\0'};
    char game[] = "Doom";
    char *str_pointer = "Hello";

    printf("%s\n", str);
    printf("%s\n", game);
    printf("%s\n", str_pointer);

    printf("What's your favorite game? ");
    char favorite_game[50];
    fgets(favorite_game, sizeof(favorite_game), stdin);
    printf("%s\n", favorite_game);

    for (int index = 0; favorite_game[index] != '\0'; index++) {
        printf("%c", favorite_game[index]);
    }

    return 0;
}

