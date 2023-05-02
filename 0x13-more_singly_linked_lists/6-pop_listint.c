#include "lists.h"

/**
 * and returns the head node's data n.
 * @head: A pointer to listint_t structure.
 * Return: i or 
 */
int pop_listint(listint_t **head)
{
	listint_t *new_mode;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_mode = (*head)->next;
	free(*head);
	*head = new_mode;
	return (n);
}
