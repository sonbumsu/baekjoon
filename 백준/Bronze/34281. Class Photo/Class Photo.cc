#include <stdio.h>

int main() {
    int w, l;

    if (scanf("%d %d", &w, &l) != 2) return 0;

    printf("%d\n", w * l);

    return 0;
}