#include "lists.h"

/**
 * get_nodeint_at_index - thenode at certain index in alinked list
 * @head: firstnode in linked list
 * @index: the node to return
 *  Return: the node we're looking for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
