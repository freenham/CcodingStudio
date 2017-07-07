#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main() {
	struct Person *p1 = malloc(sizeof(struct Person));

	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "인천시 연수구 송도동");

	printf("이름: %s\n", p1->name);
	printf("나이: %d\n", p1->age);
	printf("주소: %s\n", p1->address);
	printf("*p1의 크기: %d\n", sizeof (*p1));

	free(p1);

	return 0;
}
