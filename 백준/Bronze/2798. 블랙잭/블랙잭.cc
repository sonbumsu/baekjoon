#include<stdio.h>
int main(){
	int a[101], n, m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int b = 0, c = 0;
	for(int i = 0; i < n - 2; i++){
		for(int j = i + 1; j < n - 1; j++){ //j는 i+1 이기에 1에서 시작
			for(int k = j + 1; k < n; k++){ // k는 j+1이기에 2에서 시작.
				c = a[i] + a[j] + a[k];
				if(c > b && c <= m) b = c;
			}
		}
	}
	printf("%d", b);
	return 0;
}