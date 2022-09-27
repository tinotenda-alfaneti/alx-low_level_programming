#include "main.h"

/**
 * print_diagsums - prints the diagonals of a square matrix
 * @a: pointer to the 2D array
 * @size: the size of the array
 *
 * Return: nothing is returned
 */

void print_diagsums(int *a, int size)
{
	int i;
	int fSum = 0;
	int sSum = 0;


	for (i = 0; i < size; i++)
	{
		fSum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sSum += a[i];
		a -= size;
	}

	printf("%d, %d\n", fSum, sSum);
}
