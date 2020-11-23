#include <stdio.h>
#include <stdlib.h>

// Prototypes
void writeAFile();
void appendToFile();

int main(int argc, char const *argv[]) {
	writeAFile();
	return 0;
}

void writeAFile() {
	FILE *fWrite = fopen("README.txt", "w");

	// FILE - essentially a data type
	// *fWrite - pointer(memory address) variable of the file we will create/open with `fopen` (you can change this)
	// So basically,
	// FILE *fWrite - will create a memory address for the README.txt inside `fopen("README.txt", "w");`

	// fopen(filename, mode) - a function that will open a file
	// @filename - file name
	// @mode - what to do on the file
	// Three basic modes are: `r`(read), `w`(write), `a`(append).
	// fopen("README.txt", "w"); - Will write a file called README.txt

	// fprint(pointer, string) - a funtion that will write to the file
	// @pointer - the memory address of the file
	// @string - the information that will write into the file (will overwrite existing data)
	fprintf(fWrite, "Gerome Matilla is now a member of C Master Race!\nJohn Smith is a placeholder." );

	// Close file to free up memory and avoid corruption
	fclose(fWrite);

	appendToFile();
}

void appendToFile() {
	// Use `a` mode append data
	FILE *fAppend = fopen("README.txt", "a");

	fprintf(fAppend, "\nJohn Doe is yet another placeholder.");

	fclose(fAppend);
}
