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

	x = '\0';

	i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}

		i++;
	}

	return (x);
}
