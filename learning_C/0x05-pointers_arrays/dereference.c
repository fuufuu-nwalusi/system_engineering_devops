#include <stdio.h>

/**
 * main - dereferencing pointers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	
	/*Want to check the parameters below:
	- Value of n
	- Address of n
	- Value of p
	- Value of n when *p = 402*/

	printf("Value of n is %d\n", n);
	printf("Address of n is %p\n", &n);
	printf("Value of p here is %p\n", p);
	*p = 402;
	printf("Value of n becomes %d\n", n);
	
	return 0;
}
