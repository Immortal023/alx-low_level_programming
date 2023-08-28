#include "lists.h"

/**
 * pop_listint - Deletes head node of the linked list
 * @head: the first element in linked list
 * Return: data insideelements that was deleted,
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num1;

	if (!head || !*head)
		return (0);

	num1 = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num1);
}
