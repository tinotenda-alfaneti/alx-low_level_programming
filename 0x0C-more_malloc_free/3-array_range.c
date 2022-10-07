#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: the minimum number
 * @max: the maximum number
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arrPtr;
	int i = 0, j;

	if (min > max)
		return (NULL);
	arrPtr = malloc((max - min + 1) * sizeof(int));
	if (arrPtr == NULL)
		return (NULL);
	for (j = min; j <= max; j++)
		arrPtr[i++] = j;
	return (arrPtr);
}
