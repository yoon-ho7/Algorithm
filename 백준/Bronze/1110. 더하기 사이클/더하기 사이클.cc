#include<stdio.h>

int main() {
	int n;
	int a, b, c, d;
	int r;
	int z = 0;

	scanf("%d", &n);
	r = n;
	while (1) {
		a = n / 10;
		b = n % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		n = d;
		z++;
		if (d == r)
			break;
	}
	printf("%d", z);
}