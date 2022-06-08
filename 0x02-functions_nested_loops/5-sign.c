#include "main.h"

/**
 * print_sign - entry point
 * @n: parameter to check
 *
 * Description: checks whether int n is positive or negative
 * Return: returns 1 and prints + and returns 0 and prints -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar("
			 '-');
		return (-1);
	}
	_putchar("\n");
}
