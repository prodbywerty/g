#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *line = 0;
    size_t length;
    
    getline(&line, &length, stdin);
    
    return 0;
}
