#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2) {
	
	// Simple if statement
	if (num1 > num2) {
		return num1;
	} else {
		return num2;
	}

	// Ternary operator
	// int biggest = (num1 > num2) ? num1 : num2;
	// return biggest;
}

int main(int argc, char const *argv[])
{
	printf("%d", max(200, 3));
	return 0;
}
