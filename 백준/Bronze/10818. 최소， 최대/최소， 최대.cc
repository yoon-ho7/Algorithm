#include<stdio.h>
int arr[1000000];
int main() {
	
	int n, i;
	int min = 1000000;
	int max = -1000000;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++) {
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	printf("%d ", min);
	printf("%d", max);
}