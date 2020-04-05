#include <stdio.h>

int main() {
    int c, i;

    for (i = 0; i < 1000 && (c = getchar()) != '\n' && c != EOF; ++i) {
        putchar(c);
    }
    putchar('\n');
    
    for (i = 0; (i<1000) == ( (c=getchar()) != '\n') == (c != EOF); ++i) {
        putchar(c);
    }
    putchar('\n');
}