#include" main.h"
#include <ctype.h>

/**
 * _isalpha - entry point
 * @c: parameter to check 
 *
 * Description: checks for alphabetic character
 * Return: returns 1 if is a letter and 0 if otherwise
 *\

 int _isalpha(int c)
 {
 	if (isalpha(c) == 1)
	{
		return(1);
	}
	else
		return (0);
}
