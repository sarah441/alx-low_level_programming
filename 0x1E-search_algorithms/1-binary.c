#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 binary search.
  * @array: A pointer to array to search in.
  * @size: The number of elements in the array.
  * @value: what to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r, m;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		m = l + (r - l) / 2;
		if (array[m] == value)
			return (i);
		if (array[m] > value)
			r = m - 1;
		else
			l = m + 1;
	}

	return (-1);
}
