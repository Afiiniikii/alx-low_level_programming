#include "main.h"

/**
 * _abs - checking absolute value
 *
 * @a: parameter check
 *
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

