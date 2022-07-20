#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: douuble pointer to the beginning of a listint_t list
 * @n: integer to add to the list
 *
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)

{
	listint_t *ele;

	if (head == NULL)
		return (NULL);
	ele = malloc(sizeof(listint_t));
	if (ele == NULL)
		return (NULL);
	ele->n = n;
	ele->next = *head;
	*head = ele;
	return (ele);
}
