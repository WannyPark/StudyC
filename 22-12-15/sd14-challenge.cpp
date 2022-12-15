#include <stdio.h>

int main(void) {
	int ary1[6] = { 1, 2, 3, 4, 5 };
	int ary2[6] = { 6, 7, 8, 9, 10 };
	int ary3[6] = { 11, 12, 13, 14, 15 };
	int ary4[6] = { 16, 17, 18, 19, 20 };
	int ary5[6] = { 0 };
	int* pary[5] = { ary1, ary2, ary3, ary4, ary5 };
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			pary[i][5] += pary[i][j];
			pary[4][i] += pary[j][i];
			pary[4][5] += pary[i][j];
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}

	return 0;
}