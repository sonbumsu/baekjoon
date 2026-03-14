#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char a[333335], b[10][4] = {"","1","10","11","100","101","110","111"}, c[10][4] = {"000","001","010","011","100","101","110","111"};
	scanf("%s", a);
	n = strlen(a);
	if(a[0] == '0'){
		printf("0");
	}
	else{
		printf("%s", b[a[0] - '0']);
		for (int i = 1; i < n; i++){    
			printf("%s", c[a[i] - '0']);
		}
	}
	return 0;
}