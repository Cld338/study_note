#include <stdio.h>

void swap(int* a, int* b);

void main(void) {
	int var = 10;
	int* pointer; // ���� ���� �� *�� �տ� �ٿ� ������ ������ ������ �� �ִ�.
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