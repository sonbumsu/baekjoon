#include<stdio.h>
int main(){
    int a, b, c, d, e;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        scanf("%d", &b);
        scanf("%d", &c);
        for(int j = 0; j < c; j++){
            scanf("%d %d", &d, &e);
            b += d * e;
        }
        printf("%d\n", b);
    }
    return 0;
}