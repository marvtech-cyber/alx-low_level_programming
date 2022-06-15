#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes every first letter of a word in a string
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */
char *cap_string(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[j] == ' ' || s[j] == '\t' || s[j] == '\n'
		    || s[j] == ',' || s[j] == ';' || s[j] == '.'
		    || s[j] == '.' || s[j] == '!' || s[j] == '?'
		    || s[j] == '"' || s[j] == '(' || s[j] == ')'
		    || s[j] == '{' || s[j] == '}')
		{
			if (s[j + 1] >= 97 && s[j + 1] <= 122)
			{
				s[j + 1] = s[j + 1] - 32;
			}
		}
		j++;
	}
	return (s);
}
