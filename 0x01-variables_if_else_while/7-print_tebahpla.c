#include <stdio.h>
/**
 *  main - Entry point
 * 
 *  Return: Always 0
 */

int main(void)
{
	char apt;

	for (apt = 'z'; apt >= 'a'; apt--)
		putchar(apt);
	        putchar('\n');

	return (0);
}
