#include<stdio.h>

int main() {
	int a, b, i, j;
	scanf("%d", &j);
	for (i = 0; i < j; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}