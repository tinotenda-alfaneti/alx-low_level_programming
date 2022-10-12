#include "function_pointers.h"
/**
 * array_iterator - function to execute a function
 * @array: the array to be iterated
 * @size: the number of iterations
 * @action: the action ot be taken
 * Return Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
	{
		return;
	}

	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
