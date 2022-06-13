#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry point
 * @a: Is a integer to swap
 * @b: Is a integer to swap
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
