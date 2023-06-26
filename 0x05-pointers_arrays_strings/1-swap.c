#include "main.h"

/**
 * swap_int - it swaps the values of two integers
 * @a: is a pointer to first value
 * @b: is a pointer to second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
