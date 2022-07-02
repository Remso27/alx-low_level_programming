#include <stdio.h>

/**
 * main - print the letter of the alphabet
 *
 * Description: print the letter of the alphabe except e, q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int x;

	x = 0;

	while (x < 48)
	{
		if (x < 10)
			putchar(x + '0');
		else if (x > 41)
			putchar(x - 10 + 'A');
		x++;
	}

	putchar(10);

	return (0);

}
