#include <main.h>

/**
 * _strncpy - write a function that copies a string
 * @dest: destination char
 * @src: source char
 * @n: number of bytes from src
 * Return: new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0 ; x < n && src[x] != '\0' ; x++)
		dest[x] = src[x];
	dest[x] = '\0';

	return (dest);
}
