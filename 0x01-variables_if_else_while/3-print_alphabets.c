#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int y, z;

	y = 97;
	z = 65;

	while (y < 123)
	{
		putchar(y);
		y++;
	}

	while (z < 97)
	{
		putchar(z);
		z++;
	}

	putchar(10);

	return (0);
}


