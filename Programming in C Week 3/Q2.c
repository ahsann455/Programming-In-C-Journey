
#include <stdio.h>

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}
