#include <stdio.h>
#include <string.h>
int main(){
    int a, b = 1;
    char c[6] = {1};
    while(1){
        scanf("%s", c);
        if(c[0] == '0') break;
        a = strlen(c);
        b = 1;
        for(int i = 0; i < a/2 + 1; i++){
            if(c[i] == c[a-1]) a--;
            else{
                b = 0;
                break;
            }
        }

        if(b) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}