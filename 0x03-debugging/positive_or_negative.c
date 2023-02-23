#include "main.h"
/**
 * positive_or_negative - checking for negative or positive numbers
 *
 * @i: number checked
 *
 * Return: zero all the time
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
