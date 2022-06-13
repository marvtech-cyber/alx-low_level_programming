#include "main.h"

/**
 *  *_strcpy - entry point
 *  @dest: string pointer
 *  @src: buffer pointer
 *  Description: copies string pointed by src
 *  Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			return (dest);
		i++;
	}
>>>>>>> 5b2399009515625cbe854ae76b0c6bb666dafddb
	return (dest);
}
