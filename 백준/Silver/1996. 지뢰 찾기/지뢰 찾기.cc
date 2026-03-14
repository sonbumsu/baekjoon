#include <stdio.h>
int n;
char m[1005][1005];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main(){
    if(scanf("%d", &n) != 1) return 0;
    for(int i = 0; i < n; i++) scanf("%s", m[i]);
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(m[i][j] != '.') printf("*");
            else{
                int ms = 0;
                for(int k = 0; k < 8; k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if(ni >= 0 && ni < n && nj >= 0 && nj < n){
                        if(m[ni][nj] != '.') ms += (m[ni][nj] - '0');
                    }
                }
                if(ms >= 10) printf("M");
                else printf("%d", ms);
            }
        }
        printf("\n");
    }
    return 0;
}