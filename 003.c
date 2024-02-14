#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *line = 0;
    size_t length;
    
    getline(&line, &length, stdin);

    for (unsigned char i = 0; line[i] != '\n'; i++)
    
    return 0;
}
