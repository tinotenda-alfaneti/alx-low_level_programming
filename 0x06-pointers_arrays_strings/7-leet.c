#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: the string to be converted
 *
 * Return: the encorded string
 */

char *leet(char *c)
{
	int i = 0, j = 0;
	char old[] = {'A', 'E', 'O', 'T', 'L'};
	char new[] = {'4', '3', '0', '7', '1'};

	while (c[i])
	{
		j = 0;

		while (j < 5)
		{
			if (c[i] == old[j] || c[i] - 32 == old[j])
			{
				c[i] = new[j];
			}

			j++;
		}

		i++;
	}

	return (c);
}
