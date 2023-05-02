#include "lists.h"

/**
 * and returns the head node's data n.
 * @head: A pointer to listint_t structure.
 */
int pop_listint(listint_t **head)
{
	int f;
	listint_t *new;

	if (!head || !*head)
		return (0);
	new = (*head)->next;
	f = (*head)->n;
	free(*head);
	*head = new;
	return (f);
}
