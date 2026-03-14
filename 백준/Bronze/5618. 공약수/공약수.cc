#include<stdio.h>
int main() {
	int n, temp;
    scanf("%d", &n);
	int ary[10];
	for(int i = 0; i < n ;i++) scanf("%d", &ary[i]);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(ary[i] > ary[j]){
                temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
	int min = ary[0];
	int cnt = 1;
	for (int i = 1; i <= min; i++){
		if (min % i == 0){
			for (int j = 1; j < n; j++) {
				if (ary[j] % i == 0) cnt++;
				else break;
			}
			if (cnt == n) printf("%d\n", i);
			cnt = 1;	
		}
	}
    return 0;
}