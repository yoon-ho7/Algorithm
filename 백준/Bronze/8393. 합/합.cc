#include<stdio.h>

int main() {
	int n, i, a = 0;
	scanf("%d", &n);
	for (i = 0; i <= n; i++) {
		a += i;
	}
	printf("%d", a);
}