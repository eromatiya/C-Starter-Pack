#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const int BINARYLENGTH = 1000;

void binaryToDecimal(char binaryStr[BINARYLENGTH], int length) {
	int decimalValue = 0;
	int multiplier = 1;

	for(int i = length - 1; i >= 0; i--) {
		// Convert char to int
		int binary = binaryStr[i] - '0';
		decimalValue += (binary * multiplier);
		multiplier *= 2;
	}
	printf("= %d\n\n",  decimalValue);
}

void binaryChecker(char binaryStr[BINARYLENGTH], int length) {
	bool valid = true;
	
	for(int i = 0; i < length; i++) {
		char cur = binaryStr[i];

		if ((cur != '0') && cur != '1')  {
			valid = false;
			break;
		} 
	}

	if (valid == true) {
		binaryToDecimal(binaryStr, length);
	} else {
		printf("= Invalid!\n\n");
	}
}

void askForBinary() {
	printf("Enter a binary. I will convert it to decimal.\n");
	printf("Type `:q` to exit program.\n\n");

	// Repeatedly ask the user for a binary string until the user wants to quit
	while(1) {
		char binaryStr[BINARYLENGTH];

		printf("> ");
		scanf("%s", binaryStr);

		// Compare user input with a string literal ":q". Will quit if true.
		if(strcmp(binaryStr, ":q") == 0) {
			break;
		} else {
			int binaryStrLen = strlen(binaryStr);
			binaryChecker(binaryStr, binaryStrLen);
		}
	}
}

int main(int argc, char const *argv[]) {
	askForBinary();
	return 0;
}
