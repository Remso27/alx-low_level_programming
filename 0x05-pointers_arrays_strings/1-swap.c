#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer1
 * @b: pointer2
 *  Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int y = *a;
	*a = *b;
	*b = y;
}
