#include <stdio.h>
int main() {
    int n, min = 1000001, max = 1, c;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &c);
        if (c < min) min = c;
        if (c > max) max = c;
    }
    printf("%d\n", min * max);
    return 0;
}