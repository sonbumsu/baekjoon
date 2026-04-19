#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_value(int r, int c) {
    int L = abs(r) > abs(c) ? abs(r) : abs(c);
    int max_val = (2 * L + 1) * (2 * L + 1);
    int edge = 2 * L;

    if (r == L) return max_val - (L - c);
    if (c == -L) return max_val - edge - (L - r);
    if (r == -L) return max_val - 2 * edge - (L + c);
    return max_val - 3 * edge - (L + r);
}

int get_length(int n) {
    int len = 0;
    if (n == 0) return 1;
    while (n > 0) {
        n /= 10;
        len++;
    }
    return len;
}

int main() {
    int r1, c1, r2, c2;
    if (scanf("%d %d %d %d", &r1, &c1, &r2, &c2) == 0) return 0;

    int arr[55][10];
    int max_num = 0;

    for (int i = r1; i <= r2; i++) {
        for (int j = c1; j <= c2; j++) {
            arr[i - r1][j - c1] = get_value(i, j);
            if (arr[i - r1][j - c1] > max_num) {
                max_num = arr[i - r1][j - c1];
            }
        }
    }

    int max_len = get_length(max_num);

    for (int i = 0; i <= r2 - r1; i++) {
        for (int j = 0; j <= c2 - c1; j++) {
            printf("%*d", max_len, arr[i][j]);
            if (j != c2 - c1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}