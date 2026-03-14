#include<stdio.h>
#include<string.h>
int n, m, k, a[51][51], v[51][51], dx[4] ={0, 0, 1, -1}, dy[4] ={1, -1, 0, 0};
int dfs(int y, int x){
    if(v[y][x]) return 0;
    v[y][x] = 1;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if(nx >= 0 && ny >= 0 && nx < m && ny < n && a[ny][nx])
            dfs(ny, nx);
    }
    return 1;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &m, &n, &k);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                a[i][j] = 0;
                v[i][j] = 0;
            }
        }

        for(int i = 0; i < k; i++){
            int x, y;
            scanf("%d %d", &x, &y);
            a[y][x] = 1;
        }

        int c = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] && !v[i][j]){
                    if(dfs(i, j)) c++;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
