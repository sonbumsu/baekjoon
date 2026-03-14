#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    scanf("%s", a);
    int n = strlen(a);
    for(int i = 1; i <= n; i++){
        printf("%c", a[n - i]);
    }
    return 0;
}