// Exercise 19
#include <stdio.h>

#define MAXLINE 1000
#define TABWIDTH 4

int entab(char str[], int lim);


int main(void)
{
    int len;
    char line[MAXLINE];
    while ((len = entab(line, MAXLINE)) > 0)
        if (len > 1) {
            printf("\n%s", line);
        }  
    return 0;
}

int entab(char str[], int lim)
{
    int c, i, j, tabCount;
    i = j = tabCount = 0;
    while ((c = getchar()) != EOF && c != '\0')
    {
        if (c == ' ') {
            ++tabCount;

            if (tabCount % TABWIDTH == 0){
                putchar('\t');
                tabCount = 0;
            }
        } else {
            if (tabCount < TABWIDTH) {
                for (j = 0; j < tabCount; ++j)
                    putchar(' ');
                tabCount = 0;
            }
            
            putchar(c);
        }
    }
    if (c == '\n' && i++ < lim) // if 0, will be incremented no matter what
        str[i - 1] = '\n';
    str[(i < lim) ? i : lim - 1] = '\0';
    // printf("%d ", i);
    return i;
}

