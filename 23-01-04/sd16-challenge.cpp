#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* num;
	int n, i, j = 0, cnt = 0;
	char x = 'X';

	printf("> 양수 입력 : ");
	scanf("%d", &n);
	num = (int*)malloc(sizeof(int) * (n - 2));
	if (num == NULL) {
		printf("메모리 부족\n");
		exit(1);
	}

	for (i = 2; i < n; i++) {
		num[j] = i;
		j++;
	}

	for (i = 0; i < n - 2; i++) {
		for (j = 2; j <= num[i]; j++) {
			if (num[i] == 2) {
				printf("%5d", num[i]);
				cnt++;
				break;
			}
			if (num[i] % j == 0) {
				printf("%5c", x);
				cnt++;
				break;
			}
			if (j == num[i] - 1) {
				printf("%5d", num[i]);
				cnt++;
				break;
			}
		}
		if (cnt % 5 == 0) printf("\n");
	}

	free(num);

	return 0;
}