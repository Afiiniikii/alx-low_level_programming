#include "main.h"

/**
 * set_string - declaring a function
 * @s: pointer
 * @to: char
 * Return: void
 */

void set_string(char **s, char *to);

/**
 * set_string - function definition
 * @s: the pointer to use
 * @to: the string value
 * Description: set the value of a pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
