#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to be concatenated upon
 * @src: the source string
 *
 * Return: a pointer to the new string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	for (; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
