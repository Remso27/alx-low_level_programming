#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @n: number of items to print
 * @a: array of integers
 * Return: Always 0
 */


void print_array(int *a, int n)
{
	int x, count;

	x = 0;
	count = 1;
	if (n < 0)
		n = 0;
	if (n > 0)
	{
		while (a[x] != '\0' && count < n)
		{
			printf("%d, ", a[x]);
			x++;
			count++;
		}
		printf("%d\n", a[x]);
	}
}
