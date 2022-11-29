#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int cnt;
	scanf("%d", &cnt);
	int* arr = (int*)malloc(sizeof(int) * (cnt * 2));
	for (int i = 0; i < cnt * 2; i++) {
		scanf("%d", arr + i);
	}
	for (int i = 1, j = 0; i <= cnt; i++, j += 2) {
		printf("Case #%d: %d + %d = %d\n", i, arr[j], arr[j + 1], arr[j] + arr[j + 1]);
	}

	return 0;
}