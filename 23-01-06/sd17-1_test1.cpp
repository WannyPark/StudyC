#include <stdio.h>

struct cracker {
	int price;
	int calories;
};

int main(void) {
	struct cracker s1;

	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� : ");
	scanf("%d%d", &s1.price, &s1.calories);

	printf("�ٻ���� ���� : %d\n", s1.price);
	printf("�ٻ���� ���� : %dkcal\n", s1.calories);

	return 0;
}