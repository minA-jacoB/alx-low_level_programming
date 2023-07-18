#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
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
