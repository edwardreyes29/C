#include <stdio.h>

int main() {
    int c;
    // while ((c = getchar()) != EOF) {
    //     if (c == ' ') {
    //         while ((c = getchar()) == ' ');
    //         putchar(' ');
    //         if (c == EOF) break;
    //     } 
    //     putchar(c);
    // }
    
    while ((c = getchar()) != EOF) {
        if (c == '\\') {
            putchar('\\');
            // putchar('\\');
        }
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        if (c == '\n') {
            putchar('\\');
            putchar('n');
        }
        putchar(c);
            
    }
}