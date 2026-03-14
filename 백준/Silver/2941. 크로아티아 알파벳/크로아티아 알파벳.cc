#include<stdio.h>
#include<string.h>
int main(){
    int b = 0;
    char a[1000];
    scanf("%s", a);
    int n = strlen(a);
    for(int i = 0; i < n; i++){
        if(a[i] == 'c' && (a[i + 1] == '=' || a[i + 1] == '-')){
            b++;
            a[i] = 0;
            a[i + 1] = 0;
        }
        else if(a[i] == 'd' && a[i + 1] == '-'){
            b++;
            a[i] = 0;
            a[i + 1] = 0;
        }
        else if(a[i] == 'd' && a[i + 1] == 'z' && a[i + 2] == '='){
            b++;
            a[i] = 0;
            a[i + 1] = 0;
            a[i + 2] = 0;
        }
        else if(a[i + 1] == 'j' && (a[i] == 'l' || a[i] == 'n')){
            b++;
            a[i] = 0;
            a[i + 1] = 0;
        }
        else if((a[i] == 'z' || a[i] == 's') && a[i + 1] == '='){
            b++;
            a[i] = 0;
            a[i + 1] = 0;
        }
        else if(a[i] != 0) b++;
    }
    printf("%d", b);
    return 0;
}