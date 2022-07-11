#include "main.h"

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x--;
	while (x >= 0)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
