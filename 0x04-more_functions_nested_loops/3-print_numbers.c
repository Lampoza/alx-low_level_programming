#include "main.h"

/**
 * print_numbers - printing the numbers, from 0 to 9,
 * followed by a new line
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
