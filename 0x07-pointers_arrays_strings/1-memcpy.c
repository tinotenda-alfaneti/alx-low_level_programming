#include "main.h"

/**
 * _memcpy - Copies bytes from one pointer to another
 * @dest: the destination of the bytes
 * @src: the source of the bytes
 * @n: the number of bytes
 *
 * Return: pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n && src[i]; i++)
	{
		*(dest + i) = src[i];
	}

	return (dest);
}
