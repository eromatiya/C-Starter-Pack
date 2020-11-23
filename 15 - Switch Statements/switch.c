#include <stdio.h>
#include <stdlib.h>

void judgeGrade(char grade) {
	switch(grade) {
		case 'A':
			printf("You did very well!");
			break;
		case 'B':
			printf("You did all right!");
			break;
		case 'C':
			printf("You did poorly!");
			break;
		case 'D':
			printf("You did poorly!");
			break;
		case 'F':
			printf("You failed!");
			break;
		default:
			printf("Invalid grade!");
	}
}

void askGrade() {
	char grade;

	printf("Enter grade: ");
	scanf("%c", &grade);

	judgeGrade(grade);
}

int main(int argc, char const *argv[])
{
	askGrade();
	return 0;
}
