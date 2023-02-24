#include "main.h"
void print_integer(int p);

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int q)
{
	if (q == 0)
		_putchar('0');
	else if (q < 0)
	{
		_putchar('-');
		print_integer(q * -1);
	}
	else
		print_integer(q);
}

