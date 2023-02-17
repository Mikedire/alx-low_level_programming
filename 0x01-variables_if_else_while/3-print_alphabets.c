#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char apt;

        for (apt = 'a'; apt <= 'z'; apt++)
		putchar(apt);
	for (apt = 'A'; apt <= 'Z'; apt++)
		putchar(apt);
	putchar('\n');

	return (0);
}
