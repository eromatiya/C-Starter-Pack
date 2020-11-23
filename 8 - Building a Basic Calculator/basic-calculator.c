#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	double num1, num2;
	printf("Enter first number: ");
	// Use %lf if scanning for double while %f on printing
	scanf("%lf", &num1);
	printf("Enter second number: ");
	scanf("%lf", &num2);

	printf("The answer is %f.", num1 + num2);

	return 0;
}