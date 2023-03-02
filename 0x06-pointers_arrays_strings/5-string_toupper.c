#include "main.h"

/**
 * string_toupper - changing all lowercase letters
 *		of a string to uppercase letter
 * @str: string to be changed
 *
 * Return: pointer to changed string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
