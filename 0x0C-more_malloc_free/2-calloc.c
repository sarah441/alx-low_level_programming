#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory of array of a certain number
 * @nmemb: The number of elements.
 * @size: The byte size of each element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *r;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = malloc(size * nmemb);

	if (r == NULL)
		return (NULL);

	p = r;

	for (i = 0; i < (size * nmemb); i++)
		p[i] = '\0';

	return (r);
}
