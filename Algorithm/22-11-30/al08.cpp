#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m;
	scanf("%d%d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < m) printf("%d ", arr[i]);
	}

	free(arr);

	return 0;
}