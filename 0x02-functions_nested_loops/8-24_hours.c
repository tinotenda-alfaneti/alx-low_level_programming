#include "main.h"
/**
 * jack_bauer - Prints the minutes in a day of Jack Bauer
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int w, x, y, z;

	for (w = 0; w <= 2; a++)
	{
		for (x = 0; b <= 9; b++)
		{
			if ((w <= 1 && x <= 9) || (w <= 2 &&  x <= 3))
			{
				for (y = 0; y <= 5; y++)
				{
					for (z = 0; z <= 9; z++)
					{
						_putchar(w + '0');
						_putchar(x + '0');
						_putchar(':');
						_putchar(y + '0');
						_putchar(z + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
