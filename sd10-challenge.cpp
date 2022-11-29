#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void) {
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums) {
	int i = 0;
	int t = 0;

	while (i < 6) {
		printf("��ȣ �Է� : ");
		scanf("%d", lotto_nums + i);
		for (int j = 0; j < 6; j++) {
			if (i == j) continue;
			if (lotto_nums[j] == lotto_nums[i]) {
				t = 1;
				break;
			}
		}
		if (t == 1) {
			printf("���� ��ȣ�� �ֽ��ϴ�!\n");
			t = 0;
			continue;
		}
		i++;
	}
}

void print_nums(int* lotto_nums) {
	printf("�ζ� ��ȣ : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto_nums[i]);
	}
}