#include <stdio.h>

/* count characters in input; */
int main() {
	// 1st version
	/*
	long nc;

	nc = 0;
	
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
	*/

	// 2nd version
	double nc;
	for (nc = 0; getchar() != EOF; ++nc) 
		; // isolated semicolon is called a null statement 
	printf("%.0f\n", nc);
}
