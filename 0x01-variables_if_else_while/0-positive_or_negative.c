#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
*main - This is the entry
*
*Return: returns zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
  	{
    		printf("%i is positive \n", n);
 	}
  	elseif (n == 0)
  	{
    		printf("%i\n is zero \n", n);
  	}
  	else
 	 {
    		printf("%i\n is negative \n", n);
	 }
	return (0);
}
