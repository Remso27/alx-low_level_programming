#include "main.h"

/**
 * main - prints Holberton
 *
 * Description: prints Holberton
 *
 * Return: 0 (success)
 */

int main(void)
{

	char program[10] = "Holberton";
	int x = 0;

	for (x = 0; x < 9; x++)
	{
		_putchar(program[x]);
	}
	_putchar('\n');

	return (0);
}
