#include "main.h"
/**
 * more_numbers - print numbers
 *
 * Return: numbers from 1 to 14
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int x;

		for (x = 0; x <= 14; x++)
		{
			_putchar(x + '0');
		}

		_putchar('\n');

		i++;
	}

	_putchar('\n');
}
