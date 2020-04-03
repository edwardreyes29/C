// Exercise 1-14
#include <stdio.h>

/* Print histogram of frequencies of different characters in its input */
int main() {
    int c, i, nwhite, nother;
    int nchar[94]; 
    char ch;

    // initialize each element to 0
    for (i = 0; i < 94; ++i)
        nchar[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '!' && c <= '~')
            ++nchar[c-'!']; // '!' = 33, '~' = 126, 126 - 33 = 93 (index)
    }

    for (i = 0; i < 94; ++i) {
        ch = i + 33;
        printf("%c: ", ch);
        int j;
        for (int j = 0; j < nchar[i]; j++) {
            putchar('#');
        }
        printf("\n");
    }
}