#include "lists.h"

/**
 * print_listint -  prints all the elements of a list.
 * @h: list to print
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t link = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		link++;
	}
	return (link);
}
