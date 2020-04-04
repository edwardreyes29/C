// Exercise 19
#include <stdio.h>

#define MAXLINE 1000

int getLine(char str[], int lim);
void reverse(char str[]);

int main(void)
{
    int len;
    char line[MAXLINE];
    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > 1) {
            reverse(line);
            printf("\n%s", line);
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

/* copy: copy 'from' into 'to'; assum to is big enough */
void reverse(char str[]) {
    int i,j;
    char temp;

    // take care of '\n'
    for (j = 0; str[j] != '\0';++j)
        ;
    --j;
    
    if (str[j] == '\n') {
        str[j] = '\0';
        --j;
    }
    // printf("%d ", j);

    // Reverse the strings
    for (i = 0; i < j; ++i) {
        // printf("%c : %c \n", str[i], str[j]);
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        --j;
        
    }
    
}