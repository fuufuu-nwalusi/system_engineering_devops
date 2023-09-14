#include <stdio.h>
/*
 *main: Determine the last digit of the given numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int givenNumber = 290787;
	int lastDigit = givenNumber % 10;

	printf("The last digit of %d is %d\n", givenNumber, lastDigit);

	return 0;
}

