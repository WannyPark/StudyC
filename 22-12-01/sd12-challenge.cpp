#include <stdio.h>
#include <string.h>

int main(void) {
	char arr1[30];
	char arr2[30];
	char arr3[30];

	printf("세 단어 입력 : ");
	scanf("%s %s %s", arr1, arr2, arr3);
	if (strcmp(arr1, arr2) > 0) swap(arr1, arr2);
	if (strcmp(arr2, arr3) > 0) swap(arr2, arr3);
	if (strcmp(arr1, arr2) > 0) swap(arr1, arr2);
	printf("%s, %s, %s", arr1, arr2, arr3);

	return 0;
}

void swap(char* parr1, char* parr2) {
	char arr[30];
	strcpy(arr, parr1);
	strcpy(parr1, parr2);
	strcpy(parr2, arr);
}