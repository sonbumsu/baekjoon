#include<stdio.h>
int main(){
    int a, b, c, sum = 0;
    scanf("%d %d %d", &a, &b, &c);
    for(int i = 0; i < a; i++){
        sum += ((a - i) * b) + ((a - i) * (a - i) * c);
    }
    printf("%d", sum);
    return 0;
}