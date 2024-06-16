#include "lists.h"

/**
 * print_list - function print elements of a list.
 * @h: pointer to the list.
 * Return: the number of nodes.
 * @return size_t
 */
size_t print_list(const list_t *h)
{
	size_t count_elements = 0;

	/* while we have a list */
	while (h)
	{
		/* if str == null do as the requrements of the task */
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count_elements++;
	}
	return (count_elements);
}
