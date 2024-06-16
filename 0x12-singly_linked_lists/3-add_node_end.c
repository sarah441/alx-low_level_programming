#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: addres head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nod, *thing;
	size_t counte;

	new_nod = malloc(sizeof(list_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->str = strdup(str);

	for (counte = 0; str[counte]; counte++)
		;

	new_nod->len = counte;
	new_nod->next = NULL;
	thing = *head;

	if (thing == NULL)
	{
		*head = new_nod;
	}
	else
	{
		while (thing->next != NULL)
			thing = thing->next;
		thing->next = new_nod;
	}

	return (*head);
}
