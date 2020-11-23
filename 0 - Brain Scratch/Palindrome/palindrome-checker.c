#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Lower each character of the word (char *).
char *lowerWord(char word[50], int wordLength) {
	char *lowered = malloc(wordLength  * sizeof(char));
	
	for(int i = 0; i < wordLength; i++) {
		char letter = word[i];
		lowered[i] = tolower(letter);
	}

	return lowered;
}

// Function that checks if it's a palindrome.
// Uses quantum ultra-advanced algorithm that transcends time and space. 
void palindromeChecker(char word[50], int wordLength) {
	bool isPalindrome = true;

	for(int i = 0; i < wordLength / 2; i ++) {
		char start = word[i];
		char end = word[wordLength - 1 - i];

		if(start != end) {
			isPalindrome = false;
			printf("Not palindrome!\n\n");
			break;
		}
	}

	if (isPalindrome) {
		printf("Palindrome!\n\n");
	}
}

// Ask for a word
void askForAWord() {
	char word[50];

	printf("Enter a word. I will check it if it is a palindrome.\n");

	// Repeatedly ask the user for a word until the user wants to quit
	while(1) {
		printf("> ");
		scanf("%s", word);

		// Compare user input with a string literal ":q". Will quit if true.
		if(strcmp(word, ":q") == 0) {
			break;
		} else {
			int wordLength = strlen(word);
			char *wordLowered = lowerWord(word, wordLength);;

			palindromeChecker(wordLowered, wordLength);

			// Free memory
			free(wordLowered);
		}
	}
}

int main(int argc, char const *argv[]) {
	printf("Palindrome is a word or phrase that will sound the same even if it was reversed or mirrored.\n");
	printf("Example: girafarig, racecar\n");
	printf("Type `:q` to exit program.\n\n");

	askForAWord();

	return 0;
}
