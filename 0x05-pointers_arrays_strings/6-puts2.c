#include "main.h"

/**
 * puts2 - print alternating chars of string
 * @str: string
 * Return: Always 0
 */

void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
