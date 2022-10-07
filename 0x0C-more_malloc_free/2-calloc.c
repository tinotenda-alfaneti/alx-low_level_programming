#include "main.h"
/**
 * _calloc - allocate memory for an array
 * @nmemb: elements
 * @size: size of array
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *tmp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	tmp = ptr;
	for (i = 0; i < (size * nmemb); i++)
		tmp[i] = '\0';
	return (ptr);

}
