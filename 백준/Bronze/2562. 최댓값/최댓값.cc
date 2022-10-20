#include<stdio.h>

int main() {
	int a, b, n = 0;
	int i, j = 1;
	for (i = 1; i < 10; i++) {
		scanf("%d", &a);
		b = a;
		if (b > n) {
			n = b;
			j = i;
		}
	}
	printf("%d\n", n);
	printf("%d", j);
}