#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int m;
	int cnt = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}

	scanf("%d", &m);
	for (int i = 0; i < n; i++) {
		if (arr[i] == m) cnt++;
	}

	printf("%d", cnt);

	free(arr);

	return 0;
}