#include<stdio.h>
int asdf(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
  return 0;
}
int main() {
    int n, m, a, b, arr[100];
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++) arr[i] = i;
	while(m--){
		scanf("%d %d", &a, &b);
		for(int i = 0; i <= (b - a) / 2; i++) asdf(&arr[a + i], &arr[b - i]);
	}
	for(int i = 1; i <= n; i++) printf("%d ", arr[i]);
  return 0;
}