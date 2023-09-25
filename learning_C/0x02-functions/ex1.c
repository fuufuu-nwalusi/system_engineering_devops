#include <stdio.h>

int add(int a, int b);

int main()
{
	int x = 45;
	int y = 20;
	int sum;

	//printf("The sum of these 2 = %d\n", sum);

	sum = add(x, y);
	printf("The sum of these 2 = %d\n", sum);

	return 0;
}

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}
