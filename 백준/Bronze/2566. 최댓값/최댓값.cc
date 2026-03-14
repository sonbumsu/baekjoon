#include<stdio.h>
int a, x, y, asdf = -1;
int main(){
	for(int i = 1; i <= 9; i++){
		for(int k = 1; k <= 9; k++){
			scanf("%d", &a);
			if(asdf <= a){
				asdf = a;
				x = i;
				y = k;
			}
		}
	}
	printf("%d\n%d %d", asdf, x, y);
	return 0;
}