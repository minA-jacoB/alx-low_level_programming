#include "main.h"

/**
 * Write a function that swaps the values of two integers.
 *swap value a
 *swap value b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
