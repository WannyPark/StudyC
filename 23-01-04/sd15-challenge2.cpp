#include <stdio.h>
#include <string.h>

void swap(const char *w, void* a, void* b);

int main(void) {
	int ag, bg;
	double ah, bh;

	printf("ù ��° ����� ���̿� Ű �Է� : ");
	scanf("%d %lf", &ag, &ah);
	printf("�� ��° ����� ���̿� Ű �Է� : ");
	scanf("%d %lf", &bg, &bh);

	swap("int", &ag, &bg);
	swap("double", &ah, &bh);

	printf("ù ��° ����� ���̿� Ű : %d, %.1lf\n", ag, ah);
	printf("�� ��° ����� ���̿� Ű : %d, %.1lf\n", bg, bh);

	return 0;
}

void swap(const char* w, void* a, void* b) {
	if (strcmp(w, "int") == 0) {
		int tmp;
		tmp = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = tmp;
	}
	if (strcmp(w, "double") == 0) {
		double tmp;
		tmp = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = tmp;
	}
}