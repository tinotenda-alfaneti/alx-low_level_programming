#include "main.h"

/**
 * _strstr - function to check for a substring
 * @haystack: the string to be checked
 * @needle: the substring
 *
 * Return: pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}

		if (needle[j])
		{
			i++;
			j = 0;
		}

		else
		{
			return (haystack + i);
		}

	}
	return (0);
}
