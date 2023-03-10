#include "main.h"

/**
 * _isalpha - function checking alphabet
 *
 * @c: parameters checked
 * Return: if alphabet 1 otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 127) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
