#include <stdio.h>

void swap(int* a, int* b);

void main(void) {
	int var = 10;
	int* pointer; // 변수 선언 시 *을 앞에 붙여 포인터 변수를 선언할 수 있다.
	pointer = &var;
	printf("%d %d\n", pointer, *pointer);

	int a = 10;
	int b = 20;
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);

}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}