#include "main.h"
/**
 * rev_string - entry point
 * @s: points to the string to print
 * Description: entry pointverses the string expressed.
 */
void rev_string(char *s)
{
int x = 0;
int y = 0;
int z = 0;

while (s[y])
{
y++;
}

y--;

while (x < y + 1 / 2)
{

z = s[x];
s[x] = s[y];
s[y] = z;

y--;
x++;
}
}
