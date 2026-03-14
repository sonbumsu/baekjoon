#include<stdio.h>
int main(){
    int a, b;
     scanf("%d %d", &a, &b);
     b -= 45;
     if(b < 0){
        a -= 1;
        b = 60 + b;
     }
     if(a < 0){
        a = 24 + a;
     }
     printf("%d %d", a, b);
     return 0;
}