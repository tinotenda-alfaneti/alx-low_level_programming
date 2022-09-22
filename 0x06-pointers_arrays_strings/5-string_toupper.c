#include "main.h"

/**
 * string_toupper - changes lower case letters to uppercase
 *@c: the string to be changed
 *
 * Return: the string in upper case
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}

		i++;
	}

	return (c);
}
