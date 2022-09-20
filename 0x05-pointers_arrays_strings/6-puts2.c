#include "main.h"
/**
 * puts2 - print other characters
 * @str: The string to be treated
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
