#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: integer
 *
 * Return: 1 is greater than zero, 0 is zero, -1 is less than zero
 */
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('_');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
