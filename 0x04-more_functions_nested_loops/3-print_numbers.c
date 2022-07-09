#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to
 * ,followed by a new line.
 * Return: Always 0
 */

void print_numbers(void)
{
	int w;

	for (w = '0'; w <= '9'; w++)
	{
		_putchar(w);
	}
	_putchar('\n');
}
