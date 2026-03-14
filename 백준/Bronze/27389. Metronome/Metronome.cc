#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    double ans = n / 4.0;
    if ((int)(ans * 100) % 10 == 0) {
        printf("%.1f\n", ans);
    }
    else {
        printf("%.2f\n", ans);
    }
    return 0;
}
