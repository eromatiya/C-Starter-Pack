#include <stdio.h>
#include <stdlib.h>

double cube(double num) {
	return num * num * num;
}

int main(int argc, char const *argv[])
{
	printf("Answer is %f: ", cube(2));
	return 0;
}
