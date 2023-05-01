#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the first node in the list
 * @n:  to insert in that new node
 *
 * Return: pointer to the new node, fail =null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nouveau;

	nouveau = malloc(sizeof(listint_t));
	if (nouveau == NULL)
		return (NULL);
	nouveau->n = n;
	nouveau->next = *head;
	*head = nouveau;
	return (nouveau);
}
