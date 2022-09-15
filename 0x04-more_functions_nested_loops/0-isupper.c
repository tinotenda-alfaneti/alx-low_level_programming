#include "main.h"
/**
 * _isupper - the function to check for uppercase
 * @c: the number to be checked
 *
 * Return: 1 or 0 depending on the case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
