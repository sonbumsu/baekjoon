#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a, b, c = m;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        m = m + a - b;
        if(m < 0){
            c = 0;
            break;
        }
        if(m >= c) c = m;
    }
    printf("%d", c);
    return 0;
}
