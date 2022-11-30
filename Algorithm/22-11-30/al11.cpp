#include <stdio.h>

int main(void) {
	int students[28] = { 0 , };
	int student[2] = { 0, };
	int cnt = 0;

	for (int i = 0; i < 28; i++) {
		scanf("%d", students + i);
	}
	for (int i = 1, k = 0; i <= 30; i++) {
		for (int j = 0; j < 28; j++) {
			if (i == students[j]) break;
			if (j == 27) {
				student[k] = i;
				k++;
			}
		}
	}
	if (student[0] > student[1]) printf("%d\n%d", student[1], student[0]);
	else printf("%d\n%d", student[0], student[1]);

	return 0;
}