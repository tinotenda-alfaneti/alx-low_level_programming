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
	int j, i = 1, result = 0;

	if (argc <= i)
	{
		printf("%d\n", result);
		return (0);
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isalpha(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}

			if (atoi(argv[i]) >= 0)
			{
				result += atoi(argv[i]);
			}
		}

		printf("%d\n", result);
		return (0);
	}

}

