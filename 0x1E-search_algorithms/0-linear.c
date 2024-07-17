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
	int i;

	if (array == NULL)
		return (-1);

	while (i < (int)size)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}
	return (-1);
}
