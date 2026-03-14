#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	scanf("%s", a);
	int n = strlen(a), sum = n;
	for(int i = 0; i < n; i++){
		if(a[i] == ':') sum += 1;
		else if(a[i] == '_') sum += 5;
	}
	printf("%d", sum);
	return 0;
}