#include "main.h"

int check_palindrome(char *s, int l, int r);
/**
 * is_palindrome - checks is a word is palindrome
 * @s: the pointer to the char array
 *
 * Return: 0 if no and 1 if yes
 */
int is_palindrome(char *s)
{
	int r = _strlen_recursion(s) - 1;

	if (*s == '0')
		return (1);
	return (check_palindrome(s, 0, r));
}
/**
 * check_palindrome - checks for palindrome nature
 * @s: the word
 * @l: left index
 * @r: the right index
 *
 * Return: 0 or 1
 */

int check_palindrome(char *s, int l, int r)
{
	if (s == NULL || l < 0 || r < 0)
		return (0);

	if (l >= r)
	{
		return (1);
	}
	if (s[l] == s[r])
		return (check_palindrome(s, l + 1, r - 1));

	return (0);
}
/**
 * _strlen_recursion - calculate string length
 * @s: string to find length for
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}
