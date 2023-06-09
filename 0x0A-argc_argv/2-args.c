#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all argument it receives
 * @argc: argument content
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
