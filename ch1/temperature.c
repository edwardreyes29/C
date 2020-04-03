#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower; // int lower converted to float
	printf("Fahrenheit-Celsius table");
	printf("\n------------------------\n");
	while (fahr <= upper) // int upper also converted to float
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	celsius = lower;
	printf("Celsius-Fahrenheit table");
	printf("\n------------------------\n");
	while (celsius <= upper) {
		fahr = (celsius * 9.0/5.0) + 32;
		printf("%6.1f\t%3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}	
}
