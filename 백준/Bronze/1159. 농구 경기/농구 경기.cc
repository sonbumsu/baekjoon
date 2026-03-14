#include<stdio.h>
#include<string.h>
int main(){
    int a, b[26] = { 0 }, c = 0;
    char asdf[150][30] = { 0 };
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        scanf("%s", asdf[i]);
    }
    for(int i = 0; i < a; i++){
        b[asdf[i][0] - 97]++;
    }
    for(int i = 0; i < 26; i++){
        if(b[i] >= 5){
            printf("%c", i + 97);
            c++;
        } 
    }
    if(c < 1){
        printf("PREDAJA");
    }
    return 0;
}