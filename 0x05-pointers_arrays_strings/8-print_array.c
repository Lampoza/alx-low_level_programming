#include <stdio.h>
#include "main.h"

/**
 * print_array -it prints n elements of an array of integers
 * then followed by a new line
 * @a: is an array to be printed
 * @n: is a number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
