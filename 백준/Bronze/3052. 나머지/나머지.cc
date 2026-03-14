#include <stdio.h>
int a[42];
int main(){
	int x, b = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d", &x);
		a[x % 42] = 1;
	}
	for(int i = 0; i < 42; i++)
		b += a[i];
	printf("%d", b);
	return 0;
}