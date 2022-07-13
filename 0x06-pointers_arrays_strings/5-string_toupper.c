#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase of string to uppercase
 * @c: string array
 * Return: string array
 */

char *string_toupper(char *c)
{
	int x;

	for (x = 0 ; c[x] != '\0' ; x++)
	{
		if (c[x] >= 'a' && c[x] <= 'z')
			c[x] = c[x] - 32;
	}

	return (c);
}
