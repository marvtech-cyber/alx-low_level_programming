#include "main.h"

/**
 * main - prints alphabet from a to z in lowercase
 * Return: always 0 (Success)
 */
int main(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	
	_putchar("\n");
	return (0);
}
