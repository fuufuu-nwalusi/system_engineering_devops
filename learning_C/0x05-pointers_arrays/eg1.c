#include <stdio.h>

int main()
{
	int var = 19;
	int *ptr; // Pointer declaration
	ptr = &var; // Pointer initialization

	//int *ptr = &var; // Pointer definition
	
	//Dereferencing
	printf("Value at ptr is %p \n", ptr);
	printf("Value at var is %d \n", var);
	printf("Value at *ptr is %d \n", *ptr);

	return 0;
}

