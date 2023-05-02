#include "lists.h"

/**
 * and returns the head node's data n.
 * @head: A pointer to listint_t structure.
 * Return: i or 0
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *new;

	if (!head || !*head)
		return (0);
	new = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = new;
	return (i);
}
