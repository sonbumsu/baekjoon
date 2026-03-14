#include <stdio.h>
int main(){
    int a, b = 1, c[10];
    for(int i = 0; i < 10; i++) c[i] = 0;
    for(int i = 0; i < 3; i++){
        scanf("%d", &a);
        b *= a;
    }
    for(int i = 0; b > 0; i++){
        a = b % 10;
        c[a] += 1;
        b /= 10;
    }
    for(int i = 0; i < 10; i++) printf("%d\n", c[i]);
}