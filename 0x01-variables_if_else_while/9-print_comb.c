#include <stdio.h>
/**
 * main - Prints the combinations of numbers
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
