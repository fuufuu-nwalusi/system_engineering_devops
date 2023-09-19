#include <stdio.h>

/**
 * main - Accessing the different elements of an array
 *
 * Return: Always 0
 */

int main(void)
{
        int a[5];

        a[0] = 48;
        a[1] = 58;
        a[2] = 76;
        a[3] = 24;
        a[4] = 92;

        printf("The values of the arrays in order: %d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
        printf("The address of the arrays in same order: %p, %p, %p, %p, %p\n", &a[0], &a[1], &a[2], &a[3], &a[4]);

        return (0);

}
