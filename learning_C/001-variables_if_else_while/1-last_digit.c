#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - Determine if the last digit of a random 
 * number is greater or less than 5, or is zero.
 *
 * Return: 0 on sucess
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* my code goes there */
	int lastDigit = n % 10;
	
	printf("Last digit of %d is %d\n", n, lastDigit);

	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0");
	}
	
	return (0);
}
