#include<stdio.h>
int main(){
	char a[50][50] = { 0,};
	int b, c;
	scanf("%d %d", &b, &c);
	for (int i = 0; i < b; i++){
		scanf("%s", a[i]);
	}
	int d = b, e = c;
	for (int i = 0; i < b; i++){
		for (int j = 0; j < c; j++){
			if (a[i][j] == 'X'){
				d--;
				break;
			}
		}
	}
	for (int i = 0; i < c; i++){
		for (int j = 0; j < b; j++){
			if (a[j][i] == 'X'){
				e--;
				break;
			}
		}
	}
	if (b == 1){
		printf("%d\n", e);
	}
	else if (c == 1){
		printf("%d\n", d);
	}
	else{
		printf("%d\n", d < e ? e : d);

	}
	return 0;
}