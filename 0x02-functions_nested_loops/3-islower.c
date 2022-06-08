#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if character is lower
 * @c: parameter for checking whether is lower
 *
 * Return: 1 if c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
