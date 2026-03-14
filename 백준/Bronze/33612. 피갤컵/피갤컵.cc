#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int y = 2024;
    int m = 8 + (n - 1) * 7;
    printf("%d %d\n", y + (m - 1) / 12, (m - 1) % 12 + 1);
    return 0;
}
