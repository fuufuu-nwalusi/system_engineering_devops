#include <stdio.h>

int main()
{
	int x = 24;
	int y = 10;
	int z;
	
	z = x + y;
	printf("No 1 - C is %d\n", z);

	z = x - y;
	printf("No 2 - C is %d\n", z);

	z = x * y;
	printf("No 3 - C is %d\n", z);
	
	z = x / y;
	printf("No 4 - C is %d\n", z);

	z = x % y;
	printf("No 5 - C is %d\n", z);
		
	z = x++;
        printf("No 6 - C is %d\n", z);

	z = x--;
	printf("No 7 - C is %d\n", z);
}
