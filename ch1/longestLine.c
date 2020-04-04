#include <stdio.h>
#define MAXLINE 1000     /* maximum input line size */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main() {
    int len;    /* current line length */
    int max;    /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];   /* line saved here */

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > MAXLINE) {
        printf("\n\nStorage limit exceeded by : %d",max-MAXLINE);
        printf("\nString length : %d",max);
        printf("\n%s",longest);
    }
    else if (max > 0)    /* there was a line */
        printf("\nString length: %d", max);
        printf("\n%s", longest);
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


