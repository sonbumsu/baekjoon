#include<stdio.h>
int main(){
    int N, F, a = 0;
    scanf("%d %d", &N, &F);
    N /= 100;
    N *= 100;
    while((N + a) % F != 0 && a < 100){
        a++;
    }
    if(a < 10) printf("0%d\n", a);
    else printf("%d\n", a);
    return 0;
}
