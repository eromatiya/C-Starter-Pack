#include <stdio.h>
#include <stdlib.h>

void printMemoryAddress() {
	int age = 22;
	int gpa = 2.2;
	int grade = 'A';

	printf("Print Memory Addresses\n");
	printf("Age: %p\n", &age);
	printf("GPA: %p\n", &gpa);
	printf("Grade: %p\n", &grade);
}

int main(int argc, char const *argv[]) {
	printMemoryAddress();
	return 0;
}
