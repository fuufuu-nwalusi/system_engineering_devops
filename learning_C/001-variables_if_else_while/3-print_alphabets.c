#include <stdio.h>

/*
 * main - prints the alphabet in lowercase
 * and then in uppercase
 * 
 * Return: Always 0 on sucess
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return 0;
}
