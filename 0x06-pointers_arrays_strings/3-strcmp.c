#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: zero if equal and negative or positive otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int res;

	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}

	res = *s1 - *s2;

	return (res);
}
