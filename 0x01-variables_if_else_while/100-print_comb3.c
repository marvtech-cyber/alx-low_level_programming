#include <stdio.h>

/**
 * main - initialization point
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for(a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			if (a == 0 && b == 9)
			{
				printchar("%d%d", a,b);
			}
			else
			{
				printchar("%d%d, ", a, b);
			}
		}
