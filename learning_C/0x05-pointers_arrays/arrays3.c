#include <stdio.h>

/**
 * main - An array ain't a pointer but ...
 *
 * Return: Always 0
 */
int main(void)
{
	int a[98];

	printf("a: %d\n", a);
	printf("&a[0]: %p\n", &a[0]);


	return 0;	
}
