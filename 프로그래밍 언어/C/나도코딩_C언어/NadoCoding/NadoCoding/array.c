#include <stdio.h>

int main_array(void) {
	int arr[10];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	for (int i = 0; i <= 9; i++) {
		printf("%d\n", arr[i]);
	}
	int arr2[10] = { 1, 2 }; // �̷��� �����ϸ� �� ĭ�� 0���� �ʱ�ȭ
	for (int i = 0; i <= 9; i++) {
		printf("%d\n", arr2[i]);
	}

	char str[] = "coding";
	printf("%s %d\n", str, sizeof(str));


}