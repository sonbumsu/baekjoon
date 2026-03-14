#include <stdio.h>
int main() {
	char chessboard[9][9];
	int a = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%s", chessboard[i]);
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && chessboard[i][j] == 'F')
				a++;
		}
	}
	printf("%d", a);

	return 0;
}