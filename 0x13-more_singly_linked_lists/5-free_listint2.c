#include "lists.h"

/**
 * free_listint2 - A function that frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temps;

	if (head == NULL)
		return;

	while (*head)
	{
		temps = *head;
		*head = (*head)->next;
		free(temps);
	}
	*head = NULL;
}
