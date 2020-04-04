// Exercise 1-17

#include <stdio.h>
#define MAXLINE 1000     /* maximum input line size */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main() {
    int len;    /* current line length */
    char line[MAXLINE];     /* current input line */

    while ((len = getLine(line, MAXLINE)) > 0){
        if (len > MAXLINE) {
            printf("\n\nStorage limit exceeded by : %d",len-MAXLINE);
            printf("\nString length : %d",len);
            printf("\n%s",line);
        }
        else if (len > 80) { /* there was a line */
            printf("\nString length: %d", len);
            printf("\n%s", line);
        }           
    }
    return 0;
}

/* getline: read a line into s, return length */
int getLine(char s[], int lim) {
    int c, i;

    for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c; // array is already being manipulated
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0'; // null character
    return i; // if not > 0, then there was no line
}

/* copy: copy 'from' into 'to'; assum to is big enough */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}


