#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int i = 0;
	int n;		
	double a[1000];	
	int max = 0;	
	double sum = 0;

	scanf("%d", &n);
	for (; i < n; i++) {
		scanf("%lf", &a[i]);
		if (a[i] > max)
			max = a[i];
	}
	for(i = 0; i < n; i++){
		sum += a[i] / max * 100;
	}
	printf("%lf ", sum / n);
}