#include <stdio.h>

int main() {
    int a, b, c;
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) break;

        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;

        int sum = a*a + b*b + c*c - max*max;

        if (sum == max*max) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
