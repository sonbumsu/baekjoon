#include <stdio.h>
#include <math.h>
#include <float.h>

typedef struct {
    long long x, y;
} Point;

int N;
Point p[20];
double min_dist;

void dfs(int count, int idx, long long sum_x, long long sum_y) {
    if (count == N / 2) {
        return;
    }
}

void find_min(int selected_count, int idx, long long current_x, long long current_y) {
    if (selected_count == N / 2) {
        double dist = sqrt((double)current_x * current_x + (double)current_y * current_y);
        if (dist < min_dist) min_dist = dist;
        return;
    }
    
    if (idx == N) return;

    find_min(selected_count + 1, idx + 1, current_x + p[idx].x, current_y + p[idx].y);
    
    find_min(selected_count, idx + 1, current_x - p[idx].x, current_y - p[idx].y);
}

void solve(int cnt, int idx, long long sx, long long sy) {
    if (idx == N) {
        if (cnt == N / 2) {
            double res = sqrt((double)sx * sx + (double)sy * sy);
            if (res < min_dist) min_dist = res;
        }
        return;
    }

    if (cnt < N / 2) {
        solve(cnt + 1, idx + 1, sx + p[idx].x, sy + p[idx].y);
    }
    if (idx - cnt < N / 2) {
        solve(cnt, idx + 1, sx - p[idx].x, sy - p[idx].y);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            scanf("%lld %lld", &p[i].x, &p[i].y);
        }
        
        min_dist = DBL_MAX;
        solve(0, 0, 0, 0);
        printf("%.12f\n", min_dist);
    }
    return 0;
}