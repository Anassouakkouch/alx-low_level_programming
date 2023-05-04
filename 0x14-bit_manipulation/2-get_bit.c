#include "main.h"
#include <stdio.h>
/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	m = 1 << index;
	return ((n & i) > 0);
}
