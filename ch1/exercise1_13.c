// Exercise 1-13
#include <stdio.h>

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

    for (i = 0; i < 10; ++i) {
        printf("%d: ", i);
        int j;
        for (int j = 0; j < ndigit[i]; j++) {
            putchar('*');
        }
        printf("\n");s
    }
}