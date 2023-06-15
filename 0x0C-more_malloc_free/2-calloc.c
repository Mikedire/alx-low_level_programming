#include "main.h"
#include <stdlib.h>

/**
  * _calloc -  a function that allocates memory for an array, using malloc
  * @nmemb: the number of members
  * @size: size
  *
  * Return: ...
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, m = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = nmemb * size;
	p = malloc(m);

	if (p == NULL)
		return (NULL);

	while (i < m)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
