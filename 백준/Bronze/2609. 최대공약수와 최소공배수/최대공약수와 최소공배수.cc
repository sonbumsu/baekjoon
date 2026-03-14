#include <stdio.h>
int asdf(int a, int b){
	int as = 1, df, asdf = 1;
	df = a < b ? a : b;
	while (as <= df){
		if (a % as == 0 && b % as == 0)
			asdf = as;
		as += 1;
	}
	return asdf;
}
 
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n%d", asdf(a, b), (a * b) / asdf(a, b));
	return 0;
}