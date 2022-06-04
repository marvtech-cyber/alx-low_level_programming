#include <stdio.h>
/**
 * main - initialization point
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		printchar(a);

	for (a = 'a'; a <= 'f'; a++)
		printchar(a);

	printchar('\n');
	return (0);
}
