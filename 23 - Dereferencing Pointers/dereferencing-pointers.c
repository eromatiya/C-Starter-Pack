#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

	// Dereferencing pointer is just grabbing the value in the physical(memory) address
	// So: 
	// &var - to get the pointer (memory address)
	// int *pVar - will create a pointer variable
	// int *pVar = &var - will assign the pointer(memory address) of `var` variable to *pVar pointer variable
	// *pVar - get the value from the pointer (memory address)
	
	// So also:
	// *&var will return the value of `var` variable because `&` will get the memory address(pointer).
	// While`*` will dereference it, getting the value inside the pointer

	// Create the `age` int variable, assign `22` as its value
	int age = 22;

	// Create *pAge pointer variable, assign the memory address of `age` as its value
	int *pAge = &age;

	// pAge will return the memory address of `age` variable, a pointer.
	printf("Age's memory address: %p\n", pAge);	
	
	// *pAge will dereference it getting the value of 22, an integer.
	printf("Age's dereferenced pointer value: %d\n", *pAge);

	return 0;
}
