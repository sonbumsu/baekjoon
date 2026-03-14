#include<stdio.h>
#include<string.h>
int is_same(char a[], char b[]){
	if(strlen(a) != strlen(b)) return 0;
	for(int i = 0; i < strlen(a); i++) if(a[i] != b[i]) return 0;
	return 1;
}
int main(){
	char a[105], b[105], c;
	scanf("%s %c %s", a, &c, b);
	if(c == '+'){
		if(is_same(a, b)){
			printf("2");
			for(int i = 0; i < strlen(a) - 1; i++) printf("0");
			return 0;
		}
		if(strlen(a) > strlen(b)){
			a[strlen(a) - strlen(b)] = '1';
			printf("%s", a);
		}
		else{
			b[strlen(b) - strlen(a)] = '1';
			printf("%s", b);
		}
	}
	else{
		printf("1");
		for(int i = 0; i < strlen(a) + strlen(b) - 2; i++) printf("0");
	}
	return 0;
}