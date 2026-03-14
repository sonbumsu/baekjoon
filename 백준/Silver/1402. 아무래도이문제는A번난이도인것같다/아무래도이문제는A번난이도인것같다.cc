#include<stdio.h>
int main(){
    int t;
    long long a, b;
    if(scanf("%d", &t) == 1){
        while(t--){
            if(scanf("%lld %lld", &a, &b) == 2){
                printf("yes\n");
            }
        }
    }
    return 0;
}