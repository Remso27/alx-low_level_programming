#include "main.h"
#include <stdio.h>

/**
 * main - take the fizz-buzz challenge
 * Return: Always 0
 */

int main(void)
{
	int n = 1;

	for (n < 101; n++)
	{
		if (n % 5 == 0 && n % 3 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			printf("Buzz")
		else
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			print("%d ", n);
	}
	printf("\n");

	return (0);
}
