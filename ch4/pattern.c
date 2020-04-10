#include <stdio.h>
#define MAXLINE 1000    /* maximum input line length */

int getLine(char line[], int max);
int strindex(char source[], char searchfor[]);
int strrindex(char s[], char t[]);

char pattern[] = "ould";    /* pattern to search for */

/* find all lines matchin pattern */
int main() {
    char line[MAXLINE];
    int found = 0;

    while (getLine(line, MAXLINE) > 0) {
        int rightmost = strrindex(line, pattern);
        if (rightmost >= 0) {
            printf("%s", line);
            printf("%d\n", rightmost);
            found++;
        }
    }
    return found;
}

/* getLine: get line into s, return length */
int getLine(char s[], int lim) {
    int c , i; 

    i = 0;
    while(--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++) /* checks if pattern is matched, i hold starting location */
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}

/* strindex: return right most occurrence of t in s, -1 if none */
int strrindex(char s[], char t[]) {
    int i, j, k, r;

    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0, r=0; t[k]!='\0' && s[j]==t[k]; j++, k++) { /* checks if pattern is matched, i hold starting location */
            if (k == 0) {
                r = j-1;
            }
            r++;
        }
        if (k > 0 && t[k] == '\0')
            return r;
    }
    return -1;
}
