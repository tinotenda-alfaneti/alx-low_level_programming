#include "main.h"
/**
 * string_nconcat - concatenates strings
 * @s1: string to be conc. to
 * @s2: string to concatenate
 * @n: the number of characters to take
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int conc_index = 0, len = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len])
		len++;
	len++;
	ptr = malloc((len + n) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[conc_index++] = s1[i];
	for (i = 0; i < n && s2[i]; i++)
		ptr[conc_index++] = s2[i];
	ptr[conc_index] = '\0';
	return (ptr);
}
