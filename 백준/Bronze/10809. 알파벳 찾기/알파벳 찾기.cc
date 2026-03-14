#include<stdio.h>
#include<string.h>
int main(){
    char S[101];
    int a[26];
    for(int i = 0; i < 26; i++){
        a[i] = -1;
    }
    scanf("%s", S);
    int len = strlen(S);
    for(int i = 0; i < len; i++){
        int b = S[i] - 'a';
        if(a[b] == -1){
            a[b] = i;
        }
    }
    for(int i = 0; i < 26; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
