#include <stdio.h>
int main() {
    long long n;
    while (1) {
        scanf("%lld", &n);
        if (n == 0) break;
        printf("%lld\n", n * (n + 1) / 2);
    }
    return 0;
}