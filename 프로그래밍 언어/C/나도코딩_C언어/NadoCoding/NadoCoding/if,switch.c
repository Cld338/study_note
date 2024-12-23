#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_condition(void) {
	int age = 15;
	if (age >= 20) {
		printf("성인\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생\n");
	}
	else {
		printf("학생\n");
	};

	
	srand(time(NULL)); // 난수 시드 초기화
	printf("%d\n", rand() % 10); // 0~10 중 랜덤한 숫자

	int i;
	i = rand() % 3;
	switch (i) {
	case 0: printf("A\n");
	case 1: printf("B\n"); break;
	case 2: printf("C\n");
	}
	return 0;


}
