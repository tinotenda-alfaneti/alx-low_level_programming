#include "main.h"
#include <stdio.h>
/**
 *swap_int - swap the values of two integers
 *@a: Integer to swap
 *@b: another integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
