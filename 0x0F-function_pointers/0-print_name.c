#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: the name to be printed
 * @f: the pointer to the function that prints
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
