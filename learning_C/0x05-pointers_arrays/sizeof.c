#include <stdio.h>

/**
 * main - determine the size of data types using the sizeof operator
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of 'int' here is %lu byte(s)\n", sizeof(int));
	printf("This is the size of 'float' on my system - %lu byte(s)\n", sizeof(float));
	printf("Size of my variable 'n' is %lu bytes\n", sizeof(n));

	return 0;
}
