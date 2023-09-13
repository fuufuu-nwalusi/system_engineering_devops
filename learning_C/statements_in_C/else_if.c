#include <stdio.h>

int main()
{
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);

	if (age < 100)
	{
		printf("You are still young!\n");
	}
	else if (age == 100)
	{
		printf("You are almost old\n");
	}
	else
	{
		printf("You are old oo\n");
	}

	return 0;
}
