#include "lists.h"
/**
 * list_len - returns number of elements of a list.
 * @h: pointer to list.
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t count_elements;

	count_elements = 0;
	while (h)
	{
		h = h->next;
		count_elements++;
	}
	return (count_elements);
}
