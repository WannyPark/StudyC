#include <stdio.h>

struct student {
	int num;
	char name[20];
	int kor;
	int eng;
	int math;
	int tot;
	double score1;
	char score2;
};

void change(struct student* ps1, struct student* ps2);
void list(struct student* ps);

int main(void) {
	int i = 0;
	struct student st[5];
	
	while (i < 5) {
		printf("학번 : ");
		scanf("%d", &st[i].num);
		printf("이름 : ");
		scanf("%s", st[i].name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d%d%d", &st[i].kor, &st[i].eng, &st[i].math);
		i++;
	}
	for (i = 0; i < 5; i++) {
		st[i].tot = st[i].kor + st[i].eng + st[i].math;
		st[i].score1 = (st[i].kor + st[i].eng + st[i].math) / 3.0;
	}
	for (i = 0; i < 5; i++) {
		if (st[i].score1 >= 90) st[i].score2 = 'A';
		else if (st[i].score1 >= 80) st[i].score2 = 'B';
		else if (st[i].score1 >= 70) st[i].score2 = 'C';
		else st[i].score2 = 'F';
	}
	printf("# 정렬 전 데이터...\n");
	for (i = 0; i < 5; i++) {
		printf("%5d%7s%5d%5d%5d%5d%7.1lf%5c\n",
			st[i].num, st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].tot, st[i].score1, st[i].score2);
	}
	list(st);
	printf("# 정렬 후 데이터...\n");
	for (i = 0; i < 5; i++) {
		printf("%5d%7s%5d%5d%5d%5d%7.1lf%5c\n",
			st[i].num, st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].tot, st[i].score1, st[i].score2);
	}
}

void change(struct student* ps1, struct student* ps2) {
	struct student temp = *ps1;
	*ps1 = *ps2;
	*ps2 = temp;
}

void list(struct student* ps) {
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (ps[i].tot < ps[j].tot) change(ps + i, ps + j);
		}
	}
}