#include "main.h"

/**
 * _putchar - writes character to c to standard output
 * @c: character to be written
 *
 * Return: 1 on success and -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
