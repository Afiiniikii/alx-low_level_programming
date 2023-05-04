#include "main.h"

/**
 * binary_to_uint - converting binary number to a uint
 * @b: pointer to a character array
 * Description: convert  bin to uint
 * Return: value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
		if (b == NULL)
			return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		value <<= 1;
		if (*b++ == '1')
			value += 1;
	}
	return (value);
}
