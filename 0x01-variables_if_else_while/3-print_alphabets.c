#include <stdio.h>

/**
 * main - initialization
 * Return: 0 (success)
 */

int main(void)
{
	char upper, lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
