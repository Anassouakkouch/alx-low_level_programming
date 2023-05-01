#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints 
 * @h: head linked list
 * Return: the number of nods
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
