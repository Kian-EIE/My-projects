#include <stdio.h>
#define MAX_NUM 1000000

int main() {
	int a = 0, b = 0, c = 1;

	while (c < MAX_NUM) {
		printf("%d ", c);
		a = b;
		b = c;
		c = a + b;
	}
	return 0;
}
