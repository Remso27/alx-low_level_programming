#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: Always 0
 */

void more_numbers(void)
{
	int w, t = 0;

	for (t < 10; t++)
	{
		for (w = 0; w <= 14; w++)
		{
			if (w > 9)
				_putchar(w / 10 + '0');
			_putchar(w % 10 + '0');
		}
		_putchar('\n');
	}
}
