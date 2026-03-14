#include <stdio.h>
int asdf(int asdfg[], int n) {
    int i, j, a;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < (n - i) - 1; j++) {
            if(asdfg[j] < asdfg[j + 1]) {
                a = asdfg[j];
                asdfg[j] = asdfg[j + 1];
                asdfg[j + 1] = a;
            }
        }
    }
    return 0;
}
int main() {
    int i, j, a[8], b[8], c = 0, d[5];
    for(i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    asdf(a, 8);
    for(i = 0; i < 5; i++) {
        c += a[i];
    }
    printf("%d\n", c);
    int count = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 8; j++) {
            if(a[i] == b[j]) {
                d[count++] = j + 1;
                b[j] = -1;
                break;
            }
        }
    }
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(d[i] > d[j]) {
                int tmp = d[i];
                d[i] = d[j];
                d[j] = tmp;
            }
        }
    }
    for(i = 0; i < 5; i++) {
        printf("%d ", d[i]);
    }
    return 0;
}