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
	if (n > 0))
  {
    printf("%d is positive \n", n);
  }
  elseif (n < 0)
  {
    printf("%d\n is negative ", n);
  }
  else
  {
    printf("%d\n is zero", n)
	return (0);
}
