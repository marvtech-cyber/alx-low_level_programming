#include "main.h"

/**
 * main - starting point
 *
 * Description: prints alphabet from a to z in lowercase
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
