#include <stdio.h>

int main(void) {
	char ch = ' ';
	int cnt = 0;
	int top = 0;

	while (scanf("%c", &ch) != EOF) {
		if (ch == '\n') {
			if (top < cnt) top = cnt;
			cnt = 0;
			continue;
		}
		cnt++;
	}
	printf("가장 긴 단어의 길이 : %d\n", top);
	
	return 0;
}