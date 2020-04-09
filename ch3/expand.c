#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
void expand(char s1[], char s2[]);

int main() {
    int i;

    char string1[] = "g-n";
    char string2[MAXLINE];
    expand(string1, string2);

    for (i=0; i < strlen(string2); i++)
        printf("%c ", string2[i]);
    printf("\n");

    char string3[] = "4-8";
    char string4[MAXLINE];
    expand(string3, string4);

    for (i=0; i < strlen(string4); i++)
        printf("%c ", string4[i]);
    printf("\n");
}

void expand(char s1[], char s2[]) {
    int i, j, start, end;
    int chars[2];

    // extract first letter and last letter
    for (i=j=0; i < strlen(s1); i++) {
        if (s1[i] != '-') {
            chars[j] = s1[i];
            j++;
        }      
    }

    start = chars[0];
    end = chars[1];
    for (i=start, j=0; i <= end; i++, j++) {
        s2[j] = i;
    }
}