#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char alpha[26] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

        for (i = 0; i < 26; i++)
        {
                putchar(alpha[i]);
        }
        putchar('\n');
        return (0);
