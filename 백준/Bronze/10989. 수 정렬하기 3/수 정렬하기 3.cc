#include<stdio.h>
int main(){
    int n, x;
    scanf("%d", &n);
    int a[10001] = {0};
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        a[x]++;
    }
    for(int i = 1; i <= 10000; i++){
        while(a[i]--){
            printf("%d\n", i);
        }
    }
    return 0;
}
