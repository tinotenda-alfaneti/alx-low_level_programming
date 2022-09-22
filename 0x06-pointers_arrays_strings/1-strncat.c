#include "main.h"

/**
 * _strncat - A function to concatenate strings
 * @dest: The pointer to the final location of the string
 * @src: the source of the other part of the string
 * @n: The number of characters to be taken
 *
 * Return: A pointer to the result string
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0, i = 0;

	while (dest[d])
	{
		d++;
	}

	for (; i < n && src[i]; i++)
	{
		dest[d] = src[i];
		d++;
	}

	dest[d] = '\0';
	return (dest);
}
