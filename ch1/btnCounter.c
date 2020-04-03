#include <stdio.h>

int main() {
    int c, b1, t1, n1;

    b1 = 0;
    t1 = 0;
    n1 = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++n1;
        }
        if (c == '\t') {
            ++t1;
        }
        if (c == ' ') {
            ++b1;
        }
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", b1, t1, n1);
}