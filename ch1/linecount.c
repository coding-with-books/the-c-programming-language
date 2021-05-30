#include <stdio.h>

main() {
    int c, lc = 0, sc = 0, tc = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            lc++;
        else if (c == ' ')
            sc++;
        else if (c == '\t')
            tc++;
    }
    printf("lines: %d\n", lc);
    printf("spaces: %d\n", sc);
    printf("tabs: %d\n", tc);
}