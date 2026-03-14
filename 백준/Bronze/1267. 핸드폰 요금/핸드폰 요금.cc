#include<stdio.h>
int main(){
	int n, a, b = 0, c = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a);
		c += (a / 30 + 1) * 10;
		b += (a / 60 + 1) * 15;
	}
	if (b < c) printf("M %d", b);
	else if (b > c) printf("Y %d", c);
	else printf("Y M %d", b);
    return 0;
}