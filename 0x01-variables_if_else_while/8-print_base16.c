#include <stdio.h>
/**
 * main - initialization point
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	printchar('\n');
	return (0);
}
