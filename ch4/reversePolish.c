#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100   /* max size of operand or operator */
#define NUMBER '0'  /* signal that a number was found */

/* function declarations */
int getop(char []);
void push(double);
double pop(void);

/* reverse Polish calculator */
int main() {
    int type;
    double op2;
    char s[MAXOP];
}

#define MAXVAL 100  /* maximum val stack */

int sp = 0;         /* next free stack position */
double val[MAXVAL]; /* value stack */

/* push: push f onto value stack 
    {1,2,4,5}
*/
void push(double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else 
        printf("error: stack full, can't push %g\n", f);
}

/* pop: pop and return top value from stack 
    {1,2,4,5} -> {1,2,4} returns 5
*/
double pop(void) {
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
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

#include <ctype.h>



