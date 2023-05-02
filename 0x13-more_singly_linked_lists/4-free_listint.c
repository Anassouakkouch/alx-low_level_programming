#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: A pointer to listint_t structure
 * return null
 */
void free_listint(listint_t *head)
{
	listint_t *temps;

	while ((temps = head) != NULL)
	{
		head = head->next;
		free(temps);
	}
}
