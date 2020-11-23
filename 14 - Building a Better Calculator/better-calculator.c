#include <stdio.h>
#include <stdlib.h>

void calculate(double num1, double num2, char operator) {
	if (operator == '+') {
		printf("%f", num1 + num2);
	} else if (operator == '-') {
		printf("%f", num1 - num2);
	} else if (operator == '*') {
		printf("%f", num1 * num2);
	} else if (operator == '/') {
		printf("%f", num1 / num2);
	} else {
		printf("Invalid operator!" );
	}
}

void ask() {
	double num1, num2;
	char op;

	printf("Enter a number: ");
	scanf("%lf", &num1);
	printf("Enter an operator: ");
	scanf(" %c", &op);
	printf("Enter a number: ");
	scanf("%lf", &num2);
	
	calculate(num1, num2, op);
}

int main(int argc, char const *argv[])
{
	ask();
	return 0;
}
