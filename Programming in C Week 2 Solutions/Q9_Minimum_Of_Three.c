#include <stdio.h>

int main() {
    int a, b, c, min;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("Minimum of %d, %d, %d: %d\n", a, b, c, min);
    return 0;
}