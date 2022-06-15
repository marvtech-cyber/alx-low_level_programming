#include "main.h"
#include <stdio.h>
/**
 * reverse_array - revereses an array.
 * @a: pointer to array.
 * @n: number of elements of an array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	j = 0;
	while (j <= n)
	{
		i = a[j];
		a[j++] = a[n];
		a[n--] = i;
	}
}
