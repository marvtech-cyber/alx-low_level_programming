#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * @c: parameter
 *
 * Return: 1 (success) otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
