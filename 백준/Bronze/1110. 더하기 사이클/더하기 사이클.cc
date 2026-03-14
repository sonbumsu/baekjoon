#include <stdio.h>
int main() {
    int n, t, a, b, next;
    int c = 0;
    scanf("%d", &n);
    t = n;
    while (1) {
        c++;
        a = t / 10;
        b = t % 10;
        next = (b * 10) + ((a + b) % 10);
        if (next == n) break;
        t = next;
    }
    printf("%d\n", c);
    return 0;
}