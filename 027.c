#include <stdio.h>

int main(void) {
	unsigned int a = 0;
	unsigned int b = 1;
	unsigned int c;

	for (unsigned char i = 0; i < 33; i++) {
		c = a;
		a += b;
		b = c;

		printf("%u\n", a);
	}
}