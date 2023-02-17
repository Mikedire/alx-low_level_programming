#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;
	char qet;

	for (m = '0'; m <= '9'; m++)
		putchar(m);
	for (qet = 'a'; qet <= 'f'; qet++)
		putchar(qet);
	putchar('\n');

	return (0);
}
