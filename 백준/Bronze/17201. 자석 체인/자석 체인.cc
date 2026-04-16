#include <stdio.h>

int main() {
    int N;
    char a[11];

    if (scanf("%d", &N) != 1) return 0;

    scanf("%s", a);

    for (int i = 1; i < N; i++) {
        if (a[2 * i - 1] == a[2 * i]) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");

    return 0;
}