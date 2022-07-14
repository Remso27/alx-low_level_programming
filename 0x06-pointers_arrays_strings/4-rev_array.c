#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array of integers
 * @n: number of elements in array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int x, r, l;

	for (x = 0, r = (n - 1); x < r; x++, r--)
	{
		l = a[x]
		a[x] = a[r];
		a[r] = l;
	}
}
