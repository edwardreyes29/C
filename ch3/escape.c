/* Edward Reyes
Exercise 3-2
*/
#include <stdio.h>
#define MAXLINE 1000

void escape(char s[], char t[]);

int main() {
    char mystring[] = "May\t\tthe odds\nbe\tever in your favor";
    char stringCopy[MAXLINE];

    printf("%s\n", mystring);
    escape(mystring, stringCopy);
    printf("%s\n", stringCopy);
}

void escape(char s[], char t[]) {
    int i, j;

    for (i=j=0; s[i] != '\0'; ++i, ++j) {
        if (s[i] == '\n') {
            t[j] = '\\';
            t[++j] = 'n';
        }
        else if (s[i] == '\t') {
            t[j] = '\\';
            t[++j] = 't';
        }
        else 
            t[j] = s[i];
    }
}