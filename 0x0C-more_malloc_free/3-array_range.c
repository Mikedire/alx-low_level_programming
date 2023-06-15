#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, m = 0, n = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (m  <= max - min)
		arr[m++] = n++;
	return (arr);
}
