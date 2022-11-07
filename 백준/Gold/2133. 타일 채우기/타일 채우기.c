#include<stdio.h>

int main() {
	int i, n, j, d[31] = { 0 };

	scanf("%d", &n);

	d[0] = 1;
	for (i = 2; i <= n; i++) {
		d[i] = d[i - 2] * 3;
		for (j = i - 4; j >= 0; j -= 2) {
			d[i] += d[j] * 2;
		}
	}
	printf("%d", d[n]);
}
