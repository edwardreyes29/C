#include <stdio.h>
#include <ctype.h>

int atoi(char sp[]);

int main() {
    char nstring[] = "-25";
    printf("%d\n", atoi(nstring));
}

/* atoi: convert s to integer; version 2*/
int atoi(char s[]) {
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++) /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1; // if negative, multiply number by -1
    if (s[i] == '+' || s[i] == '-') /* skip sign */
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0'); // 25 -> 10 * 0 + (50 - 48) = 2 | -> 10 * 2 + (53 - 48) = 25
    return sign * n;
}

