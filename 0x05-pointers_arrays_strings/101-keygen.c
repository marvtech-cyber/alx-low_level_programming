#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point.
 * Description: generates random value password
 * Return: 0 Always.
 */
int main(void)
{
	int v = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		v = rand() % 128;
		if ((c + v) > 2772)
			break;
		c = c + v;
		printf("%c", v);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
