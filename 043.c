#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *line = 0;
    char morse[64];
    size_t length;
    
    getline(&line, &length, stdin);
    
    for (unsigned char i = 0; line[i] != '\n'; i++) {
        switch (line[i]) {
            case 'A':
            case 'a':
                strcat(morse, "._ ");
                break;
            case 'B':
            case 'b':
                strcat(morse, "_... ");
                break;
            case 'C':
            case 'c':
                strcat(morse, "_._. ");
                break;
        }
    }
    
    printf("%s\n", morse);
    
    free(line);
    return 0;
}
