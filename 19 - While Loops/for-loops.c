#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

	int primeNumbers[] = {3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 31, 47};

	for (int i = 0; i < 13; ++i) {
		printf("Index #%d: %d\n", i, primeNumbers[i]);
	}

	return 0;
}
