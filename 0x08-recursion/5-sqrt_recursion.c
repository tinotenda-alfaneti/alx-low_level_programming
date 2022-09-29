#include "main.h"

/**
 * _sqrt_recursion - calculates square root
 * @n: the number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_helper(1, n));
}

/**
 *_helper - checks for squareroot
 * @a: guess number
 * @b: number to find square root for
 *
 * Return: square root or -1
 */

int _helper(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (_helper(a + 1, b));
}
