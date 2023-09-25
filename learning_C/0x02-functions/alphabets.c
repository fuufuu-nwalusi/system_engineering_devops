#include <stdio.h>

//void printAlphabet();

int main(void)
{
	char a;
	for(a = 'a'; a <= 'z'; a++)
	{
		printf("Alphabets in lower case:\n");
		printf("%c ", a);
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
