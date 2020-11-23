#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	// Format specifiers
	// %d - integer
	// %s - string
	// %c - char
	// %f - float
	// %lf - double
	// %x - hexadecimal

	char distro[] = "Archlinux";
	int hierarchy = 1;

	printf("%s is the number %d distro in the world!", distro, hierarchy);
	return 0;
}
