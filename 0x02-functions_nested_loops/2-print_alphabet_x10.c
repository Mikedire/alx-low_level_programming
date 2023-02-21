#include "main.h"
/**
 * main - prints 10 timesthe alphabet in loercase
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int m, co;
	co = 1;

	while (co < 11)
	{
		for(m = 'a' ; m <= 'z' ; m++)
		{
			_putchar(m);
		}
		co++;
		_putchar('\n');
	}
}
