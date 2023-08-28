#include "lists.h"

/**
 * listint_len - Returns number of elements in linked lists
 * @h: list of type listint traverse
 * Return: THE number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

