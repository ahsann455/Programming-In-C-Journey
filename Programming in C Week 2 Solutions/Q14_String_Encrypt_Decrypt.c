#include <stdio.h>

int main() {
    char str[100], encrypted[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        encrypted[i] = str[i] + 1;
    }
    encrypted[i] = '\0';
    printf("Encrypted: %s\n", encrypted);
    for(i = 0; encrypted[i] != '\0'; i++) {
        str[i] = encrypted[i] - 1;
    }
    str[i] = '\0';
    printf("Decrypted: %s\n", str);
    return 0;
}