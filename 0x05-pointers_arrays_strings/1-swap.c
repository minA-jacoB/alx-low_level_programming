#include "main.h"

/**
 * Write a function that swaps the values of two integers.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
