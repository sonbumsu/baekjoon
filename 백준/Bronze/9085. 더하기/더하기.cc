#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        d = 0;
        scanf("%d", &b);
        for(int j = 0; j < b; j++){
            scanf("%d", &c);
            d += c;
        }
        printf("%d\n", d);
    }
    return 0;
}