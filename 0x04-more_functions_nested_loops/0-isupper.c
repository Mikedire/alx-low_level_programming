#include "main.h"

/**
 * _isupper - function that checks for uppercase chracter
 *
 *Return: 1 if c is uppercase (0) otherwise
 */

int _isupper(int c);
{
int i;

for (i = 'A'; i <= 'Z'; i++)
{
if (i == c)
{
return (1);
}
}
return (0);
}

