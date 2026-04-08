#include <stdio.h>

int main() {
    int n;
    long long max_area = 0;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        int h, w;
        scanf("%d %d", &h, &w);

        long long current_area = (long long)h * w;

        if (current_area > max_area) {
            max_area = current_area;
        }
    }

    printf("%lld\n", max_area);

    return 0;
}