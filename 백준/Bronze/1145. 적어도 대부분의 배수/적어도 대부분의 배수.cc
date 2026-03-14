#include<stdio.h>
int main(){
	int a[6], b = 0, min = 101;
	for(int i = 0; i < 5; i++){
		scanf("%d", &a[i]);
		if(a[i] < min) min = a[i];
	}
	while(1){
		if(b >= 3) break;
		else{
			b = 0;
			min ++;
		}
		
		for(int i = 0; i < 5; i++){
			if(min % a[i] == 0) b++;
		}
	}
	printf("%d", min);
	return 0;
}