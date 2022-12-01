#include <stdio.h>
#include <string.h>

int main(void) {
	char str[16] = { 0, };
	
	printf("단어 입력 : ");
	scanf("%s", str);
	printf("입력한 단어 : %s, 생략한 단어 : ", str);

	for (int i = 0; i < strlen(str); i++) {
		if (i < 5) printf("%c", str[i]);
		else printf("*");
	}

	return 0;
}