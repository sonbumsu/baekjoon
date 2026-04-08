#include <stdio.h>
#include <string.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char str[101];
    while (n--) {
        scanf("%s", str);

        int len = strlen(str);
        if (len > 0) {
            putchar(str[0]);

            for (int i = 1; i < len; i++) {
                if (str[i] != str[i - 1]) {
                    putchar(str[i]);
                }
            }
            putchar('\n');
        }
    }

    return 0;
}