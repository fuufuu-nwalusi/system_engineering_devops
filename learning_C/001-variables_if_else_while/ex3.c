#include <stdio.h>

int main(void)
{
	char a = 'a';
	char b = 'b';
	
	while(a <= 'z')
	{
		putchar(a);
		a++;
	}
	while(b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return 0;
}
