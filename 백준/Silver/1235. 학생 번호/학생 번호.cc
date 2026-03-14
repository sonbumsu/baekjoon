#include <stdio.h>
#include <string.h>

int main() {
    int n, l, k;
    char s[1000][101];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%s", s[i]);
    l = strlen(s[0]);

    for (k = 1; k <= l; k++) {
        int dup = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (strcmp(s[i] + l - k, s[j] + l - k) == 0) {
                    dup = 1;
                    break;
                }
            }
            if (dup) break;
        }
        if (!dup) {
            printf("%d\n", k);
            return 0;
        }
    }
    return 0;
}