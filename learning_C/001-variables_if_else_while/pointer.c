#include <stdio.h>

/**
 * main - printing the size of a pointer in bytes
 *
 * Return: Always 0
 */
int main(void)
{
	int *age;
	char *ptr;
	//char *p;
	//printf("Size of pointer p is %lu\n", sizeof(p));
	
	printf("Address of pointer age is %p\n", &age);

	return 0;
}
