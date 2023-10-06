#include <stdio.h>

/*
 * checkPrimeNumber: function used to check if a number is a primenumber or not
 *
 * return: Always 0 on success
 */

int checkPrimeNumber();

int checkPrimeNumber(int num)
{
	int i;

	if (num <= 1)
	{
		return 0;
	}
	
	for(i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);

	if (checkPrimeNumber(num))
	{
		printf("%d is a prime number.\n", num);
	}
	else
	{
		printf("%d is not a prime number.\n", num);
	}
	return 0;
}
