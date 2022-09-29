#include "main.h"
/**
 * is_prime_number - checks for prime numbers
 * @n: the number to be checked
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (check_prime(0, 1, n));
}
/**
 * check_prime - checks if prime
 * @j: the number of divisions
 * @i: the iterator
 * @n: the number to be checked
 *
 * Return: 0 if prime and 1 otherwise
 */
int check_prime(int j, int i, int n)
{
	if (i > n && j == 2)
		return (1);
	if (i > n && j != 2)
		return (0);
	if (n % i == 0 && i <= n)
		return (check_prime(j + 1, i + 1, n));
	return (check_prime(j, i + 1, n));
}
