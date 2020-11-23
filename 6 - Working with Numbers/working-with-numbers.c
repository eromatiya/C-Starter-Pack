#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	printf("%d\n", 2);
	printf("%f\n", 2.0);
	printf("%d\n", 2 + 2);
	printf("%f\n", 2 + 2.0);

	//
	// C Math functions
	//

	// Power function
	printf("%f\n", pow(2, 10));

	// Square root function
	printf("%f\n", sqrt(36));

	// Ceil function
	// Returns the smallest integer that is greater than or equal to x (i.e : rounds up the nearest integer).
	printf("%f\n", ceil(36.4));

	// Floor function
	// Returns the largest integer that is smaller than or equal to x (i.e : rounds downs the nearest integer).
	printf("%f\n", floor(36.5));


	return 0;
}
