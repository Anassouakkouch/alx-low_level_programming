#include "lists.h"

/**
 * listint_len - returns the number on  linked list
 * @h: header to lisinit
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numbers = 0;

	while (h)
	{
		h = h->next;
		numbers++;
	}
	return (numbers);
}
