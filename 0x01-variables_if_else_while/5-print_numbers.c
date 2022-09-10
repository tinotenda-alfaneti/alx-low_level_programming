/*
 * File: 5-print_numbers.c
 * Auth: Tinotenda Rodney Alfaneti
 */
#include <stdio.h>
/**
 * main - Prints the numbers from zero to nine
 *
 * Return: 0
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; ++num)
		putchar(num);

	putchar('\n');

	return (0);
}
