#include <stdio.h>

/**
 * main - printing the size and address of a pointer
 *
 * Return: Always 0
 */
int main(void)
{
	int *p;
	printf("Size of pointer: %lubytes\n", sizeof(p));
	printf("Address of vaiable 'p': %p\n", &p);
	return (0);
}

