#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @i: The integer from which the last digit is going to be found
 *
 * Return: The last digit of the number given
 */
int print_last_digit(int i)
{
	int las = i % 10;

	if (i < 0)
	{
		las = -1 * las;
	}

	_putchar(las + '0');

	return (las);
}
