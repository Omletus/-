#include <stdio.h>
#define n 5
int main () {
int a[n];
	for (int i = 0; i < n; i = i + 1) {
		scanf("%d", &a[i]);
	}
int min = a[0];
	for (int i = 0; i < n; i = i + 1) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	printf("%d", min);
	return 0;
}	
