#include <stdio.h>

void swap(const char w[7], void *a, void *b);

int main(void) {
	int ag, bg;
	double ah, bh;

	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &ag, &ah);
	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &bg, &bh);

	swap("int", &ag, &bg);
	swap("double", &ah, &bh);

	printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", ag, ah);
	printf("두 번째 사람의 나이와 키 : %d, %.1lf\n", bg, bh);

	return 0;
}

void swap(const char w[7], void* a, void* b) {
	if (w == "int") {
		int tmp;
		tmp = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = tmp;
	}
	else {
		double tmp;
		tmp = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = tmp;
	}
}