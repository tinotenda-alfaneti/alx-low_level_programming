#include "main.h"

/**
 * _strspn - getting length of a prefix substring
 * @s: string to be search
 * @accept: prefix to be measured
 *
 * Return: bytes in s which consist of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[k]; k++)
	{
		for (k = 0; accept[i]; i++)
		{
			if (s[k] == accept[i])
			{
				break;
			}

		}

		if (!accept[i])
			break;
	}

	return (k);
}
