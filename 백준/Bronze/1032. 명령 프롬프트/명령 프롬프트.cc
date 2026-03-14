#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[51][51];
    
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }
    
    int len = strlen(s[0]);
    for (int i = 0; i < len; i++) {
        char c = s[0][i];
        int diff = 0;
        
        for (int j = 1; j < n; j++) {
            if (c != s[j][i]) {
                diff = 1;
                break;
            }
        }
        
        if (diff) printf("?");
        else printf("%c", c);
    }
    printf("\n");
    
    return 0;
}