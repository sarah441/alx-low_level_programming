#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate by malloc.
 * Description: If malloc fails, terminate process 98.
 * @b: unsigned int to allocate
 * Return: void pointer to malloc space
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
