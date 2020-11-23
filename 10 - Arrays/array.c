#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int primeNumbers[] = {3, 5, 7, 11, 13, 15};
	printf("Index 1 is %d\n", primeNumbers[1]);

	primeNumbers[1] = 17;
	printf("Index 1 is now %d", primeNumbers[1]);

	// Yep, this is also an array
	char name[] = "Shrek";

	return 0;
}