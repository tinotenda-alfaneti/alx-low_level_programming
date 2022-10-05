#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The string .
 * @s2: The string to be concatenated to s1.
 *
 * Return: a pointer the newly-allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[concat_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		ptr[concat_index++] = s2[i];

	return (ptr);
}
