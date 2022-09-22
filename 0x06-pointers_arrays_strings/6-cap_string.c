#include "main.h"

/**
 * cap_string - function that capitalizes every word in a sentence
 * @c: the sentence to be capitalized
 *
 * Return: the capitalized sentence
 */

char *cap_string(char *c)
{
	char sep[] = {32, '\t', '\n', 44, ';', '!', 44, 46, '?', '\"', '(', ')', '{', '}'};
	int i = 0, k;

	while (c[i])
	{
		k = 0;

		while (k < 13)
		{
			if (i == 0 || c[i - 1] == sep[k])
			{
				if (c[i] >= 'a' && c[i] <= 'z')

					c[i] -= 32;
			}

			k++;
		}

		i++;
	}

	return (c);
}
