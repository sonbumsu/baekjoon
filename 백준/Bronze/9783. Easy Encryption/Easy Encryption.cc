#include <stdio.h>
#include <string.h>
int main() {
    char str[130];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            printf("%02d", c - 'a' + 1);
        } 
        else if (c >= 'A' && c <= 'Z') {
            printf("%02d", c - 'A' + 27);
        } 
        else if (c >= '0' && c <= '9') {
            printf("#%c", c);
        } 
        else {
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}