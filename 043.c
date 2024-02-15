// To-do: Convert to tabs

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *line = 0;
    char morse[128];
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
            case 'D':
            case 'd':
                strcat(morse, "_.. ");
                break;
            case 'E':
            case 'e':
                strcat(morse, ". ");
                break;
            case 'F':
            case 'f':
                strcat(morse, ".._. ");
                break;
            case 'G':
            case 'g':
                strcat(morse, "__. ");
                break;
            case 'H':
            case 'h':
                strcat(morse, ".... ");
                break;
            case 'I':
            case 'i':
                strcat(morse, ".. ");
                break;
            case 'J':
            case 'j':
                strcat(morse, ".___ ");
                break;
            case 'K':
            case 'k':
                strcat(morse, "_._ ");
                break;
            case 'L':
            case 'l':
                strcat(morse, "._.. ");
                break;
            case 'M':
            case 'm':
                strcat(morse, "__ ");
                break;
            case 'N':
            case 'n':
                strcat(morse, "_. ");
                break;
            case 'O':
            case 'o':
                strcat(morse, "___ ");
                break;
            case 'P':
            case 'p':
                strcat(morse, ".__. ");
                break;
            case 'Q':
            case 'q':
                strcat(morse, "__._ ");
                break;
            case 'R':
            case 'r':
                strcat(morse, "._. ");
                break;
            case 'S':
            case 's':
                strcat(morse, "... ");
                break;
            case 'T':
            case 't':
                strcat(morse, "_ ");
                break;
            case 'U':
            case 'u':
                strcat(morse, ".._ ");
                break;
            case 'V':
            case 'v':
                strcat(morse, "..._ ");
                break;
            case 'W':
            case 'w':
                strcat(morse, ".__ ");
                break;
            case 'X':
            case 'x':
                strcat(morse, "_.._ ");
                break;
            case 'Y':
            case 'y':
                strcat(morse, "_.__ ");
                break;
            case 'Z':
            case 'z':
                strcat(morse, "__.. ");
                break;
            case '0':
                strcat(morse, "_____ ");
                break;
            case '1':
                strcat(morse, ".____ ");
                break;
            case '2':
                strcat(morse, "..___ ");
                break;
            case '3':
                strcat(morse, "...__ ");
                break;
            case '4':
                strcat(morse, "...._ ");
                break;
            case '5':
                strcat(morse, "..... ");
                break;
            case '6':
                strcat(morse, "_.... ");
                break;
            case '7':
                strcat(morse, "__... ");
                break;
            case '8':
                strcat(morse, "___.. ");
                break;
            case '9':
                strcat(morse, "____. ");
                break;
        }
    }
    
    printf("%s\n", morse);
    free(line);
}
