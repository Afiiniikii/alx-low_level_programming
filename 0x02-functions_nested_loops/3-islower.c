#include "main.h"

/**
 * _islower - function to print lower cases
 *
 * @c: parameter printed
 *
 * Return: if lower case zero otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
