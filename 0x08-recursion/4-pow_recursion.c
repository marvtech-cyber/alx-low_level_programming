#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: parameter
 * @y: parameter
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		pow = x * _pow_recursion(x, y - 1);
	return (pow);
}
