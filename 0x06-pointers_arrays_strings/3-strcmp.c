#include "main.h"

/**
 * _strcmp - compare tow strings
 * @s1: first string
 * @s2: second string
 * Return: output the difference of s1 and s2
 */

int *_strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*(s1 + x) && *(s2 + x) && (*(s1 + x) == *(s2 + x))
			x++;
	return (*(s1 + x) - *(s2 + x));
}
