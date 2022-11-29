#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int n;
	int result;
	int cnt = 0;
	int a, b, c;
	scanf("%d", &n);
	result = n;

	while (true) {
		a = n / 10;
		b = n % 10;
		c = a + b;
		n = (b * 10) + (c % 10);
		cnt++;
		if (n == result) break;
	}

	printf("%d", cnt);

	return 0;
}