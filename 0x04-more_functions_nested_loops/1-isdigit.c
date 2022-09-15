#include "main.h"
/**
 * _isdigit - checking if the passed argument is a digit
 * @c: the digit
 *
 * Return: 1 or 0 if it is a digit or not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
