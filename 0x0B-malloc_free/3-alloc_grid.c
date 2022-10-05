#include "main.h"
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (h_index = 0; h_index < height; h_index++)
	{
		arr[h_index] = malloc(sizeof(int) * width);

		if (arr[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(arr[h_index]);

			free(arr);
			return (NULL);
		}
	}
	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			arr[h_index][w_index] = 0;
	}

	return (arr);
}
