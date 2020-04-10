#include <stdio.h>
#include <ctype.h>
#define MAXLINE 100

int atoi(char s[]);

int main() {
    double sum, atof(char []);
    char line[MAXLINE];
    int getLine(char line[], int max);

    sum = 0;
    while (getLine(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));

    printf("Total Sum: $%g\n", sum);
    

    char enot[] = "123.45e-6";
    printf("%s\n", enot);
    printf("E notation: %g\n", atof(enot));

    return 0;
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

/* atof: convert string s to double */
double atof(char s[]) {
    double val, power, epower, eval;
    int i, sign, esign;

    for (i = 0; isspace(s[i]); i++) /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1; // if minus sign, assign -1 to sign
    if (s[i] == '+' || s[i] == '-')
        i++;
    
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0; // get all the whole numbers, divide by power of 10
    }

    // Exerise 4-2
    esign = 0;
    if (s[i] == 'e') {
        i++;
    
        esign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '-')
            i++;
        // get eval
        for (eval = 0.0; isdigit(s[i]); i++) {
            eval = 10.0 * eval + (s[i] - '0');
        }
        // printf("eval: %g\n", eval);
        // get power of 10
        epower = 1.0;
        for (i = 0; i < eval; i++) {
            epower *= 10;
        }
        // printf("epower: %g\n", epower);
    }
    if (esign == -1) 
        return sign * ((val / power)  *  (1.0 / epower));
    else if (esign == 1)
        return sign * ((val / power) * epower);
    else 
        return sign * val / power;
}

/* atoi: convert string s to integer using atof */
int atoi(char s[]) {
    double atof(char s[]);

    return (int) atof(s);
}