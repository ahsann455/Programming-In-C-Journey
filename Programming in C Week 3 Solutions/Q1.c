
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    while (1) {
        scanf(" %c", &ch);
        if (ch == 'Q') break;
        if (islower(ch)) ch = toupper(ch);
        printf("%c\n", ch);
    }
    return 0;
}
