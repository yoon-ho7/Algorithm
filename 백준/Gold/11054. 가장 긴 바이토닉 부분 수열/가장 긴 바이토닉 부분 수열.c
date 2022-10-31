#include<stdio.h>

int d1[1000] = { 0 }, d2[1000] = { 0 }, a[1000] = { 0 };

int main() {
	int i, j, n, sum = 0;


	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		d1[i] = 1;
		for (j = 0; j < i; j++) {
			if (a[i] > a[j] && d1[i] < d1[j] + 1)
				d1[i] = d1[j] + 1;
		}
	}
	for (i = n - 1; i >= 0; i--) {
		d2[i] = 1;
		for (j = n-1; j > i; j--) {
			if (a[i] > a[j] && d2[i] < d2[j] + 1)
				d2[i] = d2[j] + 1;
		}
	}

	for (i = 0; i < n; i++) {
		if (sum < (d1[i] + d2[i]) - 1)
		{
			sum = (d1[i] + d2[i]) - 1;
		}
	}
		printf("%d", sum);
}