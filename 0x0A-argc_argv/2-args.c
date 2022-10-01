#include "main.h"

/**
 * main - method for printing all arguments
 * @argc: count of the arguments
 * @argv: array of pointers to string arguments
 *
 * Return: 0 if sucessful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
