#include <stdio.h>
#include <math.h>

int is_perfect_square(long long n) {
    if (n < 0) return 0;
    long long root = (long long)sqrt(n);
    return (root * root == n);
}

int main() {
    int N, M;
    char board[10][10];
    long long max_square = -1;

    if (scanf("%d %d", &N, &M) != 2) return 0;
    for (int i = 0; i < N; i++) {
        scanf("%s", board[i]);
    }

    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            for (int dr = -N; dr < N; dr++) {
                for (int dc = -M; dc < M; dc++) {
                    if (dr == 0 && dc == 0) {
                        long long num = board[r][c] - '0';
                        if (is_perfect_square(num)) {
                            if (num > max_square) max_square = num;
                        }
                        continue;
                    }

                    long long current_num = 0;
                    int curr_r = r;
                    int curr_c = c;

                    while (curr_r >= 0 && curr_r < N && curr_c >= 0 && curr_c < M) {
                        current_num = current_num * 10 + (board[curr_r][curr_c] - '0');
                        
                        if (is_perfect_square(current_num)) {
                            if (current_num > max_square) {
                                max_square = current_num;
                            }
                        }
                        
                        curr_r += dr;
                        curr_c += dc;
                    }
                }
            }
        }
    }

    printf("%lld\n", max_square);

    return 0;
}