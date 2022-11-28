#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void) {
	double max, mid, min;

	printf("�Ǽ��� 3�� �Է� : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb) {
	double tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void line_up(double* maxp, double* midp, double* minp) {
	if (*minp > *midp) swap(minp, midp);
	if (*midp > *maxp) swap(midp, maxp);
	if (*minp > *midp) swap(minp, midp);
}