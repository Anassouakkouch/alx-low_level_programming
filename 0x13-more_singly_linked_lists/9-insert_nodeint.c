#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index where the new node is added
 * @n: data in the new node
 *
 * Return: pointer to  new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nouveau;
	listint_t *temps = *head;

	nouveau = malloc(sizeof(listint_t));
	if (!nouveau || !head)
		return (NULL);

	nouveau->n = n;
	nouveau->next = NULL;

	if (idx == 0)
	{
		nouveau->next = *head;
		*head = nouveau;
		return (nouveau);
	}

	for (i = 0; temps && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nouveau->next = temps->next;
			temps->next = nouveau;
			return (nouveau);
		}
		else
			temps = temps->next;
	}

	return (NULL);
}
