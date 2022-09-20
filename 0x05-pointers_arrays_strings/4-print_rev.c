#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse a string
 * @s: string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
