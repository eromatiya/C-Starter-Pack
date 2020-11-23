#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

	// While loop
	printf("While loop\n");
	int i = 0;
	while (i <= 4) {
		printf("%d\n", i);
		i++;
	}

	printf("---------------\n");
	
	// Do while loop
	printf("Do...while loop\n");
	int j = 5;
	do {
		printf("%d\n", j);
		j++;
	} while (j <= 4);

	return 0;
}
