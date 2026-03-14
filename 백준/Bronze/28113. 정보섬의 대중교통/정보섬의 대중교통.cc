#include <stdio.h>
int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    if (N > B) {
        printf("Bus\n");
    } else {
        if (A < B) {
            printf("Bus\n");
        } else if (A > B) {
            printf("Subway\n");
        } else {
            printf("Anything\n");
        }
    }

    return 0;
}
