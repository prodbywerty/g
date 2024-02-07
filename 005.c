#include <stdio.h>

int main(void) {
	for (unsigned char i = 1; i <= 100; i++) {
		if (i % 3 != 0 && i % 5 != 0) {
			printf("%u\n", i);
			continue;
		}

		if (i % 3 == 0) {
			printf("Fizz");
		}

		if (i % 5 == 0) {
			printf("Buzz");
		}

		putchar('\n');
	}
}