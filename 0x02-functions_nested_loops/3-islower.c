#include "main.h"

/**
 * _islower - Checks for lowercase and returns 1 if it is and 0 if it is not
 * @c: The character to be checked
 *
 * Return: The value 1 for lowercase and 0 for uppercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);

}
