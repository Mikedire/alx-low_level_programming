#include "main.h"

/**
 * jack_bauer - prints every mnute of rhe day of jack Bauer starting from 00:00 to 23:59
 * Return: value of last digit
 */

void jack_bauer(void)
{
	int m, n, p, q;

	for (m = 0; m <= 2; m++)
	{
	for (n = 0; n <= 9; n++)
	{
	if ((m <= 1 && n <=9) || (m <= 2 && n <= 3))
	{
	for (p = 0; p <= 5; p++)
	{
	for (q =0; q <= 9; q++)
	{
	_putchar(m + '0');
	_putchar(n + '0');
	_putchar(58);
	_putchar(p + '0');
	_putchar(q + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
