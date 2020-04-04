#include <stdio.h>

#define MAXLINE 1000

int getLine(char str[], int lim);

int main(void)
{
    int len;
    char line[MAXLINE];
    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > 1)
            printf("%s", line);
    return 0;
}

int getLine(char str[], int lim)
{
    int c, i, j;
    i = j = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        if (j < lim)
            str[j++] = c;
        if (c != ' ' && c != '\t')
            i = j;

        // printf("%d ", i);
    }
    if (c == '\n' && i++ < lim) // if 0, will be incremented no matter what
        str[i - 1] = '\n';
    str[(i < lim) ? i : lim - 1] = '\0';
    printf("%d ", i);
    return i;
}