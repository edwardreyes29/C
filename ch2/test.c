#include <stdio.h>
#include <ctype.h>
#include <math.h>

int strLen(char s[]); 
int atoi(char s[]);
int lower(int c);

int main() {

    // strlen example
    char first[] = "Edward";
    char last[] = {'R','e','y','e','s','\0'};
    const char msg[] = "warning: ";

    printf("First length: %d\n",strLen(first));
    printf("Last length: %d\n", strLen(last));
    // printf("%d\n", strLen(msg));

    // enumeration constants
    enum boolean { NO, YES };
    enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t',
                    NEWLINE = '\n', VTAB = '\v', RETURN = '\r'};

    enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, 
                    JUL, AUG, SEP, OCT, NOV, DEC };
                    /* FEB is 2, MAR is 3, etc. */
                    /* names in enumerations must be unique 
                        Numbers are generated for you.
                    */

    printf("atoi: %d\n", (atoi(last)));

    printf("lower: %c", lower('E'));
    putchar('\n');
    printf("isdigit: %d\n", isdigit('0'));
    printf("isdigit: %d\n", isdigit('A'));
}

/* strlen: return length of s */
int strLen(char s[]) {
    int i;
    
    i = 0; 
    while (s[i] != '\0')
        ++i;
    return i;
}

/* atoi: convet s to integer */
int atoi(char s[])
{
    int i, n;

    n = 0;
    for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i) 
        n = 10 * n + (s[i] - '0');
    return n;
}

/* lower: convert c to lower case; ASCII only */
int lower(int c) {
    if (c >= 'A' && c <= 'Z'){
        int a = 'a';
        int A = 'A';
        printf("A: %d, a: %d, a - A: %d\n", A, a, (a-A));
        printf("c + (a - A): %d\n", c + (a - A));
        return c + 'a' - 'A';
    }
        
}