#include <stdio.h>

int N;
int map[101][101];

int main() {
    if (scanf("%d", &N) != 1) return 0;

    char k;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf(" %c", &k); 
            if (k == '.') map[i][j] = 1;
            else map[i][j] = 0;
        }
    }

    int row_total = 0;
    for (int i = 0; i < N; i++) {
        int cnt_row = 0;
        for (int j = 0; j < N; j++) {
            if (map[i][j] == 1) cnt_row++; 
            else cnt_row = 0;

            if (cnt_row == 2) row_total++;
        }
    }

    int col_total = 0;
    for (int i = 0; i < N; i++) {
        int cnt_col = 0;
        for (int j = 0; j < N; j++) {
            if (map[j][i] == 1) cnt_col++; 
            else cnt_col = 0;

            if (cnt_col == 2) col_total++;
        }
    }

    printf("%d %d\n", row_total, col_total);

    return 0;
}