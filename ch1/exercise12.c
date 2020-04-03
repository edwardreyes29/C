// Exercise 1-12
#include <stdio.h>

#define IN 1        /* inside a word */
#define OUT 0       /* outside a word */

/* Prints its input one word per line */
int main() {
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF) {
        // If char is blank, newline, or tab
        if (c == ' ' || c == '\n' || c == '\t'){
            // If previous char was inside a word, print new lin
            if (state == IN) {
                putchar('\n');
            }
            state = OUT;
        } else if (state == OUT)
            state = IN;
        // while state is inside word, print char
        if (state == IN)
            putchar(c);
    }
}