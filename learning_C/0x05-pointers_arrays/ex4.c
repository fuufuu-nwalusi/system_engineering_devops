#include <stdio.h>

/**
 * main - printing the size and address of a pointer
 * also, storing the address of variable into a pointer 
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	int *p;

	x = 98;
	p = &x;

	//printf("Size of pointer: %lubytes\n", sizeof(p));
	//printf("Address of vaiable 'p': %p\n", &p);
	printf("Address of x: %p\n", &x);
	printf("Value of p: %p\n", p);

	return (0);
}

