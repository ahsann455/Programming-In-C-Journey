#include <stdio.h>

int main() {
    int guess, secret = 42, attempts = 0, maxAttempts = 5;
    while(attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if(guess == secret) {
            printf("Correct! You guessed it in %d attempt(s).\n", attempts);
            break;
        } else {
            printf("Wrong guess. ");
            if(attempts == maxAttempts)
                printf("Game Over! You used all attempts.\n");
            else
                printf("%d attempt(s) left.\n", maxAttempts - attempts);
        }
    }
    return 0;
}