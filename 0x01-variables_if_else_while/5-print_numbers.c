#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int x;

	x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;
	}

	putchar(10);

	return (0);
}
