#include "lists.h"

/**
 * reverse_listint - linked list
 * @head: point to first node in list
 * Return: pointerto thefirst node inthe new-list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		nexts = (*head)->nexts;
		(*head)->nexts = prev;
		prev = *head;
		*head = nexts;
	}

	*head = prev;

	return (*head);
}

