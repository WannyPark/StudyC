#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRM printf("��� ������ ������ϴ�!\n")

int main(void) {
	double radius, area;

	printf("�������� �Է��ϼ���(10 ����) : ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	if (area > LIMIT) ERR_PRM;
	else printf("���� ���� : %.2lf (%s)\n", area, MSG);

	return 0;
}