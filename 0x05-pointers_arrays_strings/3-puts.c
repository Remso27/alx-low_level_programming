#include "main.h"

/**
 * _puts - prints string
 * @str: string
 * Return: Always 0
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
	_putchar(str[x]);
	x++;
	}

	_putchar('\n');
}
