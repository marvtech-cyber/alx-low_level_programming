#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Starting point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n % 10 + '0');
	}
	putchar('\n');
	return (0);
}
