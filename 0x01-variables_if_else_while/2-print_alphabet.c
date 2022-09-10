/*
 * File: 2-print_alphabet
 * Auth: Tinotenda R. Alfaneti
 */

#include <stdio.h>
/**
 *main - Prints the letters of the alphabet using putchar
 *
 *Return: Always 0.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);

	return (0);

}
