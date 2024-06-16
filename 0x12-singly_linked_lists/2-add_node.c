#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nod;
	size_t counte = 0;

	new_nod = malloc(sizeof(list_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->str = strdup(str);

	while (str[counte])
		counte++;

	new_nod->len = counte;
	new_nod->next = *head;
	*head = new_nod;

	return (*head);
}
