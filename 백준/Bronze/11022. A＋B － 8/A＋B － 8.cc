#include<stdio.h>

int main() {
	int a, b, c, n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		c = a + b;
		printf("Case #%d: %d + %d = %d\n", i, a, b, c);
	}
}