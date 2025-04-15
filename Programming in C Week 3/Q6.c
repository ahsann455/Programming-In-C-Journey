
#include <stdio.h>
#include <string.h>

int main() {
    char passwords[5][100];
    for (int i = 0; i < 5; i++) {
        scanf("%s", passwords[i]);
    }
    for (int i = 0; i < 5; i++) {
        int len = strlen(passwords[i]);
        if (len < 6)
            printf("Weak\n");
        else if (len <= 10)
            printf("Medium\n");
        else
            printf("Strong\n");
    }
    return 0;
}
