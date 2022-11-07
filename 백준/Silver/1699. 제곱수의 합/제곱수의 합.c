#include<stdio.h>

int main() {
	int i, n, j, D[100001] = { 0 };
	
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		D[i] = i;
		for (j = 1; j * j <= i; j++) {
			if (D[i] > D[i - j * j] + 1)
				D[i] = D[i - j * j] + 1;
		}
	}
	printf("%d", D[n]);
}