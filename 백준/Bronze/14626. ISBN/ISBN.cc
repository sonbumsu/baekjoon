#include<stdio.h>
#include<string.h>
int main(){
    char s[105];
    scanf("%s", s);
    int k = 0, a = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != '*'){	
            if(i % 2 == 0) k += (s[i] - '0');
            else k +=(s[i] - '0') * 3;
        }
		else if(i % 2 == 1) a = 1;
    }
    int v = (a == 1) ? 3 : 1;
    for(int i = 0; i <= 9; i++){
        if((i * v + k) % 10 == 0){
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}
