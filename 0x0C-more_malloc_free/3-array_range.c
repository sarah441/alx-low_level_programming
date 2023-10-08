#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array.
 * @min: The first value array.
 * @max: The last value array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the created array.
 */
int *array_range(int min, int max)
{
	int *p, n, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		p[n] = min++;

	return (p);
}
