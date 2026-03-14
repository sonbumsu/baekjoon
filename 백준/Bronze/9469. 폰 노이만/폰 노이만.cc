#include<stdio.h>
int main(){
	int p, n;
	float d, a, b, f;
	scanf("%d", &p);
	for(int i = 0; i < p; i++){
		scanf("%d %f %f %f %f", &n, &d, &a, &b, &f);
		printf("%d %f\n", n, (d / (a + b)) * f);
	}
	return 0;
}