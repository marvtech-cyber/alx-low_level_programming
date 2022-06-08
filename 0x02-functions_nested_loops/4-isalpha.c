#include "main.h"
#include <ctype.h>

/**
 * _isalpha - entry point
 * @c: parameter
 *
 * Description: checks for alphabetic character
 * Return: returns 1 if is a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
