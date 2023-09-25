#include <stdio.h>

int main() 
{
	int x = 42;
	int *ptr1 = &x;  // Pointer to int

	int **ptr2 = &ptr1;  // Pointer to pointer to int

	// Accessing the value using a pointer to pointer
	//printf("Value of x: %d\n", **ptr2);
	printf("Size of **ptr2: %zu bytes\n", sizeof(**ptr2));

         return 0;
 }
