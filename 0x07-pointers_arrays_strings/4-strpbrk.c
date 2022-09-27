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
	int i = 0, j = 0;

	for (; s[i]; i++)
	{
		for (; accept[j]; j++)
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
