
#include <stdio.h>

int main() {
    int total = 0;
    for (int month = 1; month <= 12; month++) {
        total += 100;
        printf("Month %d: $%d\n", month, total);
    }
    return 0;
}
