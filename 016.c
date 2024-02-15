#include <stdio.h>

int main(void) {
	char *line = 0;
	size_t length;
	unsigned char vowels = 0;

	getline(&line, &length, stdin);

	for (unsigned char i = 0; line[i] != 0; i++) {
		if (
			line[i] == 'A' ||
			line[i] == 'E' ||
			line[i] == 'I' ||
			line[i] == 'O' ||
			line[i] == 'U' ||
			line[i] == 'Y' ||
			line[i] == 'a' ||
			line[i] == 'e' ||
			line[i] == 'i' ||
			line[i] == 'o' ||
			line[i] == 'u' ||
			line[i] == 'y'
		) {
			vowels += 1;
		}
	}

	printf("%d vowels found.\n", vowels);
	free(line);
}
