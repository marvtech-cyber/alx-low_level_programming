#include "main.h"

/**
 * print_last_digit - entry point
 *@r: integer to find last digit
 *
 * Description: finds the last didit of an integer
 * Return: the value of last digit
 */
int print_last_digit(int r)
{
	int last = r % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');


	return (last);

}
