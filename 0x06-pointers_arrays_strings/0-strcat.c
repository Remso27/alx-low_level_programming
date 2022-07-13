#include <main.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination char
 * @src: source char
 * Return: new char
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int n;

	while (dest[n] != '\0')
	{
		n++;
	}
	for (x = 0 ; x < n && src[x] != '\0' ; x++)
		dest[n + x] = src[x];
	dest[n + x] = '\0';

	return (dest);
}
