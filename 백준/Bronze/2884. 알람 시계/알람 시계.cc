#include<stdio.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	if (h > 0 && h < 24 && m < 45)
		printf("%d %d", h - 1, m + 15);
	else if (h == 0 && m < 45)
		printf("%d %d", h += 23, m + 15);
	else
		printf("%d %d", h, m - 45);
}