#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 *
 * Description: prints lowercase alphabet without q and e
 * Return: Always 0 when successful 
 */

int main(void)
{
	char letters;

	for(letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'q' && letters = 'e')
		{
			putchar(letters);
		}
	}
	putchar('\n');

	return (0);
}
