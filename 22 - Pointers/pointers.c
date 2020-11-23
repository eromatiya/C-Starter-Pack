#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

	// Pointer is just a type of data, a memory address
	// Just like how integer, a whole number
	// Or double, a decimal number

	int age = 22;
	double gpa = 3.2;
	char grade = 'A';

	// Create pointers variables
	// and used the memory addresses of the variables above
	int *pAge = &age;
	double *pGpa = &gpa;
	char *pGrade = &grade;

	printf("Age's memory address: %p\n", &pAge);
	printf("GPA's memory address: %p\n", &pGpa);
	printf("Grade's memory address: %p\n", &pGrade);

	return 0;
}
