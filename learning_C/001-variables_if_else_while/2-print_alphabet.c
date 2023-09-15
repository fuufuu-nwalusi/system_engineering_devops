#include <stdio.h>

/*
 * main - prints alphabets in lower case
 *
 * Return: 0 on sucess
 */
int main(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return 0;
}
