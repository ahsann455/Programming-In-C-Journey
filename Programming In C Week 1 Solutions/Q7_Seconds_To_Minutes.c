#include <stdio.h>

int main() {
    int totalSeconds, minutes, seconds;
    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;
    printf("%d seconds = %d minute(s) and %d second(s)\n", totalSeconds, minutes, seconds);
    return 0;
}