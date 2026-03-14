#include<stdio.h>
int main(){
    int n;
    char str[100000];
    scanf("%d", &n);
    scanf("%s", str);
    for(int i= n - 5 ; i < n ;i++){
        printf("%c", str[i]);
    }
    return 0;
}