#include<stdio.h>
#define MAX 100000
int a[MAX];
int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	for(int i = 0; i < N; i++){
			int b;
			scanf("%d", &b);
			a[i+1] = a[i] + b;
		}
	for(int i = 0; i < M; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		printf("%d\n", a[y] - a[x-1]);
	}
	return 0;
}