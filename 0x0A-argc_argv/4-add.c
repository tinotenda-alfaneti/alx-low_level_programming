#include "main.h"

/**
 * main - Adds positive numbers
 * @argc: number of arguments
 * @argv: the pointers to arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i = 1, result = 0;

	if (argc <= i)
	{
		printf("%d\n", result);
		return (0);
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			if (isalpha(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				if (atoi(argv[i]) >= 0)
				{
					result += atoi(argv[i]);
				}
			}
		}

		printf("%d\n", result);
		return (0);
	}

}
