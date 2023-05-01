#include "lists.h"

/**
 * print_listint - prints a linked  listint_t list
 * @h: head pointer to first node
 *
 * Return: size  of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
