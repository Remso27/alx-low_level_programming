#include "main.h"

/**
 * _strlen - returns length of a string
 * @sl: string
 * Return: length of a string
 */

int _strlen(char *sl)
{
	int len = 0;

	while (sl[len] != '\0)
	{
	len++;
	}

	return (len);
}
