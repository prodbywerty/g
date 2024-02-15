#include <stdio.h>

int main(void) {
	unsigned char array[8] = {93, 39, 18, 98, 16, 45, 98, 26};
	unsigned char largest = 0;
	unsigned char largest_index = 0;

	for (unsigned char i = 0; i < 8; i++) {
		if (array[i] > largest) {
			largest = array[i];
			largest_index = i;
		}
	}

	printf("%d\n", largest_index);
}
