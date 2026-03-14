#include <stdio.h>
int main(){
    int n, i = 2, j = 5, c = 2;
    scanf("%d", &n);
    if(n == 1){
        printf("%d", 1);
        return 0;
    }
    while(1){
        if(i <= n && i + j >= n){
            printf("%d", c);
            break;
        }
        i = i + j + 1;
        j += 6;
        c++;
    }
    return 0;
}