#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
	char name[024];
	int grade;
	int class;
	float avergae;
};

int main() {
	//printf("%d\n", sizeof(struct Student));

	struct Student *s1 = malloc(sizeof(*s1));

	strcpy(s1->name, "ȫ�浿");
	s1->grade = 1;
	s1->class = 3;
	s1->avergae = 65.38999f;

	printf("�̸�: %s\n", s1->name);
	printf("�г�: %d\n", s1->grade);
	printf("��: %d\n", s1->class);
	printf("�������: %f\n", s1->avergae);

	free(s1);

	return 0;

	
}