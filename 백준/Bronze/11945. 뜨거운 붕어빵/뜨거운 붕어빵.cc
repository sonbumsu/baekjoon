#include <stdio.h>
#include <string.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    char s[11];
    for(int i = 0; i < n; i++){
        scanf("%s", s);
        for(int j = m - 1; j >= 0; j--) printf("%c", s[j]);
        printf("\n");
    }
    return 0;
}
