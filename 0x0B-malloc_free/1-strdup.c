#include "main.h"

/**
 * _strdup - duplicate string
 * @str: the string to duplicate
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	int len = 0, i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	len++;

	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		*(ptr + i) = str[i];
	}

	return (ptr);

}
