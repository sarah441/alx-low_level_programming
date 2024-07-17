#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of o(n)
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: number of elements
 * @value: what we seacrh for
 * Return: Always
 */
int linear_search(int *array, size_t size, int value)
{
	size_t ii = 0;

	if (!array || size == 0)
		return (-1);

	while (ii < size)
	{
		printf("Value checked array[%lu] = [%d]\n", ii, array[ii]);
		if (array[ii] == value)
			return (ii);
		ii++;
	}

	return (-1);
}
