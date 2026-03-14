#include <stdio.h>
int main() {
    int N, L, D, tt = 0, st[10000] = {0};
    scanf("%d %d %d", &N, &L, &D);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < L; j++) {
            st[tt] = 1;
            tt++;
        }
        for (int j = 0; j < 5; j++) {
            tt++;
        }
    }
    tt -= 5;
    for (int t = 0;; t += D) {
        if (st[t] == 0) {
            printf("%d\n", t);
            break;
        }
    }
    return 0;
}
