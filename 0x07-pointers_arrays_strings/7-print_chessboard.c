#include "main.h"

/**
 * print_chessboard - declaring a function
 * @a: pointer array
 * Return: void
 */

void print_chessboard(char (*a)[8]);

/**
 * print_chessboard - function definition
 * @a: the pointer array
 * Returns: the void
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			putchar(a[row][column]);
		}
		putchar('\n');
	}
}
