#include<stdio.h>
int main(){
    int a[4], b, c, d, temp;
    a[1] = 1;
    a[2] = 0;
    a[3] = 0;
    scanf("%d", &d);
    for(int i = 0; i < d; i++){
        scanf("%d %d", &b, &c);
        temp = a[b];
        a[b] = a[c];
        a[c] = temp;
    }
    for(int i = 1; i <= 3; i++){
        if(a[i] == 1){
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}