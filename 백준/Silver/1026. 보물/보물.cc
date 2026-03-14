#include<stdio.h>
int main(){
	int n, i, j, temp, AB = 0, a[50], b[50];
	scanf("%d", &n);
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	for(i = 0; i < n; i++) scanf("%d", &b[i]);
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - (1 + i); j++){
			if(a[j] < a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < n - 1; i++) {
		for(j = 0; j < n - (1 + i); j++){
			if(b[j] > b[j + 1]){
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < n; i++){
		AB += a[i] * b[i];
	}
	printf("%d", AB);

}