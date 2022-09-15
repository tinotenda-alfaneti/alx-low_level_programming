#include "main.h"

/**
 * _isalpha - Checks if the character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if the character is alphabetic and 0 if it is not
 */
int _isalpha(int c)
{
	if ((c > 98 && c < 123) || (c > 66 && c < 91))
	{
		return (1);
	}

	return (0);

}
