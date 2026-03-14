#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    char b[m + 1];
    for(int i = 0; i < n; i++){
        scanf("%s", b);
        for(int j = 0; j < m; j++){
            a[i][j] = b[j] - '0';
        }
    }
    int c = 1;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < m - 1; j++){
            for(int k = 1; ; k++){
                if((i + k >= n) || (j + k >= m)){
                    break;
                }
                if(a[i][j] == a[i + k][j] && a[i][j] == a[i][j + k] && a[i][j] == a[i + k][j + k]){
                    if((k + 1) * (k + 1) > c){
                        c = (k + 1) * (k + 1);
                    }
                }
            }
        }
    }
    printf("%d\n", c);
    return 0;
}