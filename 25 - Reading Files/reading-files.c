#include <stdio.h>
#include <stdlib.h>

// Prototypes
void readAFile();

int main(int argc, char const *argv[]) {
	readAFile();
	return 0;
}

void readAFile() {
	char line[255];
	FILE *fRead = fopen("README.txt", "r");

	fgets(line, 255, fRead);
	fgets(line, 255, fRead);
	printf("%s", line);

	// Close file to free up memory and avoid corruption
	fclose(fRead);
}
