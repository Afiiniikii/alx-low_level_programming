#include "main.h"

/**
 * set_bit - sets bit at a given index
 * @n: range
 * @index: index
 * Description: bit is set at given index
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= k;

	return (1);
}
