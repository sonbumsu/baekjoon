#include<stdio.h>
int h(int n){
    if(n < 100) return 1;
    if(n == 1000) return 0;
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    if((b - a) == (c - b)) return 1;
    return 0;
}
int main(){
    int N, count = 0;   
    if(scanf("%d", &N) == 1){
        for (int i = 1; i <= N; i++){
            if(h(i)) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}