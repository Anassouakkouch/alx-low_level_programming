#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: head
 * 
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *privé, *nextt;

	privé = *head;
	if (index != 0)
	{
		for (i = 0 ; i < index - 1 && privé != NULL ; i++)
			privé = privé->next;
	}
	if (privé == NULL || (privé->nextt == NULL && index != 0))
		return (-1);
	nextt = privé->nextt;
	if (index != 0)
	{
		privé->nextt = nextt->nextt;
		free(nextt);
	}
	else
	{
		free(privé);
		*head = nextt;
	}
	return (1);
}
