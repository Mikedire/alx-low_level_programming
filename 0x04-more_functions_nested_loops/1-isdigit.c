#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: number
 * Return: (1) if c is digit (0) otherwise
 */
int _isdigit(int c)
{
int i;

for (i = '0'; i <= 9; i++)
{
if (i == c)
{
return (1);
}
}
return (0);
}

