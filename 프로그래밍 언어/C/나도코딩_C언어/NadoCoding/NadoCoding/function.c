#include <stdio.h>
void p(int num);
int* pp(void);
int main_function(void) {
	p(1);
	int* arr = pp();
	for (int i = 0; i < 2; i++) {
		printf("%d ", arr[i]);
	}

	return 0;

}

void p(int num) {
	printf("num�� %d�Դϴ�.\n", num);
}

int* pp(void) {
	static int array[2] = { 1, 2 };
	return array;
}