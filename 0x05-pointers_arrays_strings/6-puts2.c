#include "main.h"

/**
 * puts2 - printing characters of a string
 * @str: string reference
 * Return: zero
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
