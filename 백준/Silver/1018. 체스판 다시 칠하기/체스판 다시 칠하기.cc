#include <stdio.h>
int main(){
    char arr[50][51];
    int a, b, c = 3000, t1 = 0, t2 = 0;
    scanf("%d%d", &a, &b);
    for (int i = 0; i < a; i++)
        scanf("%s", arr[i]);
    for (int x = 0; x < a - 7; x++) {
        for (int y = 0; y < b - 7; y++) {
            for (int i = x; i < x + 8; i++) {
                for (int j = y; j < y + 8; j++) {
                    if (((i - x + j - y) % 2) == 0) {
                        if (arr[i][j] != 'W') t1++;
                    }
                    else {
                        if (arr[i][j] != 'B') t1++;
                    }
                }
            }
            for (int i = x; i < x + 8; i++) {
                for (int j = y; j < y + 8; j++) {
                    if (((i - x + j - y) % 2) == 0) {
                        if (arr[i][j] != 'B') t2++;
                    }
                    else {
                        if (arr[i][j] != 'W') t2++;
                    }
                }
            }
            int res = t1 < t2 ? t1 : t2;
            if (res < c) c = res;
            t1 = 0;
            t2 = 0;
        }
    }
    printf("%d", c);
    return 0;
}
