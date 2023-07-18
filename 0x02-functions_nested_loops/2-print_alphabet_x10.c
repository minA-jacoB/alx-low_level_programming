#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alpha;

	while (i < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		i++;
		putchar('\n');
	}
}
