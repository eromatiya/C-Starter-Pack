#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int secretNum = 10;
	int guessNum;
	int tryQuota = 10;
	int tryCount = 0;
	int gameOver = 0;

	while((secretNum != guessNum) && (gameOver == 0)) {
		if (tryCount < tryQuota) {
			printf("Enter your guess: ");
			scanf("%d", &guessNum);
			tryCount++;
		} else {
			gameOver = 1;
		}
	}

	if (gameOver == 1) {
		printf("You failed!" );
	} else {
		printf("You win!" );
	}

	return 0;
}
