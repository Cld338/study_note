#include <stdio.h>
int main_printfscanf(void) {
	// int age = 12;
	// printf("%d\n", age);
	// int one, two, three;
	// printf("������ڸ� �Է����ּ���");
	// scanf_s("%d%d%d", &one, &two, &three);
	// printf("%d�� %d�� %d�� ", one, two, three);

	char c = "A";

	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);


	return 0;
}