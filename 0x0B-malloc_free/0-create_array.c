#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 * @size: the size of the array
 * @c: the char
 *
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *y;

	if (size == 0)
		return (NULL);

	y = malloc(size * sizeof(char));

	if (y == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		y[i] = c;
	}

	return (y);

}
