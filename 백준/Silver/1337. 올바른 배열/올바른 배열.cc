#include <stdio.h>
#include <stdlib.h>
int co(const void *a, const void *b) {
    long long n1 = *(long long *)a;
    long long n2 = *(long long *)b;
    if (n1 < n2) return -1;
    if (n1 > n2) return 1;
    return 0;
}
int main() {
    int n;
    long long a[50];
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    qsort(a, n, sizeof(long long), co);
    int m = 4;
    for (int i = 0; i < n; i++) {
        int c = 0;
        long long s = a[i];
        long long e = s + 4;
        for (int j = i; j < n; j++) {
            if (a[j] >= s && a[j] <= e) c++;
            else if (a[j] > e) break;
        }
        int ca = 5 - c;
        if (ca < m) m = ca;
    }
    printf("%d\n", m);
    return 0;
}