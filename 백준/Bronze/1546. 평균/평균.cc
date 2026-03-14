#include <stdio.h>
int main() {
	double a[1001], d = 0;;
	int b, c = -1;
	scanf("%d", &b);
	for (int i = 0; i < b; i++) {
		scanf("%lf", &a[i]);
		if (c < a[i]) c = a[i];
	}
	for (int i = 0; i < b; i++) {
		a[i] = a[i] / c * 100;
		d += a[i];
	}
	printf("%lf", d / b);
	return 0;
}