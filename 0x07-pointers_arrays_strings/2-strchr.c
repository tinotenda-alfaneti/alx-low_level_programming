#include "main.h"

/**
 * _strchr - function to find occurrence of a character
 * @s: the pointer to string s
 * @c: the character to be found
 *
 * Return: the pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	char *x;
	int i;

	x = NULL;

	i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			x = (s + i);
			break;
		}

		i++;
	}

	return (x);
}
