#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program that adds positive members
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int a, sum = 0;
	char *b;

	if (argc >1)
	{
		for (i = 1; i < argc; i++)
		{
			b = argv[i];

			for (a = 0; a < strlen(b); a++)
			{
				if (b[a] < 48 || b[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(b);
			b++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
