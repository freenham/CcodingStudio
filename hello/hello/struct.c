#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

//struct Person{
//	char name[20];
//	int age;
//	char address[100];
//};

typedef struct _Person {
	char name[20];
	int age;
	char address[100];
}Person;

typedef int a;

int main() {
	Person p1;
	a a;
	a = 1;

	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "��õ�� ������ �۵���");

	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("�ּ�: %s\n", p1.address);
	printf("%d", a);

	return 0;
}