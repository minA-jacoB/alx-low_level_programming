#include "main.h"

/**
 * Write a function that swaps the values of two integers.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	*a = 98;
	*b = 42;
	c = *a;
	*a = *b;
	*b = c;
	
	printf("%d , %d"a , b);
}
