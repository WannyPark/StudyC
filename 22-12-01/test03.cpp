#include <stdio.h>
#include <string.h>

int main(void) {
	char str[16] = { 0, };
	
	printf("�ܾ� �Է� : ");
	scanf("%s", str);
	printf("�Է��� �ܾ� : %s, ������ �ܾ� : ", str);

	for (int i = 0; i < strlen(str); i++) {
		if (i < 5) printf("%c", str[i]);
		else printf("*");
	}

	return 0;
}