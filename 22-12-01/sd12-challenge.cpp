#include <stdio.h>
#include <string.h>

void swapchar(char* arr1, char* arr2);

int main(void) {
	char arr1[30];
	char arr2[30];
	char arr3[30];

	printf("세 단어 입력 : ");
	scanf("%s %s %s", arr1, arr2, arr3);
	if (strcmp(arr1, arr2) > 0) swapchar(arr1, arr2);
	if (strcmp(arr2, arr3) > 0) swapchar(arr2, arr3);
	if (strcmp(arr1, arr2) > 0) swapchar(arr1, arr2);
	printf("%s, %s, %s", arr1, arr2, arr3);

	return 0;
}

void swapchar(char* arr1, char* arr2) {
	char arr[30];
	strcpy(arr, arr1);
	strcpy(arr1, arr2);
	strcpy(arr2, arr);
}