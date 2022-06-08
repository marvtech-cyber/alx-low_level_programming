#include "main.h"

/**
 *  times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j, u;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar ('0');

		for (j = 1 ; j <= 9 ; j++)
		{
			u = i * j;

			_putchar(',');
			_putchar(' ');

			if (u <= 9)
			{
				_putchar(' ');
				_putchar(u + '0');
			}
			else
			{
				_putchar((u / 10) + '0');
				_putchar((u % 10) + '0');
			}
		}
		_putchar('\n');
	}

}
