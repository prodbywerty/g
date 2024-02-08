// Untested, written on Windows for Linux

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *line = 0;
	size_t length;
	unsigned char i = 0;

	getline(&line, &length, stdin);

	for (; line[i] != 0; i++) {}
	
	for (; i > 0; i--) {
		putchar(line[i - 1]);
	}
}