#include<stdio.h>

int main() {
	int b;
	int i, box[42] = { 0, }, x = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &b);
		box[b % 42]++;
	}
	for (int j = 0; j < 42; j++) {
		if (box[j] != 0)
			x += 1;
	}
	printf("%d", x);
}