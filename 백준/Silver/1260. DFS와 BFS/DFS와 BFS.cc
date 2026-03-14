#include <stdio.h>
int g[1001][1001], v1[1001], v2[1001], q[1001], asdfg, asdfgh;
int dfs(int V, int N) {
    int i;
    v1[V] = 1;
    printf("%d ", V);
    for (i = 1; i <= N; i++) {
        if (g[V][i] == 1 && v1[i] == 0) {
            dfs(i, N);
        }
    }
    return 0;
}
int bfs(int V, int N) {
    int i, asdf;
    asdfg = 0;
    asdfgh = 0;
    q[asdfgh++] = V;
    v2[V] = 1;
    while (asdfg < asdfgh) {
        asdf = q[asdfg++];
        printf("%d ", asdf);
        for (i = 1; i <= N; i++) {
            if (g[asdf][i] == 1 && v2[i] == 0) {
                q[asdfgh++] = i;
                v2[i] = 1;
            }
        }
    }
    return 0;
}
int main() {
    int N, M, V, i, a, b;
    scanf("%d %d %d", &N, &M, &V);
    for (i = 0; i < M; i++) {
        scanf("%d %d", &a, &b);
        g[a][b] = 1;
        g[b][a] = 1;
    }
    dfs(V, N);
    printf("\n");
    bfs(V, N);
    return 0;
}
