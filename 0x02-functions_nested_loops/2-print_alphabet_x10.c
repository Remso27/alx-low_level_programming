#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar (i);
		}
	_putchar ('\n');
	}
}
