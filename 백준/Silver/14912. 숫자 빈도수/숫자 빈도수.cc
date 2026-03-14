#include<stdio.h>
int main(){
    int n, d, cnt = 0;
    scanf("%d %d", &n, &d);
    for(int i = 1; i <= n; i++){
        int x = i;
        while(x > 0){
            if(x % 10 == d) cnt++;
            x /= 10;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
