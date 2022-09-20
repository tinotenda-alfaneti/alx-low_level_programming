#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: array containing integers
 * @n: Length of an array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
