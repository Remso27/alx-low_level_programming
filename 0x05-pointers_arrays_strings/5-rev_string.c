#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int x, max, half;
	char first, last;

	while (s[x] != '\0')
	{
		x++;
	}
	max = x - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
