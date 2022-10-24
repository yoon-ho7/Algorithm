#include<stdio.h>

int main() {
	int a[1001] = { 0 };
	int d[1001] = { 0 };
	int n, max = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		d[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i] && d[i] < d[j] + 1) {
				d[i] = d[j] + 1;
			}
		}
		if (max < d[i]) {
			max = d[i];
		}
	}
	printf("%d", max);
}