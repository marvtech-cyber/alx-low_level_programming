#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Checks last digit of random number wheather is greater than,less than or zero
 * @n: Random number
 * @p: Last digit
 *
 * Return: returns 0 (SUCCESS)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;

	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n,p);
	
	}
	else if (p < 6 && !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n,p);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n,p);
	}
	return (0);
}
