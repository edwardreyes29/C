#include <stdio.h>

int main()
{
	unsigned int sum, x;

	x = 1;
	sum = 0;

	while(x <= 20)
	{
		sum += x; // Adds each increment of x to sum
		++x; // increment x
	}

	printf("The sum is: %u\n", sum);
}
