#include<stdio.h>
int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n + 1; i++){
		for(int j = 0; j < i + 1; j++){
			sum += i + j;
		}
	}
	printf("%d", sum);
	return 0;
}