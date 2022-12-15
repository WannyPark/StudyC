#include <stdio.h>

void swap_ptr(const char** ppa, const char** ppb);

int main(void) {
	const char* pa = "success";
	const char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}

void swap_ptr(const char** ppa, const char** ppb) {
	const char* pt;
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}