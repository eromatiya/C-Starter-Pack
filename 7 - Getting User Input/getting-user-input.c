#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char name[200];
	int age;
	char section;
	double gpa;
	char answer[20];

	printf("Name: ");
	scanf("%s", name);
	printf("Age: ");
	scanf("%d", &age);
	printf("Section: ");
	// If scanning for a character `%c`, add a whitespace before it so it would work.
	scanf(" %c", &section);
	printf("GPA: ");
	scanf("%lf", &gpa);

	printf("Oh, so you are %s, a %d years old student of section %c with a GPA of %lf, right?\n", name, age, section, gpa);

	fgets(answer, 20, stdin);
  	// fgets - get value from stdin,stderr,etc
  	// fgets(@variable, @length, @source)
	printf("Your answer is %s", answer);

	return 0;
}
