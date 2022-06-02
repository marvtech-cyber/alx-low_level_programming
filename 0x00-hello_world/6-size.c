#include <stdio.h>
/**
 * main - prints the size of various types
 * Description: A program prints the size of various types on the compute
 * Return: 0
 */
int main(void)
{
char a;
int b;
int long  c;
printf("Size of a char: %zu byte(s)\n", sizeof(a));
printf("Size of an int: %zu byte(s)\n", sizeof(b));
printf("Size of a long int: %zu byte(s)\n", sizeof(c));
printf("Size of a long long int: %zu byte(s)\n", sizeof(int long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
