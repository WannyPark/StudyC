#include <stdio.h>

int main(void) {
	int a = 10;
	int* pi = &a;
	int** ppi = &pi;

	printf("----------------------------------------------------\n");
	printf("����    ������     &����       *����        **����\n");
	printf("----------------------------------------------------\n");
	printf("  a %10d %10u\n", a, &a);
	printf(" pi %10u %10u %10d\n", pi, &pi, *pi);
	printf("ppi %10u %10u %10u %10d\n", ppi, &ppi, *ppi, **ppi);

	return 0;
}