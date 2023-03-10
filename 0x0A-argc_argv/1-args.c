#include <stdio.h>

/**
 * main - point of entry
 * Description: prints number of command line arguements
 * @argc: number of all arguements
 * @argv: array of arguemnts
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
