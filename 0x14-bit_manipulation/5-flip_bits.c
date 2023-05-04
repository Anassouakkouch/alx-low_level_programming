#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int vi;
	int a = 0;

	vi = n ^ m;
	while (vi >= 1)
	{
		if ((vi & 1) == 1)
		a++;
		vi >>= 1;
	}
	return (a);
}

