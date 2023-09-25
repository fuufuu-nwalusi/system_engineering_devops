#include <stdio.h>

//void printAlphabet();

int main(void)
{
	printf("Alphabets in lower case:\n");

	char a;
	for(a = 'a'; a <= 'z'; a++)
	{
		printf("%c \n", a);
	}
//	printAlphabet();

	return 0;
}
/*
void printAlphabet()
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		printf("%c ", alpha);
	}
	printf("\n");
}
*/
