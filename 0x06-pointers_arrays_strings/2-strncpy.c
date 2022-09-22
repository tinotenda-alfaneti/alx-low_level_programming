#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: the pointer to copy the value to
 * @src: the source of the string
 * @n: the number of letters to be copied
 *
 * Return: The pointer to the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
