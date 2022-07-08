#include "main.h"

/**
 *  _isalpha - checks for alphabetical letters
 * @c: a charter to be checke on
 * Return: returns 1 and 0 depending on condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
