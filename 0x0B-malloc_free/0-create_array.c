#include "main.h"

/**
 * create_array - create an array
 * @size: the size of the array
 * @c: the character
 *
 * Return: the character array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);

}
