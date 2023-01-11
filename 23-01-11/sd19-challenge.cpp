#include <stdio.h>
#include <string.h>
#define SUM(a, b) ((a) + (b))
#define MIN(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define REM(a, b) ((a) / (b))

int main(void) {
	int a, b;
	char ch;
	char c;

	while (1) {
		printf("수식 입력(종료 Ctrl + Z) : ");
		c = scanf("%d %c %d", &a, &ch, &b);
		if (c == EOF) break;
		if (ch == '+') printf("%d + %d = %d\n", a, b, SUM(a, b));
		if (ch == '-') printf("%d - %d = %d\n", a, b, MIN(a, b));
		if (ch == '*') printf("%d * %d = %d\n", a, b, MUL(a, b));
		if (ch == '/') printf("%d / %d = %d\n", a, b, REM(a, b));
	}
	
	return 0;
}