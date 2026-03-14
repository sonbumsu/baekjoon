#include <stdio.h>
#include <string.h>
void reverse(char *str, int start, int end, char *dest) {
    int idx = 0;
    for (int i = end; i >= start; i--) {
        dest[idx++] = str[i];
    }
}
int main() {
    char word[51];
    char min_word[51] = {0};
    char current[51];
    if (scanf("%s", word) == -1) return 0;
    int len = strlen(word);
    for (int i = 0; i < len - 2; i++) {
        for (int j = i + 1; j < len - 1; j++) {
            char temp[51] = {0};
            int t_idx = 0;
            for (int k = i; k >= 0; k--) temp[t_idx++] = word[k];
            for (int k = j; k >= i + 1; k--) temp[t_idx++] = word[k];
            for (int k = len - 1; k >= j + 1; k--) temp[t_idx++] = word[k];
            temp[t_idx] = '\0';
            if (min_word[0] == '\0' || strcmp(temp, min_word) < 0) {
                strcpy(min_word, temp);
            }
        }
    }
    printf("%s\n", min_word);
    return 0;
}