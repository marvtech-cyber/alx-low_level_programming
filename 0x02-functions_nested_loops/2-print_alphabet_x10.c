#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i <= 10)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
			putchar("%s\n", i);
		putchar("\n");
		i++;
	}
