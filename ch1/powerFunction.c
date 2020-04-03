#include <stdio.h>

// function prototype -> must agree with definition nas uses or power.
// parameter names are option: power(int int) would work.
int power(int m, int n); // (arguments)

/* test power function */
int main() {
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) { // (parameters)
    int i, p;
    p = 1; 
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p; // returns value to caller. If no value just returns to caller
}

/*
    return-type function-name(param declarations) {
        declarations
        statements
    }
*/