#include <stdio.h>
#include <string.h>
char a[1000001];
int b[100];
int main(){
    int m = 0, n;
    char c;

    scanf("%s",a);
    n = strlen(a);
    for(int i = 0; i < n; i++)
        if(a[i] >= 'a') b[a[i] - 'a']++;
        else b[a[i] - 'A']++;

    for(int i = 0; i < 26; i++)
        if(b[i] == m){
            c = '?';
        }
        else if(b[i] > m){
            m = b[i];
            c = 'A' + i;
        }

    printf("%c",c);

    return 0;
}