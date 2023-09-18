#include <stdio.h>

/**
 * main - printing the size of a pointer in bytes
 *
 * Return: Always 0
 */
int main(void)
{
	char *p;
	printf("Size of pointer p is %lu\n", sizeof(p));
	return 0;
}
