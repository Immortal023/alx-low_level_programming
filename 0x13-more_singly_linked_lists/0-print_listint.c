#include "lists.h"

/**
 * print_listint - all the elements oflinked list
 * @h: linkd list of type listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nume = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nume++;
		h = h->next;
	}

	return (nume);
}
