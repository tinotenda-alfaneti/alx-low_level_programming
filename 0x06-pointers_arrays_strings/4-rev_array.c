#include "main.h"

/**
 * reverse_array - reverses a given array of integers
 * @a: pointer to the array that will be reversed
 * @n: the number of elements in the array
 *
 * Return: nothing...
 */

void reverse_array(int *a, int n)
{
	int temp, i = 0;

	for (; i <= n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
