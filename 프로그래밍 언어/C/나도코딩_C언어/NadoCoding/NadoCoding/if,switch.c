#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_condition(void) {
	int age = 15;
	if (age >= 20) {
		printf("����\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л�\n");
	}
	else {
		printf("�л�\n");
	};

	
	srand(time(NULL)); // ���� �õ� �ʱ�ȭ
	printf("%d\n", rand() % 10); // 0~10 �� ������ ����

	int i;
	i = rand() % 3;
	switch (i) {
	case 0: printf("A\n");
	case 1: printf("B\n"); break;
	case 2: printf("C\n");
	}
	return 0;


}
