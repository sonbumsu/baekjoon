#include <stdio.h>
#include <string.h>

int main() {
    int n, x, cnt = 0;
    char s[20];

    scanf("%d", &n);

    for (x = 666;; x++) {
        sprintf(s, "%d", x);
        if (strstr(s, "666") != NULL) {
            cnt++;
            if (cnt == n) {
                printf("%d", x);
                break;
            }
        }
    }
    return 0;
}
