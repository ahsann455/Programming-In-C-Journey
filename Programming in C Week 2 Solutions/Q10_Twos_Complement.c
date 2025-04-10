#include <stdio.h>

int main() {
    int x, x2;
    printf("Enter a positive integer: ");
    scanf("%d", &x);
    x2 = ~x + 1;
    printf("2's complement of "%d" in decimal: %d\n", x, x2);
    printf("2's complement of "%d" in hexadecimal: %X\n", x, x2);
    return 0;
}