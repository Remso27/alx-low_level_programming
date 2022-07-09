#include "main.h"

/**
 * print_square - draws a square
 * @size: length and width of square
 * Return: Always 0
 */

void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
