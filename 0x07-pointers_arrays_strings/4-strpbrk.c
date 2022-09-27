#include "main.h"

/**
 * _strpbrk - Search for set of bytes
 * @s: the string to be searched
 * @accept: set of bytes to be searched
 *
 * Return: pointer to the match
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j])
			return (s + i);

	}

	return (0);
}
