#include<stdio.h>
void asdf(long long x, long long y){
    long long z =(100 * y) / x;
    if(z >= 99){
        printf("-1\n");
        return;
    }
    long long a = 0, b = 1000000000;
    while(a <= b){
        long long c =(a + b) / 2;
        int temp =(100 *(y + c)) /(x + c);
        if(temp > z){
            b = c - 1;
        } else{
            a = c + 1;
        }
    }
    printf("%lld\n", a);
}

int main(){
    long long x, y;
    scanf("%lld %lld", &x, &y);
    asdf(x, y);
    return 0;
}
