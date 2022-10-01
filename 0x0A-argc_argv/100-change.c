#include "main.h"
/**
 * main - prints the least number of coins
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int result = 0, num, i;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			result += (num / cents[i]);
			num -= (num / cents[i]) * cents[i];

			if (num < 0)
				break;
		}
	}
	printf("%d\n", result);
	return (0);
}
