#include "main.h"

/**
 * main - prints Alxschool
 *
 * Description: prints Alxschool
 *
 * Return: 0 (success)
 */

int main(void)
{

	char program[10] = "Alxschool";
	int x = 0;

	for (x = 0; x < 9; x++)
	{
		_putchar(program[x]);
	}
	_putchar('\n');

	return (0);
}
