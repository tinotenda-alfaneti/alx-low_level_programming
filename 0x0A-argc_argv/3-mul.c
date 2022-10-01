#include "main.h"

/**
 * main - function for multiplication
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 success, 1 for failure
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
