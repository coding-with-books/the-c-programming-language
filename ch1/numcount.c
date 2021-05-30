#include <stdio.h>

#define NUM_TYPE 10
main() {
    int c, i, nwhite, nother;
    int ndigit[NUM_TYPE];

    nwhite = nother = 0;

    for (i = 0; i < NUM_TYPE; i++)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ndigit[c - '0']++;
        } else if (c == ' ' || c == '\n' || c == '\t') {
            nwhite++;
        } else {
            ++nother;
        }
    }
    printf("digits =");

    for (i = 0; i < NUM_TYPE; i++)
        printf(" %d", ndigit[i]);

    printf(", white space = %d, other = %d\n", nwhite, nother);

    // print histogram
    int max_height = 0;
    int j;
    for (i = 0; i < NUM_TYPE; i++) {
        if (ndigit[i] > max_height)
            max_height = ndigit[i];
    }

    for (i = max_height + 1; i > 0; i--) {
        printf("%5d|", i);
        for (j = 0; j < NUM_TYPE; j++) {
            if (ndigit[j] >= i)
                printf("%2s", "*");
            else
                printf("%2s", "");
        }
        printf("\n");
    }

    printf("%5s+","");
    for (j = 0; j < NUM_TYPE; j++) {
        printf("--");
    }

    printf("\n%6s","");
    for (j = 0; j < NUM_TYPE; j++) {
        printf("%2d", j);
    }
}