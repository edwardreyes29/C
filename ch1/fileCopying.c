#include <stdio.h>

/* copy input to output */
int main() {
	/*
	 * c is an int since it can hold any value getchar returns and EOF is an integer defined in stdio.h
	 */
	int c;
	//printf("%d", EOF); // EOF is -1
	while((c = getchar())  != EOF) {
		putchar(c);
	}
	printf("\nThis is the value of EOF%d\n",c);
}
