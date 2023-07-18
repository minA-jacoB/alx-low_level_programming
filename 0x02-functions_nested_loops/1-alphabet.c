#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
char print_alphabet(void)
{
	int i;

	for(i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
print_alphabet}
