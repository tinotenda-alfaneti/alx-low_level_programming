#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: nothing is returned
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x >= 9; x++)
	{
		if (x == 4 || x == 2)
		{
			continue;
		}
		_putchar(x + '0');
	}

	_putchar('\n');
}
