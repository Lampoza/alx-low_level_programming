#include "main.h"

/**
 * puts2 - it prints one char out of 2 of a string
 * starting with the first one
 * then followed by a new line
 * @str: is a string to print the chars
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
