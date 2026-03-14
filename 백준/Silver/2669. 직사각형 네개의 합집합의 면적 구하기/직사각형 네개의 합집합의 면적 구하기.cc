#include<stdio.h>
int main(){
    int g[101][101] = {0,};
    int x1, y1, x2, y2;
    int a = 0;
    for(int i = 0; i < 4; i++){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for(int x = x1; x < x2; x++){
            for(int y = y1; y < y2; y++) g[x][y] = 1;
        }
    }
    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 100; j++){
            if(g[i][j] == 1) a++;
        }
    }
    printf("%d\n", a);
    return 0;
}