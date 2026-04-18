#include <stdio.h>

int main() {
    int x, n, p;
    int total = 0;

    if (scanf("%d", &x) != 1) return 0;
    if (scanf("%d", &n) != 1) return 0;

    total = x * (n + 1);

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &p) == 1) {
            total -= p;
        }
    }

    printf("%d\n", total);

    return 0;
}