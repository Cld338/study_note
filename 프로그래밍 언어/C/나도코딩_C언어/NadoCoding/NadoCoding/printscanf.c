#include <stdio.h>
int main_printfscanf(void) {
	// int age = 12;
	// printf("%d\n", age);
	// int one, two, three;
	// printf("출생일자를 입력해주세요");
	// scanf_s("%d%d%d", &one, &two, &three);
	// printf("%d년 %d월 %d일 ", one, two, three);

	char c = "A";

	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);


	return 0;
}