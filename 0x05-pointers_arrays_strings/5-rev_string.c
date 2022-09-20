#include "main.h"
/**
 * rev_string - reverse a string given a pointer
 * @s: string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k;
	char *a, temp;

	a = s;

	while (s[j] != '\0')
	{
		j++;
	}

	int k = 1;

	while (k < j)
	{
		a++;
		k++;
	}

	for (i = 0; i < (j / 2); i++)
	{
		temp = s[i];
		s[i] = *a;
		*a = temp;
		a--;
	}
}
