#include "main.h"

/**
 * flip_bits - flip a numer of bits
 * @n: num 1
 * @m: num 2
 * Return: number of flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int counter = 0;

	while (difference)
	{
		counter += difference & 1;
		difference >>= 1;
	}

	return (counter);
}
