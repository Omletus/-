#include <stdio.h>
#define n 5
int main () {
int a[n];
	for (int i = 0; i < n; i = i + 1) {
		scanf("%d", &a[i]);
	}
int sum = a[0];
	for (int i = 0; i < n; i = i + 1) {
		sum = sum + a[i];
	}
	printf("%d", sum);
	return 0;
}
		
