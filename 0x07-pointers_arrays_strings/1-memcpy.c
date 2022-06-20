#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area of src to dest, from + number until n
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: number of bytes src copies
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
