#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the first node in the list
 * @n: An integer data to put into the new node
 *
 * Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nvx;
	listint_t *tmps;

	(void)tmps;

	nvx = malloc(sizeof(listint_t));

	if (nvx == NULL)
		return (NULL);
	nvx->n = n;
	nvx->next = NULL;
	tmps = *head;
	if (*head == NULL)
		*head = nvx;
	else
	{
		while (tmps->next != NULL)
			tmps = tmps->next;
	tmps->next = nvx;
	}
	return (*head);
}
