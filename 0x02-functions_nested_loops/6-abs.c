#include "main.h"
/**
 * _abs - Calculating the absolute value of a given number
 * @c: The number to be checked
 *
 * Return: the absolute value of a given number
 */
int _abs(int c)
{
	if (c < 0)
	{
		int i = -1 * c;

		return (i);
	}

	return (c);

}
