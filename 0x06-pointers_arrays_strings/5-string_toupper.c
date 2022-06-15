#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @x: pointer to string
 *
 * Return: pointer to uppercase string
 */
char *string_toupper(char *x)
{
	int j;

	j = 0;

	while (x[j] != '\0')
	{
		if (x[j] >= 97 && x[j] <= 122)
		{
			x[j] = x[j] - 32;
		}
		j++;
	}
	return (x);
}
