#include <stdio.h>
#include <string.h>

int main(void) {
	FILE* afp, * bfp, * cfp;
	char ch1[20], ch2[20];
	char* tch1, *tch2;

	afp = fopen("a.txt", "r");
	bfp = fopen("b.txt", "r");
	cfp = fopen("c.txt", "w");
	
	if (afp == NULL) {
		printf("a.txt 파일을 열지 못하였습니다.\n");
		return 1;
	}
	if (bfp == NULL) {
		printf("b.txt 파일을 열지 못하였습니다.\n");
		return 1;
	}
	if (cfp == NULL) {
		printf("c.txt 파일을 열지 못하였습니다.\n");
		return 1;
	}

	tch1 = fgets(ch1, sizeof(ch1), afp);
	tch2 = fgets(ch2, sizeof(ch2), bfp);
	if (tch1 == NULL) return 1;
	if (tch2 == NULL) return 1;
	
	while (1) {
		while (1) {
			if (tch1 == NULL || tch2 == NULL) break;
			else if (strcmp(ch1, ch2) == 0) break;
			else {
				tch1 = fgets(ch1, sizeof(ch1), afp);
				continue;
			}
		}
		if (strcmp(ch1, ch2) == 0) {
			fclose(afp);
			afp = fopen("a.txt", "r");
			tch1 = fgets(ch1, sizeof(ch1), afp);
			tch2 = fgets(ch2, sizeof(ch2), bfp);
			continue;
		}
		if (tch1 == NULL) {
			fputs(ch2, cfp);
			fclose(afp);
			afp = fopen("a.txt", "r");
			tch1 = fgets(ch1, sizeof(ch1), afp);
			tch2 = fgets(ch2, sizeof(ch2), bfp);
			continue;
		}
		if (tch2 == NULL) break;
	}
	fclose(afp);
	fclose(bfp);
	fclose(cfp);
	
	return 0;
}
