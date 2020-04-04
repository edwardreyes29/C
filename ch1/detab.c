#include <stdio.h>

#define MAXLINE 1000
#define TABWIDTH 4

int getLine(char str[], int lim);
void detab(char to[], char from[]);

int main(void)
{
    int len;
    char line[MAXLINE];
    char nline[MAXLINE];
    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > 1) {
            detab(nline, line);
            printf("\n%s", nline);
        }
            
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
    // printf("%d ", i);
    return i;
}

/* copy: copy 'from' into 'to'; assum to is big enough 
    This is a comment
*/
void detab(char to[], char from[]) {
    int i,j,n;
    i = j = n = 0;
    while ((to[i] = from[j]) != '\0') {
        if (to[i] == '\t')
            for (n = 0; n < TABWIDTH; ++n, ++i)
                to[i] = ' ';
        else
            ++i;
        ++j;
    }
    /* copy: copy 'from' into 'to'; assum to is big enough 
    This is a comment
    */
    
}