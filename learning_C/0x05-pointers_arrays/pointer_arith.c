#include <stdio.h>

int main()
{
	int v[3] = {10, 100, 200};
	int *ptr;
	ptr = v;

	for (int i = 0; i < 3; i++)
	{
		printf("Value of *ptr is %d\n", *ptr);
		printf("Value of ptr is %p\n", ptr);

		ptr++;
	}
	return 0;
}
