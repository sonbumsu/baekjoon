#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    scanf("%s", s);
    int a = strlen(s);
    for(int i = 0; i < a - 1; i++){
        for(int j = 0; j < a - 1 - i; j++){
            if(s[j] < s[j + 1]){
                char b = s[j];
                s[j] = s[j + 1];
                s[j + 1] = b;
            }
        }
    }
    printf("%s\n", s);
    return 0;
}
