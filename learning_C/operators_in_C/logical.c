#include <stdio.h>

int main()
{
	int m = 40;
	int n =20;
	int o = 20;
	int p = 30;

	if(m > n && m != 0)
	{
		printf("&& operator: Both conditions are true\n");
	}

	if(o > p || p != 20)
	{
		printf("|| operator: Only one (the second) condition is true\n");
	}

	if(!(m > n && m != 0))
	{
		printf("! operator: Both conditions are true\n");
	}
	else
	{
		printf("! operator: Both conditions are true but it's gonna be inverted as false\n");
	}

	return 0;
}
