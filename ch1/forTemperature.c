#include <stdio.h>

#define LOWER 0 	/* Symbolic constants: lower limit of table */
#define UPPER 300	/* upper limit */
#define STEP 20		/* step size */

float FtoC(int f); // function prototype

/* print Fahrenheit-Celsius table */
int main() {
	int fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
		printf("%3d %6.1f\n", fahr, FtoC(fahr));
	}
}

/* FtoC: converts fahrenheit to celsius */
float FtoC(int f) {
	return (5.0/9.0) * (f-32);
}