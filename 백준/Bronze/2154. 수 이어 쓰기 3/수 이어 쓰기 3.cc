#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char full_string[600000];

int main() {
    char n_str[10];
    if (scanf("%s", n_str) == EOF) return 0;

    int n_val = atoi(n_str);
    int current_pos = 0;

    for (int i = 1; i <= n_val; i++) {
        current_pos += sprintf(&full_string[current_pos], "%d", i);
    }

    char *ptr = strstr(full_string, n_str);

    if (ptr != NULL) {
        printf("%ld\n", (ptr - full_string) + 1);
    }

    return 0;
}