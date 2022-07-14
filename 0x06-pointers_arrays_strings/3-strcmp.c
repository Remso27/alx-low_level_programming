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
	int y = 0;

	while (y == 0)
	{
		if ((*(s1 + x) == '\0') && (*(s2 + x) == '\0'))
			break;
		y = *(s1 + x) - *(s2 + x);
		x++;
}
