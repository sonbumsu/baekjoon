#include<stdio.h>
int main(){
    int n, a, b, c = 0, d = 0;
    scanf ("%d", &n) ;
    int i = 0;
    while(i < n){
        scanf ("%d %d", &a, &b);
        if(a > b) c++;
        else if(a < b) d++;
        i++;
    }
    printf("%d %d\n", c, d);
    return 0;
}