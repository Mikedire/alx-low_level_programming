#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid -...
 * @width: ..
 * @height: ..
 *
 * Return: ..
 */
int **alloc_grid(int width, int height)
{
	int i, j, x, y;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			a[x][y] = 0;
		}
	}

	return (a);
}
