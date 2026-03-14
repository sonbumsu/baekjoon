#include<stdio.h>
#include<stdlib.h>
int a[100001], b[200010], c = 100000, d = 100000;
void asdf1(int x){
    b[--c] = x;
}
void asdf2(int x){
    b[d++] = x;
}
int asdf3(){
    return b[c++];
}
int asdf4(){
    return c == d;
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i <= 100000; i++) a[i] = -1;
    asdf2(n);
    a[n] = 0;
    while(!asdf4()){
        int x = asdf3();
        if(x == k){
            printf("%d\n", a[x]);
            return 0;
        }
        if(x * 2 <= 100000 && a[x * 2] == -1){
            a[x * 2] = a[x];
            asdf1(x * 2);
        }
        if(x - 1 >= 0 && a[x - 1] == -1){
            a[x - 1] = a[x] + 1;
            asdf2(x - 1);
        }
        if(x + 1 <= 100000 && a[x + 1] == -1){
            a[x + 1] = a[x] + 1;
            asdf2(x + 1);
        }
    }

    return 0;
}
