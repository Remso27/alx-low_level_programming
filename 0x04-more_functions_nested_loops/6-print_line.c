#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * followed by a new line.
 * @n: an input integer
 * Return: Always 0
 */

int print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
