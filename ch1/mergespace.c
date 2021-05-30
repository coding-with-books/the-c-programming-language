#include <stdio.h>

#define IS_CHAR 0
#define IS_SPACE 1


main() {
    int c, flag;
    flag = IS_CHAR;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            flag = IS_CHAR;
            putchar(c);
        } else {
            if (flag != IS_SPACE) {
                putchar(c);
            }
            flag = IS_SPACE;
        }
    }
}