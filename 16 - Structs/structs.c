#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define Student struct
// Notice the semi-colon at the end curly-brace
struct Student {
	char name[50];
	char major[50];
	int age;
	double gpa;	
};

int main(int argc, char const *argv[]) {

	struct Student student1;
	struct Student student2;
	
	// Use strcpy to (re-)assign value to an arrayed-char/string
	// Needs string.h header
	strcpy(student1.name, "Jim");
	strcpy(student1.major, "Business");
	student1.age = 22;
	student1.gpa = 3.2;
	printf("%s\n", student1.name);

	strcpy(student2.name, "Pam");
	strcpy(student2.major, "Art");
	student2.age = 20;
	student2.gpa = 2.5;
	printf("%s\n", student2.name);

	return 0;
}
