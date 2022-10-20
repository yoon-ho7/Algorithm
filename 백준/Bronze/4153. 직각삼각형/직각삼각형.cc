#include<stdio.h>

int main() {
	int a = 1, b = 1, c = 1;

	while (a != 0 && b != 0 && c != 0) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		if (c > b && c > a) {
			if (a * a + b * b == c * c)
				printf("right\n");
			else
				printf("wrong\n");
		}
		else if (b > c && b > a) {
			if (a * a + c * c == b * b)
				printf("right\n");
			else
				printf("wrong\n");
		}
		else {
			if (b * b + c * c == a * a)
				printf("right\n");
			else
				printf("wrong\n");
		}
	}
}