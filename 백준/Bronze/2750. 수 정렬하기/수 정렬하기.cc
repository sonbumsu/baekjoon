#include<stdio.h>
int main(){
	int a, b[1001] = { 0 }, c;
	scanf("%d", &a);
	for(int i = 0; i < a; i++){
		scanf("%d", &b[i]);
	}
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a - 1; j++){
			if(b[j + 1] < b[j]){
				c = b[j + 1];
				b[j + 1] = b[j];
				b[j] = c;
			}
		}
	}
	for(int i = 0; i < a; i++){
		printf("%d\n", b[i]);
	}
	return 0;
}