#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: The character to fill the array
 *
 * Return: The array fillled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
