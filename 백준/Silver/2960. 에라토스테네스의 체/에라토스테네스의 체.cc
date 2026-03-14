#include<stdio.h>
int main(){
	int a[1000] = { 0, }, N, K, b, c = 0;
	scanf("%d %d", &N, &K);
	for(int i = 2; i <= N; i++){
		for(int j = i; j <= N; j = j + i){
			b = 0;
			for (int x = 0; a[x] != 0; x++){
				if(a[x] == j) b++;
			}
			if(b == 0) a[c++] = j;
		}
    }
	printf("%d", a[K - 1]);
	return 0;
}