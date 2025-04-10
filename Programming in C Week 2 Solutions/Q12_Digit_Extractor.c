#include <stdio.h>

int main() {
    int x, n1, n10, n100, n1000;
    printf("Enter an integer less than 10000: ");
    scanf("%d", &x);
    n1 = x % 10;
    n10 = (x / 10) % 10;
    n100 = (x / 100) % 10;
    n1000 = (x / 1000) % 10;
    printf("Ones digit: %d\n", n1);
    printf("Tens digit: %d\n", n10);
    printf("Hundreds digit: %d\n", n100);
    printf("Thousands digit: %d\n", n1000);
    return 0;
}