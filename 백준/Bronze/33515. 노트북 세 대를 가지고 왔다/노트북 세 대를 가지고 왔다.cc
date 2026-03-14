#include <stdio.h>
int main() {
    int t1, t2;
    if (scanf("%d %d", &t1, &t2) == EOF) return 0;
    if (t1 < t2) printf("%d\n", t1);
    else printf("%d\n", t2);
    return 0;
}