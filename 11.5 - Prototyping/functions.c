#include <stdio.h>
#include <stdlib.h>

// To call a function below main(), create a prototype of the said function
void sayHisName(char name[], char occupation[]);

int main(int argc, char const *argv[])
{
	printf("\"Who are you?\"\n");
	printf("Say my name.\n");
	sayHisName("Heisenberg", "The Meth Lord");
	return 0;
}

void sayHisName(char name[], char occupation[]) {
	printf("%s %s.", name, occupation);
}
