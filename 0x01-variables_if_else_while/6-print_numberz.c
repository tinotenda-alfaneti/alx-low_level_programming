#include <stdio.h>
/**
 * main - Print numbers without using a char variable
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
