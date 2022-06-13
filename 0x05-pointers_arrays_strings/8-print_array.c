#include <stdio.h>
#include "main.h"

/**
 * print_array - entry point
 * @a: integer pointer parameter
 * @n: integer parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
