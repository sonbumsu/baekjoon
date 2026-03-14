#include<stdio.h>
int main(){
    int n, j, h, r = 0;
    if(scanf("%d %d %d", &n, &j, &h) != 3) return 0;
    while(j != h){
        j = (j + 1) / 2;
        h = (h + 1) / 2;
        r++;
    }
    printf("%d\n", r);
    return 0;
}