#include <stdio.h>
int main(){
	int x, y, i, j;
	scanf("%d %d", &x, &y);
	for (i = 0; i < x; i = i + 1) {
		for (j = 0; j < y; j = j + 1) {
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
