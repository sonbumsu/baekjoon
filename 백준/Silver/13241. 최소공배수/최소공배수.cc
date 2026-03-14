#include <stdio.h>
long long asdf(long long a, long long b){
	if(b == 0) return a;
	else return asdf(b, a % b);
}   
long long asdfg(long long a, long long b){
	return (a * b) / asdf(a, b);
}
int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", asdfg(a, b));
	return 0;
}