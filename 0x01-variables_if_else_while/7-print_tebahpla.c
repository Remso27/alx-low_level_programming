#include <stdio.h>

/**
 * main - print the letter of the alphabet
 *
 * Description: print the letter of the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int x;

	x = 122;

	while (x > 96)
	{
		putchar(x);
		x--;
	}

	putchar(10);

	return (0);

}
