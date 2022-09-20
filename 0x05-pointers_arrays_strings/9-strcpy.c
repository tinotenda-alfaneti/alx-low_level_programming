#include "main.h"

/**
 * _strcpy - coppying a string
 * @dest: value destination
 * @src: value of source
 *
 * Return: pointer to destination\
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
