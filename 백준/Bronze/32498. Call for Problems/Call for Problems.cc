#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num % 2 == 1 || num % 2 == -1) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
