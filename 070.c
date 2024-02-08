#include <stdio.h>

int main(void) {
	unsigned int a = 0;
	unsigned int b = 1;

	for (unsigned char i = 0; i < 100; i++) {
		a += b++;
		printf("%u\n", a);
	}
}