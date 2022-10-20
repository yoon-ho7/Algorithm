#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char a[8][8];
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf(" %c", &a[i][j]);
			if (a[i][j] == 'F') {
				if ((j + i) % 2 == 0)
					sum += 1;
			}
		}
	}
	printf("%d", sum);
}