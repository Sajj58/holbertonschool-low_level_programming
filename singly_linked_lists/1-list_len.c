#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer
 * Return: number of elements in a linked  list
 */

size_t list_len(const list_t *h)

{
	size_t link = 0;

	while (h != NULL)
	{
		link++;
		h = h->next;
	}
	return (link);
}
