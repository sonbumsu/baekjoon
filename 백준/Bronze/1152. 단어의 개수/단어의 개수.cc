#include <stdio.h>
#include <string.h>
char a[1000001];
int main(){
    int b = 0;
    scanf("%[^\n]s",a);
    if(a[0]!=' ') b++;
    for(int i = 1; i < strlen(a); i++)
        if(a[i - 1] == ' ' && a[i] != ' ') b++;
    printf("%d", b);
    return 0;
}