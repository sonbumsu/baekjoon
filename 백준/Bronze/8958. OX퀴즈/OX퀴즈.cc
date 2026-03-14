#include <stdio.h>
#include <string.h>
int main() {
	int t,s,c;
	char a[80];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%s", a);
		s = 0;
		c = 1;
		for (int i = 0; i < strlen(a); i++) {
			if (a[i] == 'O') s += c++;
			else if (a[i] == 'X') c = 1;
		}
		printf("%d\n", s);
	}
	return 0;
}