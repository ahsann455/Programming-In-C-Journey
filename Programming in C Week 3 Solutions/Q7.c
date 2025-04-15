
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char *choices[] = {"rock", "paper", "scissors"};
    int player_score = 0, computer_score = 0;
    char player[20];
    srand(time(0));
    for (int round = 0; round < 5; round++) {
        int comp = rand() % 3;
        scanf("%s", player);
        printf("Computer: %s\n", choices[comp]);
        if (strcmp(player, choices[comp]) == 0)
            continue;
        else if ((strcmp(player, "rock") == 0 && strcmp(choices[comp], "scissors") == 0) ||
                 (strcmp(player, "scissors") == 0 && strcmp(choices[comp], "paper") == 0) ||
                 (strcmp(player, "paper") == 0 && strcmp(choices[comp], "rock") == 0)) {
            player_score++;
        } else {
            computer_score++;
        }
    }
    if (player_score > computer_score)
        printf("Player wins\n");
    else if (player_score < computer_score)
        printf("Computer wins\n");
    else
        printf("It's a draw\n");
    return 0;
}
