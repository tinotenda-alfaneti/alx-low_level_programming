#include "main.h"
/**
 * _strlen_recursion - find length of a string
 * @s: the string to be counted
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
