#include <stdio.h>
#include <stdlib.h>

void sayHisName(char name[], char occupation[]) {
	printf("%s %s.", name, occupation);
}

int main(int argc, char const *argv[])
{
	printf("\"Who are you?\"\n");
	printf("Say my name.\n");
	sayHisName("Heisenberg", "The Meth Lord");
	return 0;
}
