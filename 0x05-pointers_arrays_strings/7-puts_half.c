#include "main.h"
/**
 * puts_half - prints half the string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int j = 0, i;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 0)
	{
		i = j / 2;
	}
	else
	{
		i = (j - 1) / 2;
	}

	for (; i < j; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
