#include "main.h"

/**
 * print_alphabet - start point
 * main: a function that prints the alphabet,
 * in lowecase then  by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
