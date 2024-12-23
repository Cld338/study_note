#include <stdio.h>

int main_loop(void) {
	/* int b = 0;
	printf("%d", b++);
	printf("%d", ++b);
	printf("%d", b++);
	printf("%d", b); */

	for (int i = 1; i <= 10; i++) {
		printf("Hello world %d\n", i);
	}
	int i = 1; 
	while (i <= 10) {
		printf("Hello world %d\n", i++);
	}

	do {
		printf("Hello world %d\n", i--);
		if (i == 3) {
			break;
		}
	} while (i >= 1);
}