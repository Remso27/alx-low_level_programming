#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: no return
 */

void print_alphabet(void)
{
	char alphabet;

	char alphabet = "a";

	while (x <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar(10);
}
