#include <stdio.h>

/* count line in input */
int main() {
    int c, n1;

    n1 = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n') // '\n' is a character constant -> another way to write a small integer
            ++n1;
    printf("%d\n", n1);
}