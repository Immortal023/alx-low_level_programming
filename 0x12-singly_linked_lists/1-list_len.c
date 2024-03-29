#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the number of elements in a linkd list
 * @h: pointer  list_t list
 * Return: numbr of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

