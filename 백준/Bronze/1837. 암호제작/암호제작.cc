#include<stdio.h>
#include<string.h>
int main(){
    char asdf[101];
    int a, b, c, d = 1000001;
    scanf("%s %d", asdf, &a);
    for(int i = 2; i <= a; i++){
        b = 1;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                b = 0;
                break;
            }
        }
        if(!b) continue;
        c = 0;
        for(int j = 0; j < strlen(asdf); j++) c = (c * 10 + asdf[j] - '0') % i;
        if(!c){
            d = i;
            break;
        }
    }
    if(d < a) printf("BAD %d", d);
    else printf("GOOD");
}