#include<stdio.h>
int main(){
    int a, s = 0;
    for(int i = 0; i < 6; i++){
        scanf("%d", &a);
        s += a * 5;
    }
    printf("%d", s);
    return 0;
}