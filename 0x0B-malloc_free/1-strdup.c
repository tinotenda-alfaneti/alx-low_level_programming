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

	while (str[len])
	{
		len++;
	}

	ptr = malloc((len - 1) * sizeof(char));
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
