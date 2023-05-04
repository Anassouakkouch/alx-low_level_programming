#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluate
  @index:index unsigned int
 * Return: bit at given index else -1 if error accured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int power;

	if (index > 64)
		return (-1);

	power = n >> index;

	return (power & 1);
}
