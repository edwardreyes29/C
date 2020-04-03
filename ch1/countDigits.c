#include <stdio.h>

/* count digits, white space, others */

int main() {
    int c, i, nwhite, nother;
    int ndigit[10]; // ndigit[0] ... ndigit[9]
    // array subscripts can be any interger expression

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0']; // '0' = 48, '9' = 57, 57 - 48 = 9 (index)s
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else 
            ++nother;
    }

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);

    printf("\n%d %d", '0', '9');
    printf("\n%d", ('9' - '0'));
}