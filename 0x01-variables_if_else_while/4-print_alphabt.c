/*
 *File: 4-print_alphabt.c
 *Auth: Tinotenda Rodney Alfaneti
 */
#include <stdio.h>
/**
 * main - Prints the whole alphabet except the q and e
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
