#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char d;

	d = '0';

	while (d <= '9')
	{
		putchar(d);
		++d;
	}
	putchar('\n');

	return (0);
}
