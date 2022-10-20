#include<stdio.h>

int main() {
	int i, a, x, y;
	scanf("%d ", &a);
	for (i = 0; i < a; i++){
		scanf("%d %d", &x, &y);
		printf("%d\n", x + y);
	}
}